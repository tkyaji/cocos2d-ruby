//
//  ruby_global_manual.cpp
//  cocos2d_ruby_bindings
//
//  Created by tkyaji on 2015/02/03.
//
//

#include "ruby_global_manual.hpp"
#include "mruby/class.h"
#include "mruby/proc.h"
#include "mruby/compile.h"
#include "mruby/variable.h"
#include "mruby/array.h"
#include "mruby/string.h"
#include "RubyEngine.h"


mrb_value ruby_global_load(mrb_state* mrb, mrb_value self)
{
    auto engine = cocos2d::RubyEngine::getInstance();
    
    char* filename_cstr = nullptr;
    mrb_get_args(mrb, "s", &filename_cstr);
    auto filename = std::string(filename_cstr);
    
    std::string realfile = engine->findFile(filename);
    engine->executeScriptFile(realfile.c_str());
    
    return mrb_nil_value();
}

mrb_value ruby_global_require(mrb_state* mrb, mrb_value self)
{
    /*
     const char* filename_cstr = nullptr;
     mrb_get_args(mrb, "s", &filename_cstr);
     std::string filename(filename_cstr);
     */
    
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);
    if (argc == 0) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "require argument is empty.");
        return mrb_nil_value();
    }
    mrb_value str = argv[0];
    if (! mrb_string_p(str)) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "require argument is not string.");
        return mrb_nil_value();
    }
    char *filename_cstr = mrb_str_to_cstr(mrb, str);
    std::string filename(filename_cstr);
    
    auto engine = cocos2d::RubyEngine::getInstance();
    std::string realfile = engine->findFile(filename);
    
    mrb_value loaded_path_arr = mrb_gv_get(mrb, mrb_intern_cstr(mrb, "$LOADED_FEATURES"));
    if (mrb_array_p(loaded_path_arr)) {
        mrb_int len = mrb_ary_len(mrb, loaded_path_arr);
        for (mrb_int i = 0; i < len; i++) {
            mrb_value path = mrb_ary_ref(mrb, loaded_path_arr, i);
            const char* path_cstr = mrb_str_to_cstr(mrb, path);
            if (realfile.compare(path_cstr) == 0) {
                return mrb_nil_value();
            }
        }
    }
    
    if (! mrb_array_p(loaded_path_arr)) {
        loaded_path_arr = mrb_ary_new(mrb);
        mrb_value path = mrb_str_new_cstr(mrb, realfile.c_str());
        mrb_ary_push(mrb, loaded_path_arr, path);
        mrb_gv_set(mrb, mrb_intern_cstr(mrb, "$LOADED_FEATURES"), loaded_path_arr);
    } else {
        mrb_value path = mrb_str_new_cstr(mrb, realfile.c_str());
        mrb_ary_push(mrb, loaded_path_arr, path);
    }
    engine->executeScriptFile(realfile.c_str());
    
    return mrb_nil_value();
}

mrb_value ruby_global_print(mrb_state* mrb, mrb_value self)
{
    mrb_value argv;
    
#if COCOS2D_DEBUG > 0
    mrb_get_args(mrb, "o", &argv);
    if (mrb_string_p(argv)) {
        const char* str = mrb_str_to_cstr(mrb, argv);
        if (strcmp(str, "\n") != 0) {
            CCLOG("[RUBY] %s", str);
        }
    }
#endif
    
    return argv;
}

void register_all_global_manual(mrb_state* mrb)
{
    mrb_define_method(mrb, mrb->kernel_module, "__printstr__", ruby_global_print, ARGS_REQ(1));
    mrb_define_method(mrb, mrb->kernel_module, "require", ruby_global_require, ARGS_REQ(1));
    mrb_define_method(mrb, mrb->kernel_module, "load", ruby_global_load, ARGS_REQ(1));
}
