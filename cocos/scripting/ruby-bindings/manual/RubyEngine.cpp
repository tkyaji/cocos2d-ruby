//
//  RubyEngine.cpp
//  cocos2d_ruby_bindings
//
//  Created by tkyaji on 2015/01/22.
//
//

#include "RubyEngine.h"
#include "ruby_cocos2dx_auto.hpp"
#include "ruby_global_manual.hpp"
#include "RubyBasicConversions.h"
#include "mruby/string.h"
#include "mruby/compile.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/array.h"
#include "mruby/range.h"
#include "mruby/hash.h"
#include "mruby/proc.h"
#include "mruby/variable.h"

NS_CC_BEGIN

RubyEngine* RubyEngine::_defaultEngine = nullptr;

static const std::string TEXT_FILE_EXT = ".rb";
static const std::string BYTE_FILE_EXT = ".rbc";

RubyEngine* RubyEngine::getInstance(void)
{
    if (!_defaultEngine)
    {
        _defaultEngine = new RubyEngine();
        _defaultEngine->init();
    }
    return _defaultEngine;
}

RubyEngine::RubyEngine(void) {
    _mrb = mrb_open();
}

RubyEngine::~RubyEngine(void)
{
    _defaultEngine = nullptr;
    if (_mrb) {
        mrb_close(_mrb);
    }
}

bool RubyEngine::init(void)
{
    if (!_mrb) {
        return false;
    }
    
#if CC_ENABLE_SCRIPT_BINDING_MEMORY_CONTROL
    mrb_value refpool = mrb_ary_new(_mrb);
    mrb_gv_set(_mrb, mrb_intern_cstr(_mrb, "$__REFERENCE_POOL__"), refpool);
    mrb_gv_set(_mrb, mrb_intern_cstr(_mrb, "$__REFERENCE_POOL_COUNTER__"), mrb_fixnum_value(0));
#endif
    
    register_all_global_manual(_mrb);
    
    register_all_cocos2dx(_mrb);
    
    return true;
}

void RubyEngine::removeScriptObjectByObject(Ref* pObj)
{
    if (pObj->_scriptObject) {
        _ScriptObject* script_obj = (_ScriptObject*)pObj->_scriptObject;
        delete script_obj;
    }
}

bool RubyEngine::retainScriptObjectByObject(Ref* obj)
{
#if CC_ENABLE_SCRIPT_BINDING_MEMORY_CONTROL
    static mrb_int ref_index = 0;
    if (obj->_scriptObject) {
        _ScriptObject *script_obj = (_ScriptObject*)obj->_scriptObject;
        mrb_value refpool = mrb_gv_get(_mrb, mrb_intern_cstr(_mrb, "$__REFERENCE_POOL__"));
        if (! mrb_array_p(refpool)) {
            return false;
        }
        if (script_obj->ref_count == 0) {
            mrb_ary_set(_mrb, refpool, ref_index, script_obj->mrb_val);
            script_obj->refpool_idx = ref_index;
            ref_index++;
        }
        script_obj->ref_count++;
        return true;
    }
#endif
    return false;
}

bool RubyEngine::releaseScriptObjectByObject(Ref* obj)
{
#if CC_ENABLE_SCRIPT_BINDING_MEMORY_CONTROL
    if (obj->_scriptObject) {
        _ScriptObject *script_obj = (_ScriptObject*)obj->_scriptObject;
        mrb_value refpool = mrb_gv_get(_mrb, mrb_intern_cstr(_mrb, "$__REFERENCE_POOL__"));
        if (! mrb_array_p(refpool)) {
            return false;
        }
        if (script_obj->refpool_idx < 0) {
            return false;
        }
        script_obj->ref_count--;
        if (script_obj->ref_count == 0) {
            mrb_ary_set(_mrb, refpool, script_obj->refpool_idx, mrb_nil_value());
            script_obj->refpool_idx = -1;
        }
        return true;
    }
#endif
    return false;
}

void RubyEngine::removeScriptHandler(int nHandler)
{
}

int RubyEngine::executeString(const char* codes)
{
    return executeString(codes, "code");
}

int RubyEngine::executeString(const char* codes, const char* filename)
{
    mrb_state* mrb = _mrb;
    
    mrbc_context *cxt = mrbc_context_new(mrb);
    mrbc_filename(mrb, cxt, filename);
    
    int arn = mrb_gc_arena_save(mrb);
    
    mrb_load_string_cxt(mrb, codes, cxt);
    
    bool ret = 0;
    if (mrb->exc) {
        printError();
        ret = 1;
    }
    
    mrb_gc_arena_restore(mrb, arn);
    
    mrbc_context_free(mrb, cxt);
    
    return ret;
}

int RubyEngine::executeScriptFile(const char* filename)
{
    std::string filename_str(filename);
    std::string realfile = findFile(filename_str);
    
    auto utils = cocos2d::FileUtils::getInstance();
    ssize_t size = 0;
    unsigned char* file_text = utils->getFileData(realfile, "rb", &size);
    std::string codes((char*)file_text, size);
    
    return executeString(codes.c_str(), filename);
}

int RubyEngine::executeGlobalFunction(const char* functionName)
{
    return 0;
}

int RubyEngine::sendEvent(ScriptEvent* evt)
{
    return 0;
}

int RubyEngine::handleTouchEvent(void* data)
{
    return 0;
}

int RubyEngine::handleMenuClickedEvent(void* data)
{
    return 0;
}

bool RubyEngine::handleAssert(const char *msg)
{
    return true;
}

bool RubyEngine::parseConfig(ConfigType type, const std::string& str)
{
    return true;
}

void RubyEngine::addSearchPath(const char* path)
{
    mrb_state* mrb = _mrb;
    mrb_value load_path_arr = mrb_gv_get(mrb, mrb_intern_cstr(mrb, "$LOAD_PATH"));
    
    if (! mrb_array_p(load_path_arr)) {
        load_path_arr = mrb_ary_new(mrb);
        mrb_value path_val = mrb_str_new_cstr(mrb, path);
        mrb_ary_push(mrb, load_path_arr, path_val);
        mrb_gv_set(mrb, mrb_intern_cstr(mrb, "$LOAD_PATH"), load_path_arr);
    } else {
        mrb_value path_val = mrb_str_new_cstr(mrb, path);
        mrb_ary_push(mrb, load_path_arr, path_val);
    }
}

void RubyEngine::printError()
{
    mrb_state* mrb = _mrb;
    mrb_print_error(mrb);
    mrb->exc = 0;
}

std::string RubyEngine::findFile(std::string filename)
{
    mrb_state* mrb = _mrb;
    
    mrb_value load_path_arr = mrb_gv_get(mrb, mrb_intern_cstr(mrb, "$LOAD_PATH"));
    
    size_t pos = filename.rfind(".");
    if (pos > 0) {
        filename = filename.substr(0, pos);
    }
    
    auto utils = cocos2d::FileUtils::getInstance();
    bool is_notify = utils->isPopupNotify();
    utils->setPopupNotify(false);
    std::string realfile = "";
    bool find = false;
    
    if (mrb_array_p(load_path_arr)) {
        mrb_int len = mrb_ary_len(mrb, load_path_arr);
        for (mrb_int i = 0; i < len; i++) {
            mrb_value path = mrb_ary_ref(mrb, load_path_arr, i);
            if (mrb_string_p(path)) {
                char* path_cstr = mrb_str_to_cstr(mrb, path);
                std::string path_str(path_cstr);
                path_str = path_str.append("/");
                
                realfile = path_str.append(filename).append(TEXT_FILE_EXT);
                if (utils->isFileExist(realfile)) {
                    find = true;
                    break;
                }
                realfile = path_str.append(filename).append(BYTE_FILE_EXT);
                if (utils->isFileExist(realfile)) {
                    find = true;
                    break;
                }
            }
        }
    }
    
    if (! find) {
        realfile = filename.append(TEXT_FILE_EXT);
        if (utils->isFileExist(realfile)) {
            find = true;
        }
        if (! find) {
            realfile = filename.append(BYTE_FILE_EXT);
            if (utils->isFileExist(realfile)) {
                find = true;
            }
        }
    }
    
    if (! find) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "specific file is not exist.");
    }
    
    utils->setPopupNotify(is_notify);
    
    return realfile;
}

NS_CC_END
