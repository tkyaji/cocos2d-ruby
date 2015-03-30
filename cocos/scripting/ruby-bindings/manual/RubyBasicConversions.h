//
//  RubyBasicConversions.h
//  cocos2d_ruby_bindings
//
//  Created by tkyaji on 2015/01/27.
//
//

#ifndef __cocos2d_ruby_bindings__RubyBasicConversions__
#define __cocos2d_ruby_bindings__RubyBasicConversions__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "mruby.h"
#include "mruby/string.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/array.h"
#include "mruby/hash.h"
#include "mruby/range.h"
#include "mruby/proc.h"
#include "mruby/variable.h"
#include "mruby/value.h"

using namespace cocos2d;

struct _ScriptObject
{
    mrb_state mrb;
    mrb_value mrb_val;
    const char *class_name;
    int ref_count = 0;
    mrb_int refpool_idx = -1;
    
    _ScriptObject(mrb_state _mrb, mrb_value _mrb_val, const char *_class_name)
    : mrb(_mrb), mrb_val(_mrb_val), class_name(_class_name)
    {
        //        CCLOG("create %s instance", class_name);
    }
    ~_ScriptObject()
    {
        //        CCLOG("delete %s instance", class_name);
    }
};

extern std::unordered_map<std::string, std::string> g_rubyType;
extern std::unordered_map<std::string, struct mrb_data_type*> g_rubyDataType;
extern std::vector<mrb_value> g_rubyValue;

/**
 Because all override functions wouldn't be bound,so we must use `typeid` to get the real class name
 */
template <class T>
const char* getRubyTypeName(T* ret, const char* type)
{
    if (nullptr != ret)
    {
        std::string hashName = typeid(T).name();
        auto iter =  g_rubyType.find(hashName);
        if (g_rubyType.end() != iter)
        {
            return iter->second.c_str();
        }
        else
        {
            return type;
        }
    }
    
    return nullptr;
}

// ruby data type
static void ruby_cocos2dx_Ref_finalize(mrb_state *mrb, void *ptr)
{
#if CC_ENABLE_SCRIPT_BINDING_MEMORY_CONTROL
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (cc::Ref)");
#endif
    cocos2d::Ref* self = static_cast<cocos2d::Ref*>(ptr);
    self->release();
#endif
}

static struct mrb_data_type ruby_cocos2dx_Ref_type = {"cc::Ref", ruby_cocos2dx_Ref_finalize};

template <class T>
struct mrb_data_type* getRubyDataType(T* ret)
{
    if (std::is_base_of<cocos2d::Ref, T>::value) {
        return &ruby_cocos2dx_Ref_type;
    }
    
    std::string hashName = typeid(T).name();
    auto iter =  g_rubyDataType.find(hashName);
    if (g_rubyDataType.end() != iter)
    {
        return iter->second;
    }
    
    // TODO: error handle
    return nullptr;
}


// to native
extern bool rubyval_to_ulong(mrb_state* mrb , mrb_value arg, unsigned long* outValue, const char* funcName="");
extern bool rubyval_to_ushort(mrb_state* mrb, mrb_value arg, unsigned short* outValue, const char* funcName = "");
extern bool rubyval_to_int32(mrb_state* mrb, mrb_value arg, int* outValue, const char* funcName = "");
extern bool rubyval_to_uint32(mrb_state* mrb, mrb_value arg, unsigned int* outValue, const char* funcName = "");
extern bool rubyval_to_uint16(mrb_state* mrb, mrb_value arg, uint16_t* outValue, const char* funcName = "");
extern bool rubyval_to_boolean(mrb_state* mrb, mrb_value arg, bool* outValue, const char* funcName = "");
extern bool rubyval_to_number(mrb_state* mrb, mrb_value arg, double* outValue, const char* funcName = "");
extern bool rubyval_to_long_long(mrb_state* mrb, mrb_value arg, long long* outValue, const char* funcName = "");
extern bool rubyval_to_std_string(mrb_state* mrb, mrb_value arg, std::string* outValue, const char* funcName = "");
extern bool rubyval_to_long(mrb_state* mrb, mrb_value arg, long* outValue, const char* funcName = "");
extern bool rubyval_to_ssize(mrb_state* mrb, mrb_value arg, ssize_t* outValue, const char* funcName = "");
extern bool rubyval_to_array(mrb_state* mrb, mrb_value arg, __Array** outValue, const char* funcName = "");
extern bool rubyval_to_dictionary(mrb_state* mrb, mrb_value arg, __Dictionary** outValue, const char* funcName = "");
/*
 extern bool rubyval_to_array_of_vec2(mrb_state* mrb, mrb_value arg,cocos2d::Vec2 **points, int *numPoints, const char* funcName = "");
 extern bool rubyvals_variadic_to_array(mrb_state* mrb,int argc, __Array** ret);
 extern bool rubyvals_variadic_to_ccvaluevector(mrb_state* mrb, int argc, cocos2d::ValueVector* ret);
 extern bool rubyval_to_size(mrb_state* mrb, mrb_value arg, Size* outValue, const char* funcName = "");
 extern bool rubyval_to_rect(mrb_state* mrb, mrb_value arg, Rect* outValue, const char* funcName = "");
 extern bool rubyval_to_color3b(mrb_state* mrb, mrb_value arg, Color3B* outValue, const char* funcName = "");
 extern bool rubyval_to_color4b(mrb_state* mrb, mrb_value arg, Color4B* outValue, const char* funcName = "");
 extern bool rubyval_to_color4f(mrb_state* mrb, mrb_value arg, Color4F* outValue, const char* funcName = "");
 extern bool rubyval_to_physics_material(mrb_state* mrb, mrb_value arg, cocos2d::PhysicsMaterial* outValue, const char* funcName = "");
 extern bool rubyval_to_affinetransform(mrb_state* mrb, mrb_value arg, AffineTransform* outValue, const char* funcName = "");
 extern bool rubyval_to_fontdefinition(mrb_state* mrb, mrb_value arg, FontDefinition* outValue , const char* funcName = "");
 extern bool rubyval_to_mat4(mrb_state* mrb, mrb_value arg, cocos2d::Mat4* outValue , const char* funcName = "");
 extern bool rubyval_to_vec2(mrb_state* mrb, mrb_value arg,cocos2d::Vec2* outValue, const char* funcName = "");
 extern bool rubyval_to_vec3(mrb_state* mrb, mrb_value arg,cocos2d::Vec3* outValue, const char* funcName = "");
 extern bool rubyval_to_vec4(mrb_state* mrb, mrb_value arg,cocos2d::Vec4* outValue, const char* funcName = "");
 extern bool rubyval_to_blendfunc(mrb_state* mrb, mrb_value arg, cocos2d::BlendFunc* outValue, const char* funcName = "");
 extern bool rubyval_to_ttfconfig(mrb_state* mrb, mrb_value arg, cocos2d::TTFConfig* outValue, const char* funcName = "");
 extern bool rubyval_to_uniform(mrb_state* mrb, mrb_value arg, cocos2d::Uniform* outValue, const char* funcName = "");
 extern bool rubyval_to_vertexattrib(mrb_state* mrb, mrb_value arg, cocos2d::VertexAttrib* outValue, const char* funcName = "");
 extern bool rubyval_to_mesh_vertex_attrib(mrb_state* mrb, mrb_value arg, cocos2d::MeshVertexAttrib* ret, const char* funcName = "");
 extern bool rubyval_to_quaternion(mrb_state* mrb, mrb_value arg, cocos2d::Quaternion* outValue, const char* funcName = "");
 */
extern bool rubyval_to_ccvalue(mrb_state* mrb, mrb_value arg, cocos2d::Value* ret, const char* funcName = "");
extern bool rubyval_to_ccvaluemap(mrb_state* mrb, mrb_value arg, cocos2d::ValueMap* ret, const char* funcName = "");
extern bool rubyval_to_ccvaluemapintkey(mrb_state* mrb, mrb_value arg, cocos2d::ValueMapIntKey* ret, const char* funcName = "");
extern bool rubyval_to_ccvaluevector(mrb_state* mrb, mrb_value arg, cocos2d::ValueVector* ret, const char* funcName = "");
extern bool rubyval_to_std_vector_float(mrb_state* mrb, mrb_value arg, std::vector<float>* ret, const char* funcName = "");
extern bool rubyval_to_std_vector_ushort(mrb_state* mrb, mrb_value arg, std::vector<unsigned short>* ret, const char* funcName = "");
extern bool rubyval_to_std_vector_string(mrb_state* mrb, mrb_value arg, std::vector<std::string>* ret, const char* funcName = "");
extern bool rubyval_to_std_vector_int(mrb_state* mrb, mrb_value arg, std::vector<int>* ret, const char* funcName = "");
extern bool rubyval_to_carray_float(mrb_state* mrb, mrb_value arg, float** ret, const char* funcName = "");

template <class T>
bool rubyval_to_std_vector_object(mrb_state* mrb, mrb_value arg, std::vector<T*>* ret, const char* type, const char* funcName = "")
{
    if (arg.tt != mrb_vtype::MRB_TT_ARRAY) {
        return false;
    }
    
    mrb_int len = mrb_ary_len(mrb, arg);
    for (mrb_int i = 0; i < len; i++) {
        mrb_value v = mrb_ary_ref(mrb, arg, i);
        
        T* obj = nullptr;
        rubyval_to_object(mrb, v, type, &obj);
        
        ret->push_back(obj);
    }
    
    return true;
}

template <class T>
bool rubyval_to_ccvector(mrb_state* mrb, mrb_value arg, cocos2d::Vector<T>* ret, const char* funcName = "")
{
    if (arg.tt != mrb_vtype::MRB_TT_ARRAY) {
        return false;
    }
    
    mrb_int len = mrb_ary_len(mrb, arg);
    for (mrb_int i = 0; i < len; i++) {
        mrb_value val = mrb_ary_ref(mrb, arg, i);
        Ref* ref =static_cast<Ref*>(mrb_get_datatype(mrb, val, &ruby_cocos2dx_Ref_type));
        T obj = static_cast<T>(ref);
        if (nullptr != obj)
            ret->pushBack(obj);
    }
    
    return true;
}

template <class T>
bool rubyval_to_ccmap_string_key(mrb_state* mrb, mrb_value arg, cocos2d::Map<std::string, T>* ret, const char* funcName = "")
{
    if (! mrb_hash_p(arg)) {
        return false;
    }
    
    mrb_value key_arr = mrb_hash_keys(mrb, arg);
    mrb_int len = mrb_ary_len(mrb, key_arr);
    for (mrb_int i = 0; i < len; i++) {
        mrb_value hk = mrb_ary_ref(mrb, key_arr, i);
        mrb_value hv = mrb_hash_get(mrb, arg, hk);
        
        std::string str_key = "";
        if (mrb_string_p(hk)) {
            char *kstr = mrb_str_to_cstr(mrb, hk);
            str_key = std::string(kstr);
        } else if (mrb_symbol_p(hk)) {
            mrb_sym sym = mrb_symbol(hk);
            const char* kstr = mrb_sym2name(mrb, sym);
            str_key = std::string(kstr);
        }
        
        Ref* ref =static_cast<Ref*>(mrb_get_datatype(mrb, hv, &ruby_cocos2dx_Ref_type));
        T obj = static_cast<T>(ref);
        if (nullptr != obj)
            ret->insert(str_key, obj);
    }
    
    return true;
}

template <class T>
bool rubyval_to_object(mrb_state* mrb, mrb_value arg, const char* type, T** ret)
{
    if (arg.tt != mrb_vtype::MRB_TT_DATA) {
        // TODO: support ruby object
        return false;
    }
    
    struct RClass* rclass = mrb_obj_class(mrb, arg);
    bool match = false;
    do {
        const char* name = mrb_class_name(mrb, rclass);
        if (strcmp(name, "Object") == 0) {
            // no match
            break;
        }
        if (strcmp(name, type) == 0) {
            match = true;
            break;
        }
    } while ((rclass = rclass->super));
    if (! match) {
        return false;
    }
    
    mrb_data_type* data_type = getRubyDataType(*ret);
    if (nullptr == data_type) {
        CCLOG("could not get mrb_data_type for %s.", type);
    }
    *ret = static_cast<T*>(mrb_get_datatype(mrb, arg, data_type));
    if (nullptr == *ret) {
        return false;
    }
    
    if (std::is_base_of<cocos2d::Ref, T>::value) {
        cocos2d::Ref* ref = (cocos2d::Ref*)*ret;
        ref->_scriptObject = new _ScriptObject(*mrb, arg, type);
    }
    
    return true;
}

template <typename T>
bool rubyval_to_std_vector_number(mrb_state* mrb, mrb_value arg, std::vector<T>* ret, const char* funcName)
{
    if (! mrb_array_p(arg)) {
        return false;
    }
    
    mrb_int len = mrb_ary_len(mrb, arg);
    for (mrb_int i = 0; i < len; i++) {
        mrb_value v = mrb_ary_ref(mrb, arg, i);
        T numv;
        if (mrb_fixnum_p(v)) {
            mrb_int val = mrb_fixnum(v);
            numv = (T)val;
        } else if (mrb_float_p(v)) {
            mrb_float val = mrb_float(v);
            numv = (T)val;
        }
        ret->push_back(numv);
    }
    
    return true;
}


// from native

/*
 extern void vec2_to_rubyval(mrb_state* mrb,const cocos2d::Vec2& vec2);
 extern void vec3_to_rubyval(mrb_state* mrb,const cocos2d::Vec3& vec3);
 extern void vec4_to_rubyval(mrb_state* mrb,const cocos2d::Vec4& vec4);
 extern void vec2_array_to_rubyval(mrb_state* mrb,const cocos2d::Vec2* points, int count);
 extern void size_to_rubyval(mrb_state* mrb,const Size& sz);
 extern void rect_to_rubyval(mrb_state* mrb,const Rect& rt);
 extern void color3b_to_rubyval(mrb_state* mrb,const Color3B& cc);
 extern void color4b_to_rubyval(mrb_state* mrb,const Color4B& cc);
 extern void color4f_to_rubyval(mrb_state* mrb,const Color4F& cc);
 extern void physics_material_to_rubyval(mrb_state* mrb,const PhysicsMaterial& pm);
 extern void physics_raycastinfo_to_rubyval(mrb_state* mrb, const PhysicsRayCastInfo& info);
 extern void physics_contactdata_to_rubyval(mrb_state* mrb, const PhysicsContactData* data);
 extern void affinetransform_to_rubyval(mrb_state* mrb,const AffineTransform& inValue);
 extern void fontdefinition_to_rubyval(mrb_state* mrb,const FontDefinition& inValue);
 extern void mat4_to_rubyval(mrb_state* mrb, const cocos2d::Mat4& mat);
 extern void blendfunc_to_rubyval(mrb_state* mrb, const cocos2d::BlendFunc& func);
 extern void ttfconfig_to_rubyval(mrb_state* mrb, const cocos2d::TTFConfig& config);
 extern void uniform_to_rubyval(mrb_state* mrb, const cocos2d::Uniform& uniform);
 extern void vertexattrib_to_rubyval(mrb_state* mrb, const cocos2d::VertexAttrib& verAttrib);
 extern void quaternion_to_rubyval(mrb_state* mrb,const cocos2d::Quaternion& inValue);
 extern void mesh_vertex_attrib_to_rubyval(mrb_state* mrb, const cocos2d::MeshVertexAttrib& inValue);
 
 static inline void point_to_rubyval(mrb_state* mrb,const cocos2d::Vec2& pt)
 {
 vec2_to_rubyval(L, pt);
 }
 
 CC_DEPRECATED_ATTRIBUTE static inline void points_to_rubyval(mrb_state* mrb,const cocos2d::Vec2* points, int count)
 {
 vec2_array_to_rubyval(L, points, count);
 }
 */

extern mrb_value array_to_rubyval(mrb_state* mrb, __Array* inValue);
extern mrb_value dictionary_to_rubyval(mrb_state* mrb, __Dictionary* dict);
extern mrb_value ccvalue_to_rubyval(mrb_state* mrb, const cocos2d::Value& inValue);
extern mrb_value ccvaluemap_to_rubyval(mrb_state* mrb, const cocos2d::ValueMap& inValue);
extern mrb_value ccvaluemapintkey_to_rubyval(mrb_state* mrb, const cocos2d::ValueMapIntKey& inValue);
extern mrb_value ccvaluevector_to_rubyval(mrb_state* mrb, const cocos2d::ValueVector& inValue);
extern mrb_value std_vector_std_string_to_rubyval(mrb_state* mrb, const std::vector<std::string>& inValue);
extern mrb_value std_vector_int_to_rubyval(mrb_state* mrb, const std::vector<int>& inValue);
extern mrb_value std_vector_float_to_rubyval(mrb_state* mrb, const std::vector<float>& inValue);
extern mrb_value std_vector_ushort_to_rubyval(mrb_state* mrb, const std::vector<unsigned short>& inValue);

template <class T>
mrb_value std_vector_object_to_rubyval(mrb_state* mrb, const std::vector<T*>& inValue, const char* type)
{
    mrb_value rarr = mrb_ary_new(mrb);
    for (T* o : inValue) {
        mrb_value val = object_to_rubyval(mrb, type, o);
        mrb_ary_push(mrb, rarr, val);
    }
    return rarr;
}

template <class T>
mrb_value to_mrb_value(mrb_state* mrb, T* obj)
{
    if (std::is_base_of<cocos2d::Ref, T>::value) {
        Ref* ref = dynamic_cast<cocos2d::Ref *>(obj);
        if (nullptr != ref) {
            if (nullptr != ref->_scriptObject) {
                _ScriptObject* sobj = (_ScriptObject*)ref->_scriptObject;
                return sobj->mrb_val;
            }
            std::string type_name = typeid(*obj).name();
            auto iter = g_rubyType.find(type_name);
            if (g_rubyType.end() != iter) {
                const char* type = iter->second.c_str();
                return object_to_rubyval(mrb, type, obj);
            }
        }
    }
    
    return mrb_nil_value();
}

template <class T>
mrb_value ccvector_to_rubyval(mrb_state* mrb, const cocos2d::Vector<T>& inValue)
{
    mrb_value rarr = mrb_ary_new(mrb);
    for (const auto& obj : inValue) {
        if (nullptr == obj)
            continue;
        
        mrb_value rval = to_mrb_value(mrb, obj);
        mrb_ary_push(mrb, rarr, rval);
    }
    
    return rarr;
}

template <class T>
mrb_value ccmap_string_key_to_rubyval(mrb_state* mrb, const cocos2d::Map<std::string, T>& v)
{
    mrb_value rhash = mrb_hash_new(mrb);
    for (auto iter = v.begin(); iter != v.end(); ++iter) {
        std::string key = iter->first;
        mrb_value rkey = mrb_str_new_cstr(mrb, key.c_str());
        T obj = iter->second;
        
        mrb_value rval = to_mrb_value(mrb, obj);
        mrb_hash_set(mrb, rhash, rkey, rval);
    }
    
    return rhash;
}


inline RClass* get_rclass(mrb_state* mrb, const char* ruby_type)
{
    char tmp_str[128];
    strcpy(tmp_str, ruby_type);
    
    char *tp = strtok(tmp_str, "::");
    std::vector<char*>tokens;
    do {
        if (tp != NULL) {
            tokens.push_back(tp);
        }
        tp = strtok(NULL, "::");
    } while (tp != NULL);
    
    CCASSERT(tokens.size() > 0, "Can not get ruby class.");
    
    int i = 0;
    RClass* rmodule = mrb->object_class;
    for (i = 0; i < tokens.size() - 1; i++) {
        rmodule = mrb_module_get_under(mrb, rmodule, tokens[i]);
    }
    
    RClass* rclass = mrb_class_get_under(mrb, rmodule, tokens[i]);
    
    return rclass;
}

mrb_value mrb_empty_initialize(mrb_state* mrb, mrb_value self);

template <class T>
mrb_value object_to_rubyval(mrb_state* mrb, const char* type, T* ret, struct RClass* rclass = nullptr)
{
    if (nullptr == ret) {
        return mrb_nil_value();
    }
    
    Ref* ref = nullptr;
    if (std::is_base_of<cocos2d::Ref, T>::value) {
        ref = (Ref*)ret;
        if (nullptr != ref->_scriptObject) {
            _ScriptObject* sobj = (_ScriptObject *)ref->_scriptObject;
            return sobj->mrb_val;
        } else {
#if CC_ENABLE_SCRIPT_BINDING_MEMORY_CONTROL
            ref->retain();
#endif
        }
    }
    
    const char* ruby_type = getRubyTypeName(ret, type);
    if (nullptr == rclass) {
        rclass = get_rclass(mrb, ruby_type);
    }
    
    // save initialize method
    mrb_sym init_sym = mrb_intern_cstr(mrb, "initialize");
    struct RProc* init_rproc = mrb_method_search(mrb, rclass, init_sym);
    
    // replace to empty method
    mrb_define_method_id(mrb, rclass, init_sym, mrb_empty_initialize, ARGS_NONE());
    
    // create new instance
    mrb_value instance = mrb_obj_new(mrb, rclass, 0, nullptr);
    
    // revert method
    mrb_define_method_raw(mrb, rclass, init_sym, init_rproc);
    
    mrb_data_type* data_type = getRubyDataType(ret);
    if (nullptr == data_type) {
        CCLOG("could not get mrb_data_type for %s.", type);
    }
    DATA_TYPE(instance) = data_type;
    DATA_PTR(instance) = ret;
    
    if (nullptr != ref) {
        ref->_scriptObject = new _ScriptObject(*mrb, instance, ruby_type);
    }
    
    return instance;
}

#endif /* defined(__cocos2d_ruby_bindings__RubyBasicConversions__) */
