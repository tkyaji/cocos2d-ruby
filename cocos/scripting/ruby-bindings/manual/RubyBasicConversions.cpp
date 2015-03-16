//
//  RubyBasicConversions.cpp
//  cocos2d_ruby_bindings
//
//  Created by tkyaji on 2015/01/27.
//
//

#include "RubyBasicConversions.h"

std::unordered_map<std::string, std::string> g_rubyType;
std::unordered_map<std::string, struct mrb_data_type*> g_rubyDataType;


#define TO_NUMBER_FUNC(func, ntype) bool func(mrb_state* mrb , mrb_value arg, ntype* outValue, const char* funcName) \
{ \
    if (mrb_fixnum_p(arg)) { \
        mrb_int val = mrb_fixnum(arg); \
        *outValue = (ntype)val; \
        return true; \
    } \
    if (mrb_float_p(arg)) { \
        mrb_float val = mrb_float(arg); \
        *outValue = (ntype)val; \
        return true; \
    } \
    return false; \
}

TO_NUMBER_FUNC(rubyval_to_ulong, unsigned long)
TO_NUMBER_FUNC(rubyval_to_ushort, unsigned short)
TO_NUMBER_FUNC(rubyval_to_int32, int)
TO_NUMBER_FUNC(rubyval_to_uint32, unsigned int)
TO_NUMBER_FUNC(rubyval_to_uint16, uint16_t)
TO_NUMBER_FUNC(rubyval_to_long_long, long long)
TO_NUMBER_FUNC(rubyval_to_long, long)
TO_NUMBER_FUNC(rubyval_to_number, double)
TO_NUMBER_FUNC(rubyval_to_ssize, ssize_t)

// to native
bool rubyval_to_boolean(mrb_state* mrb, mrb_value arg, bool* outValue, const char* funcName)
{
    if (arg.tt == mrb_vtype::MRB_TT_TRUE) {
        *outValue = true;
        return true;
    }
    if (arg.tt == mrb_vtype::MRB_TT_FALSE) {
        *outValue = false;
        return true;
    }
    return false;
}

bool rubyval_to_std_string(mrb_state* mrb, mrb_value arg, std::string* outValue, const char* funcName)
{
    if (mrb_string_p(arg)) {
        char *str = mrb_str_to_cstr(mrb, arg);
        *outValue = std::string(str);
        return true;
    }
    return false;
}

Ref* to_ref_value(mrb_state* mrb, mrb_value val)
{
    switch (val.tt) {
        case mrb_vtype::MRB_TT_FIXNUM:
        {
            mrb_int v = mrb_fixnum(val);
            return Integer::create((int)v);
        }
        case mrb_vtype::MRB_TT_FLOAT:
        {
            mrb_float v = mrb_float(val);
            return Double::create((double)v);
        }
        case mrb_vtype::MRB_TT_FALSE:
        case mrb_vtype::MRB_TT_TRUE:
        {
            return Bool::create(mrb_bool(val));
        }
        case mrb_vtype::MRB_TT_STRING:
        {
            char* str = mrb_str_to_cstr(mrb, val);
            return String::createWithFormat("%s", str);
        }
        case mrb_vtype::MRB_TT_SYMBOL:
        {
            mrb_sym sym = mrb_symbol(val);
            const char* str = mrb_sym2name(mrb, sym);
            return String::createWithFormat("%s", str);
        }
        case mrb_vtype::MRB_TT_RANGE:
        {
            // TODO: range
            /*
             mrb_int beg;
             mrb_int len;
             mrb_range_beg_len(mrb, val, &beg, &len, 0);
             */
            break;
        }
        case mrb_vtype::MRB_TT_OBJECT:
        {
            // TODO: ruby object
            break;
        }
        case mrb_vtype::MRB_TT_DATA:
        {
            Ref* ref =static_cast<Ref*>(mrb_get_datatype(mrb, val, &ruby_cocos2dx_Ref_type));
            return ref;
        }
        case mrb_vtype::MRB_TT_UNDEF:
            break;
        default:
            CCASSERT(false, "not supported type");
    }
    return nullptr;
}

bool rubyval_to_array(mrb_state* mrb, mrb_value arg, __Array** outValue, const char* funcName)
{
    if (! mrb_array_p(arg)) {
        return false;
    }
    
    mrb_int len = mrb_ary_len(mrb, arg);
    __Array* arr =  __Array::createWithCapacity(len);
    for (mrb_int i = 0; i < len; i++) {
        mrb_value val = mrb_ary_ref(mrb, arg, i);
        Ref* ref = to_ref_value(mrb, val);
        arr->addObject(ref);
    }
    *outValue = arr;
        
    return true;
}

bool rubyval_to_dictionary(mrb_state* mrb, mrb_value arg, __Dictionary** outValue, const char* funcName)
{
    if (! mrb_hash_p(arg)) {
        return false;
    }
    
    mrb_value key_arr = mrb_hash_keys(mrb, arg);
    mrb_int len = mrb_ary_len(mrb, key_arr);
    __Dictionary* dic = __Dictionary::create();
    for (mrb_int i = 0; i < len; i++) {
        mrb_value hk = mrb_ary_ref(mrb, key_arr, i);
        mrb_value hv = mrb_hash_get(mrb, arg, hk);
        if (mrb_string_p(hk)) {
            char *kstr = mrb_str_to_cstr(mrb, hk);
            Ref* ref = to_ref_value(mrb, hv);
            dic->setObject(ref, std::string(kstr));
        } else if (mrb_symbol_p(hk)) {
            mrb_sym sym = mrb_symbol(hk);
            const char* kstr = mrb_sym2name(mrb, sym);
            Ref* ref = to_ref_value(mrb, hv);
            dic->setObject(ref, std::string(kstr));
        } else {
            CCASSERT(false, "not supported key value type");
        }
    }
    *outValue = dic;
    
    return true;
}


/*
bool rubyval_to_size(mrb_state* mrb, mrb_value arg, Size* outValue, const char* funcName)
{
    Size* size = static_cast<Size*>(mrb_get_datatype(mrb, arg, &ruby_cocos2dx_Size_type));
    
    return true;
}


bool rubyval_to_rect(mrb_state* mrb, mrb_value arg, Rect* outValue, const char* funcName);
bool rubyval_to_color3b(mrb_state* mrb, mrb_value arg, Color3B* outValue, const char* funcName);
bool rubyval_to_color4b(mrb_state* mrb, mrb_value arg, Color4B* outValue, const char* funcName);
bool rubyval_to_color4f(mrb_state* mrb, mrb_value arg, Color4F* outValue, const char* funcName);
bool rubyval_to_physics_material(mrb_state* mrb, mrb_value arg, cocos2d::PhysicsMaterial* outValue, const char* funcName);
bool rubyval_to_affinetransform(mrb_state* mrb, mrb_value arg, AffineTransform* outValue, const char* funcName);
bool rubyval_to_fontdefinition(mrb_state* mrb, mrb_value arg, FontDefinition* outValue , const char* funcName);
bool rubyval_to_mat4(mrb_state* mrb, mrb_value arg, cocos2d::Mat4* outValue , const char* funcName);
bool rubyval_to_vec2(mrb_state* mrb, mrb_value arg,cocos2d::Vec2* outValue, const char* funcName);
bool rubyval_to_vec3(mrb_state* mrb, mrb_value arg,cocos2d::Vec3* outValue, const char* funcName);
bool rubyval_to_vec4(mrb_state* mrb, mrb_value arg,cocos2d::Vec4* outValue, const char* funcName);
bool rubyval_to_blendfunc(mrb_state* mrb, mrb_value arg, cocos2d::BlendFunc* outValue, const char* funcName);
bool rubyval_to_ttfconfig(mrb_state* mrb, mrb_value arg, cocos2d::TTFConfig* outValue, const char* funcName);
bool rubyval_to_uniform(mrb_state* mrb, mrb_value arg, cocos2d::Uniform* outValue, const char* funcName);
bool rubyval_to_vertexattrib(mrb_state* mrb, mrb_value arg, cocos2d::VertexAttrib* outValue, const char* funcName);
bool rubyval_to_array_of_vec2(mrb_state* mrb, mrb_value arg,cocos2d::Vec2 **points, int *numPoints, const char* funcName);
bool rubyvals_variadic_to_array(mrb_state* mrb,int argc, __Array** ret);
bool rubyvals_variadic_to_ccvaluevector(mrb_state* mrb, int argc, cocos2d::ValueVector* ret);
*/

bool rubyval_to_ccvalue(mrb_state* mrb, mrb_value arg, cocos2d::Value* ret, const char* funcName)
{
    switch (arg.tt) {
        case mrb_vtype::MRB_TT_ARRAY:
        {
            ValueVector arrVal;
            if (! rubyval_to_ccvaluevector(mrb, arg, &arrVal)) {
                return false;
            }
            *ret = Value(arrVal);
            break;
        }
        case mrb_vtype::MRB_TT_HASH:
        {
            ValueMap dictVal;
            if (! rubyval_to_ccvaluemap(mrb, arg, &dictVal)) {
                return false;
            }
            *ret = Value(dictVal);
            break;
        }
        case mrb_vtype::MRB_TT_RANGE:
        {
            // TODO
            return false;
            break;
        }
        case mrb_vtype::MRB_TT_FIXNUM:
        {
            mrb_int val = mrb_fixnum(arg);
            *ret = Value(val);
            break;
        }
        case mrb_vtype::MRB_TT_FLOAT:
        {
            mrb_float val = mrb_float(arg);
            *ret = Value(val);
            break;
        }
        case mrb_vtype::MRB_TT_TRUE:
        case mrb_vtype::MRB_TT_FALSE:
        {
            bool val = mrb_bool(arg);
            *ret = Value(val);
            break;
        }
        case mrb_vtype::MRB_TT_STRING:
        {
            char* val = mrb_str_to_cstr(mrb, arg);
            *ret = Value(val);
            break;
        }
        case mrb_vtype::MRB_TT_SYMBOL:
        {
            mrb_sym sym = mrb_symbol(arg);
            const char* val = mrb_sym2name(mrb, sym);
            *ret = Value(val);
            break;
        }
        default:
            return false;
    }
    return true;
}

bool rubyval_to_ccvaluemap(mrb_state* mrb, mrb_value arg, cocos2d::ValueMap* ret, const char* funcName)
{
    if (! mrb_hash_p(arg)) {
        return false;
    }
    
    mrb_value key_arr = mrb_hash_keys(mrb, arg);
    mrb_int len = mrb_ary_len(mrb, key_arr);
    ValueMap& dict = *ret;
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
        } else {
            return false;
        }
        Value val;
        if (! rubyval_to_ccvalue(mrb, hv, &val)) {
            return false;
        }
        dict[str_key] = val;
    }
    return true;
}

bool rubyval_to_ccvaluemapintkey(mrb_state* mrb, mrb_value arg, cocos2d::ValueMapIntKey* ret, const char* funcName)
{
    if (! mrb_hash_p(arg)) {
        return false;
    }
    
    mrb_value key_arr = mrb_hash_keys(mrb, arg);
    mrb_int len = mrb_ary_len(mrb, key_arr);
    ValueMapIntKey& dict = *ret;
    for (mrb_int i = 0; i < len; i++) {
        mrb_value hk = mrb_ary_ref(mrb, key_arr, i);
        mrb_value hv = mrb_hash_get(mrb, arg, hk);
        int int_key = 0;
        
        if (mrb_string_p(hk)) {
            char *kstr = mrb_str_to_cstr(mrb, hk);
            int_key = atoi(kstr);
        } else if (mrb_symbol_p(hk)) {
            mrb_sym sym = mrb_symbol(hk);
            const char* kstr = mrb_sym2name(mrb, sym);
            int_key = atoi(kstr);
        } else {
            return false;
        }
        Value val;
        if (! rubyval_to_ccvalue(mrb, hv, &val)) {
            return false;
        }
        
        dict[int_key] = val;
    }
    return true;
}

bool rubyval_to_ccvaluevector(mrb_state* mrb, mrb_value arg, cocos2d::ValueVector* ret, const char* funcName)
{
    if (! mrb_array_p(arg)) {
        return false;
    }
    
    mrb_int len = mrb_ary_len(mrb, arg);
    for (mrb_int i = 0; i < len; i++) {
        mrb_value v = mrb_ary_ref(mrb, arg, i);
        Value val;
        if (! rubyval_to_ccvalue(mrb, v, &val)) {
            return false;
        }
        ret->push_back(val);
    }
    
    return true;
}

bool rubyval_to_std_vector_float(mrb_state* mrb, mrb_value arg, std::vector<float>* ret, const char* funcName)
{
    return rubyval_to_std_vector_number<float>(mrb, arg, ret, funcName);
}

bool rubyval_to_std_vector_ushort(mrb_state* mrb, mrb_value arg, std::vector<unsigned short>* ret, const char* funcName)
{
    return rubyval_to_std_vector_number<unsigned short>(mrb, arg, ret, funcName);
}

bool rubyval_to_std_vector_int(mrb_state* mrb, mrb_value arg, std::vector<int>* ret, const char* funcName)
{
    return rubyval_to_std_vector_number<int>(mrb, arg, ret, funcName);
}

bool rubyval_to_carray_float(mrb_state* mrb, mrb_value arg, float** outValue, const char* funcName)
{
    if (! mrb_array_p(arg)) {
        return false;
    }
    
    mrb_int len = mrb_ary_len(mrb, arg);
    float arr[len];
    for (mrb_int i = 0; i < len; i++) {
        mrb_value val = mrb_ary_ref(mrb, arg, i);
        if (! mrb_float_p(val)) {
            return false;
        }
        arr[i] = mrb_float(val);
    }
    *outValue = arr;
    
    return true;
}

bool rubyval_to_std_vector_string(mrb_state* mrb, mrb_value arg, std::vector<std::string>* ret, const char* funcName)
{
    if (! mrb_array_p(arg)) {
        return false;
    }
    
    mrb_int len = mrb_ary_len(mrb, arg);
    for (mrb_int i = 0; i < len; i++) {
        mrb_value v = mrb_ary_ref(mrb, arg, i);
        std::string str = "";
        if (mrb_fixnum_p(v)) {
            mrb_int val = mrb_fixnum(v);
            char *cstr = nullptr;
            sprintf(cstr, "%d", val);
            str = std::string(cstr);
        } else if (mrb_float_p(v)) {
            mrb_float val = mrb_float(v);
            char *cstr = nullptr;
            sprintf(cstr, "%f", val);
            str = std::string(cstr);
        }
        ret->push_back(str);
    }
    
    return true;
}


// from native
mrb_value array_to_rubyval(mrb_state* mrb, __Array* inValue)
{
    mrb_value rarr = mrb_ary_new(mrb);
    
    Ref* obj = nullptr;
    
    std::string className = "";
    __String* strVal = nullptr;
    __Dictionary* dictVal = nullptr;
    __Array* arrVal = nullptr;
    __Double* doubleVal = nullptr;
    __Bool* boolVal = nullptr;
    __Float* floatVal = nullptr;
    __Integer* intVal = nullptr;
    
    CCARRAY_FOREACH(inValue, obj)
    {
        if (nullptr == obj)
            continue;
        
        mrb_value rval;
        std::string typeName = typeid(*obj).name();
        auto iter = g_rubyType.find(typeName);
        if (g_rubyType.end() != iter) {
            className = iter->second;
            if (nullptr != dynamic_cast<Ref*>(obj)) {
                rval = to_mrb_value(mrb, obj);
            }
        } else if((strVal = dynamic_cast<__String *>(obj))) {
            rval = mrb_str_new_cstr(mrb, strVal->getCString());
        } else if ((dictVal = dynamic_cast<__Dictionary*>(obj))) {
            rval = dictionary_to_rubyval(mrb, dictVal);
        } else if ((arrVal = dynamic_cast<__Array*>(obj))) {
            rval = array_to_rubyval(mrb, arrVal);
        } else if ((doubleVal = dynamic_cast<__Double*>(obj))) {
            rval = mrb_float_value(mrb, (mrb_float)doubleVal->getValue());
        } else if ((floatVal = dynamic_cast<__Float*>(obj))) {
            rval = mrb_float_value(mrb, (mrb_float)floatVal->getValue());
        } else if ((intVal = dynamic_cast<__Integer*>(obj))) {
            rval = mrb_fixnum_value((mrb_int)intVal->getValue());
        } else if ((boolVal = dynamic_cast<__Bool*>(obj))) {
            rval = mrb_bool_value((mrb_bool)boolVal->getValue());
        } else {
            CCASSERT(false, "the type isn't suppored.");
        }
        mrb_ary_push(mrb, rarr, rval);
    }
    
    return rarr;
}

mrb_value dictionary_to_rubyval(mrb_state* mrb, __Dictionary* dict)
{
    mrb_value rhash = mrb_hash_new(mrb);
    
    DictElement* element = nullptr;
    
    std::string className = "";
    __String* strVal = nullptr;
    __Dictionary* dictVal = nullptr;
    __Array* arrVal = nullptr;
    __Double* doubleVal = nullptr;
    __Bool* boolVal = nullptr;
    __Float* floatVal = nullptr;
    __Integer* intVal = nullptr;
    
    CCDICT_FOREACH(dict, element) {
        if (nullptr == element)
            continue;
        
        mrb_value rkey = mrb_str_new_cstr(mrb, element->getStrKey());
        mrb_value rval;
        std::string typeName = typeid(element->getObject()).name();
        auto iter = g_rubyType.find(typeName);
        if (g_rubyType.end() != iter) {
            className = iter->second;
            if (nullptr != dynamic_cast<Ref*>(element->getObject())) {
                rval = to_mrb_value(mrb, element->getObject());
            }
        } else if((strVal = dynamic_cast<__String *>(element->getObject()))) {
            rval = mrb_str_new_cstr(mrb, strVal->getCString());
        } else if ((dictVal = dynamic_cast<__Dictionary*>(element->getObject()))) {
            rval = dictionary_to_rubyval(mrb, dictVal);
        } else if ((arrVal = dynamic_cast<__Array*>(element->getObject()))) {
            rval = array_to_rubyval(mrb, arrVal);
        } else if ((doubleVal = dynamic_cast<__Double*>(element->getObject()))) {
            rval = mrb_float_value(mrb, (mrb_float)doubleVal->getValue());
        } else if ((floatVal = dynamic_cast<__Float*>(element->getObject()))) {
            rval = mrb_float_value(mrb, (mrb_float)floatVal->getValue());
        } else if ((intVal = dynamic_cast<__Integer*>(element->getObject()))) {
            rval = mrb_fixnum_value((mrb_int)intVal->getValue());
        } else if ((boolVal = dynamic_cast<__Bool*>(element->getObject()))) {
            rval = mrb_bool_value((mrb_bool)boolVal->getValue());
        } else {
            CCASSERT(false, "the type isn't suppored.");
        }
        mrb_hash_set(mrb, rhash, rkey, rval);
    }
    
    return rhash;
}

mrb_value ccvalue_to_rubyval(mrb_state* mrb, const cocos2d::Value& inValue)
{
    const Value& obj = inValue;
    switch (obj.getType()) {
        case Value::Type::BOOLEAN:
            return mrb_bool_value((mrb_bool)obj.asBool());
        case Value::Type::FLOAT:
        case Value::Type::DOUBLE:
            return mrb_float_value(mrb, (mrb_float)obj.asDouble());
        case Value::Type::INTEGER:
            return mrb_fixnum_value((mrb_int)obj.asInt());
        case Value::Type::STRING:
            return mrb_str_new_cstr(mrb, obj.asString().c_str());
        case Value::Type::VECTOR:
            return ccvaluevector_to_rubyval(mrb, obj.asValueVector());
        case Value::Type::MAP:
            return ccvaluemap_to_rubyval(mrb, obj.asValueMap());
        case Value::Type::INT_KEY_MAP:
            return ccvaluemapintkey_to_rubyval(mrb, obj.asIntKeyMap());
        default:
            break;
    }
    return mrb_nil_value();
}

mrb_value ccvaluemap_to_rubyval(mrb_state* mrb, const cocos2d::ValueMap& inValue)
{
    mrb_value rhash = mrb_hash_new(mrb);
    for (auto iter = inValue.begin(); iter != inValue.end(); ++iter) {
        std::string key = iter->first;
        const Value& obj = iter->second;
        
        mrb_value hkey = mrb_str_new_cstr(mrb, key.c_str());
        mrb_value hval = ccvalue_to_rubyval(mrb, obj);
        mrb_hash_set(mrb, rhash, hkey, hval);
    }
    return rhash;
}

mrb_value ccvaluemapintkey_to_rubyval(mrb_state* mrb, const cocos2d::ValueMapIntKey& inValue)
{
    mrb_value rhash = mrb_hash_new(mrb);
    for (auto iter = inValue.begin(); iter != inValue.end(); ++iter)
    {
        std::stringstream keyss;
        keyss << iter->first;
        std::string key = keyss.str();
        
        const Value& obj = iter->second;
        
        mrb_value hkey = mrb_str_new_cstr(mrb, key.c_str());
        mrb_value hval = ccvalue_to_rubyval(mrb, obj);
        mrb_hash_set(mrb, rhash, hkey, hval);
    }
    return rhash;
}

mrb_value ccvaluevector_to_rubyval(mrb_state* mrb, const cocos2d::ValueVector& inValue)
{
    mrb_value rarr = mrb_ary_new(mrb);
    for (const auto& obj : inValue) {
        mrb_value val = ccvalue_to_rubyval(mrb, obj);
        mrb_ary_push(mrb, rarr, val);
    }
    return rarr;
}

mrb_value std_vector_std_string_to_rubyval(mrb_state* mrb, const std::vector<std::string>& inValue)
{
    mrb_value rarr = mrb_ary_new(mrb);
    for (const auto& str : inValue) {
        mrb_value val = mrb_str_new_cstr(mrb, str.c_str());
        mrb_ary_push(mrb, rarr, val);
    }
    return rarr;
}

mrb_value std_vector_int_to_rubyval(mrb_state* mrb, const std::vector<int>& inValue)
{
    mrb_value rarr = mrb_ary_new(mrb);
    for (const int i : inValue) {
        mrb_value val = mrb_fixnum_value((mrb_int)i);
        mrb_ary_push(mrb, rarr, val);
    }
    return rarr;
}

mrb_value std_vector_float_to_rubyval(mrb_state* mrb, const std::vector<float>& inValue)
{
    mrb_value rarr = mrb_ary_new(mrb);
    for (const int f : inValue) {
        mrb_value val = mrb_float_value(mrb, (mrb_float)f);
        mrb_ary_push(mrb, rarr, val);
    }
    return rarr;
}

mrb_value std_vector_ushort_to_rubyval(mrb_state* mrb, const std::vector<unsigned short>& inValue)
{
    mrb_value rarr = mrb_ary_new(mrb);
    for (const unsigned short s : inValue) {
        mrb_value val = mrb_fixnum_value((mrb_int)s);
        mrb_ary_push(mrb, rarr, val);
    }
    return rarr;
}

mrb_value mrb_empty_initialize(mrb_state* mrb, mrb_value self)
{
    return mrb_nil_value();
}
