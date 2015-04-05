#include "ruby_cocos2dx_ui_auto.hpp"
#include "ruby_cocos2dx_ui_auto_data_types.h"
#include "CocosGUI.h"
#include "RubyBasicConversions.h"

mrb_value ruby_cocos2dx_ui_constant_get(mrb_state* mrb, mrb_value self)
{
    RClass *c = mrb_class_ptr(self);
    return mrb_mod_cv_get(mrb, c, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_ui_global_constant_get(mrb_state* mrb, mrb_value self)
{
    return mrb_gv_get(mrb, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_ui_LayoutParameter_clone(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LayoutParameter* cobj = static_cast<cocos2d::ui::LayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::LayoutParameter* retval = cobj->clone();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::LayoutParameter>(mrb, "CCUI::LayoutParameter", (cocos2d::ui::LayoutParameter*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LayoutParameter#clone");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LayoutParameter_getLayoutType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LayoutParameter* cobj = static_cast<cocos2d::ui::LayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getLayoutType();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LayoutParameter#getLayoutType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LayoutParameter_createCloneInstance(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LayoutParameter* cobj = static_cast<cocos2d::ui::LayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::LayoutParameter* retval = cobj->createCloneInstance();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::LayoutParameter>(mrb, "CCUI::LayoutParameter", (cocos2d::ui::LayoutParameter*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LayoutParameter#createCloneInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LayoutParameter_copyProperties(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LayoutParameter* cobj = static_cast<cocos2d::ui::LayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::LayoutParameter* arg0;
            ok = rubyval_to_object<cocos2d::ui::LayoutParameter>(mrb, argv[0], "CCUI::LayoutParameter", &arg0);
            if (!ok) { break; }
            cobj->copyProperties(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LayoutParameter#copyProperties");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LayoutParameter_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::LayoutParameter* retval = cocos2d::ui::LayoutParameter::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::LayoutParameter>(mrb, "CCUI::LayoutParameter", (cocos2d::ui::LayoutParameter*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::LayoutParameter#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LayoutParameter_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::LayoutParameter* cobj = new cocos2d::ui::LayoutParameter();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LayoutParameter#LayoutParameter");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_LayoutParameter_Type_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LayoutParameter::Type::NONE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NONE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LayoutParameter::Type::LINEAR);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LINEAR"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LayoutParameter::Type::RELATIVE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "RELATIVE"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_LayoutParameter(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::LayoutParameter).name();
    g_rubyType[typeName] = "CCUI::LayoutParameter";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Ref");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "LayoutParameter", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_LayoutParameter_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "clone", ruby_cocos2dx_ui_LayoutParameter_clone, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_layout_type", ruby_cocos2dx_ui_LayoutParameter_getLayoutType, ARGS_NONE());
    mrb_define_method(mrb, rclass, "create_clone_instance", ruby_cocos2dx_ui_LayoutParameter_createCloneInstance, ARGS_NONE());
    mrb_define_method(mrb, rclass, "copy_properties", ruby_cocos2dx_ui_LayoutParameter_copyProperties, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_LayoutParameter_create_static, ARGS_NONE());
    struct RClass* renum_Type = mrb_define_module_under(mrb, rclass, "Type");
    ruby_cocos2dx_ui_LayoutParameter_Type_enum_init(mrb, renum_Type);
    mrb_define_class_method(mrb, renum_Type, "NONE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Type, "LINEAR", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Type, "RELATIVE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_LinearLayoutParameter_setGravity(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LinearLayoutParameter* cobj = static_cast<cocos2d::ui::LinearLayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::LinearLayoutParameter::LinearGravity arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::LinearLayoutParameter.setGravity");
            if (!ok) { break; }
            cobj->setGravity(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LinearLayoutParameter#setGravity");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LinearLayoutParameter_getGravity(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LinearLayoutParameter* cobj = static_cast<cocos2d::ui::LinearLayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getGravity();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LinearLayoutParameter#getGravity");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LinearLayoutParameter_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::LinearLayoutParameter* retval = cocos2d::ui::LinearLayoutParameter::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::LinearLayoutParameter>(mrb, "CCUI::LinearLayoutParameter", (cocos2d::ui::LinearLayoutParameter*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::LinearLayoutParameter#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LinearLayoutParameter_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::LinearLayoutParameter* cobj = new cocos2d::ui::LinearLayoutParameter();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LinearLayoutParameter#LinearLayoutParameter");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_LinearLayoutParameter_LinearGravity_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LinearLayoutParameter::LinearGravity::NONE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NONE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LinearLayoutParameter::LinearGravity::LEFT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LEFT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LinearLayoutParameter::LinearGravity::TOP);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "TOP"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LinearLayoutParameter::LinearGravity::RIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "RIGHT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LinearLayoutParameter::LinearGravity::BOTTOM);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "BOTTOM"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LinearLayoutParameter::LinearGravity::CENTER_VERTICAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "CENTER_VERTICAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LinearLayoutParameter::LinearGravity::CENTER_HORIZONTAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "CENTER_HORIZONTAL"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_LinearLayoutParameter(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::LinearLayoutParameter).name();
    g_rubyType[typeName] = "CCUI::LinearLayoutParameter";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "LayoutParameter");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "LinearLayoutParameter", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_LinearLayoutParameter_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_gravity", ruby_cocos2dx_ui_LinearLayoutParameter_setGravity, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_gravity", ruby_cocos2dx_ui_LinearLayoutParameter_getGravity, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_LinearLayoutParameter_create_static, ARGS_NONE());
    struct RClass* renum_LinearGravity = mrb_define_module_under(mrb, rclass, "LinearGravity");
    ruby_cocos2dx_ui_LinearLayoutParameter_LinearGravity_enum_init(mrb, renum_LinearGravity);
    mrb_define_class_method(mrb, renum_LinearGravity, "NONE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_LinearGravity, "LEFT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_LinearGravity, "TOP", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_LinearGravity, "RIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_LinearGravity, "BOTTOM", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_LinearGravity, "CENTER_VERTICAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_LinearGravity, "CENTER_HORIZONTAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_RelativeLayoutParameter_setAlign(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RelativeLayoutParameter* cobj = static_cast<cocos2d::ui::RelativeLayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::RelativeLayoutParameter::RelativeAlign arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RelativeLayoutParameter.setAlign");
            if (!ok) { break; }
            cobj->setAlign(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RelativeLayoutParameter#setAlign");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RelativeLayoutParameter* cobj = static_cast<cocos2d::ui::RelativeLayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::RelativeLayoutParameter.setRelativeToWidgetName");
            if (!ok) { break; }
            cobj->setRelativeToWidgetName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RelativeLayoutParameter#setRelativeToWidgetName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RelativeLayoutParameter_getRelativeName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RelativeLayoutParameter* cobj = static_cast<cocos2d::ui::RelativeLayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getRelativeName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RelativeLayoutParameter#getRelativeName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RelativeLayoutParameter* cobj = static_cast<cocos2d::ui::RelativeLayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getRelativeToWidgetName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RelativeLayoutParameter#getRelativeToWidgetName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RelativeLayoutParameter_setRelativeName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RelativeLayoutParameter* cobj = static_cast<cocos2d::ui::RelativeLayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::RelativeLayoutParameter.setRelativeName");
            if (!ok) { break; }
            cobj->setRelativeName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RelativeLayoutParameter#setRelativeName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RelativeLayoutParameter_getAlign(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RelativeLayoutParameter* cobj = static_cast<cocos2d::ui::RelativeLayoutParameter*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getAlign();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RelativeLayoutParameter#getAlign");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RelativeLayoutParameter_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::RelativeLayoutParameter* retval = cocos2d::ui::RelativeLayoutParameter::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::RelativeLayoutParameter>(mrb, "CCUI::RelativeLayoutParameter", (cocos2d::ui::RelativeLayoutParameter*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::RelativeLayoutParameter#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RelativeLayoutParameter_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::RelativeLayoutParameter* cobj = new cocos2d::ui::RelativeLayoutParameter();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RelativeLayoutParameter#RelativeLayoutParameter");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_RelativeLayoutParameter_RelativeAlign_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::NONE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NONE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_TOP_LEFT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PARENT_TOP_LEFT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_TOP_CENTER_HORIZONTAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PARENT_TOP_CENTER_HORIZONTAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_TOP_RIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PARENT_TOP_RIGHT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_LEFT_CENTER_VERTICAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PARENT_LEFT_CENTER_VERTICAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::CENTER_IN_PARENT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "CENTER_IN_PARENT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_RIGHT_CENTER_VERTICAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PARENT_RIGHT_CENTER_VERTICAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_LEFT_BOTTOM);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PARENT_LEFT_BOTTOM"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_BOTTOM_CENTER_HORIZONTAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PARENT_BOTTOM_CENTER_HORIZONTAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_RIGHT_BOTTOM);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PARENT_RIGHT_BOTTOM"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_ABOVE_LEFTALIGN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_ABOVE_LEFTALIGN"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_ABOVE_CENTER);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_ABOVE_CENTER"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_ABOVE_RIGHTALIGN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_ABOVE_RIGHTALIGN"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_LEFT_OF_TOPALIGN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_LEFT_OF_TOPALIGN"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_LEFT_OF_CENTER);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_LEFT_OF_CENTER"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_LEFT_OF_BOTTOMALIGN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_LEFT_OF_BOTTOMALIGN"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_RIGHT_OF_TOPALIGN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_RIGHT_OF_TOPALIGN"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_RIGHT_OF_CENTER);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_RIGHT_OF_CENTER"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_RIGHT_OF_BOTTOMALIGN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_RIGHT_OF_BOTTOMALIGN"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_BELOW_LEFTALIGN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_BELOW_LEFTALIGN"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_BELOW_CENTER);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_BELOW_CENTER"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RelativeLayoutParameter::RelativeAlign::LOCATION_BELOW_RIGHTALIGN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCATION_BELOW_RIGHTALIGN"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_RelativeLayoutParameter(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::RelativeLayoutParameter).name();
    g_rubyType[typeName] = "CCUI::RelativeLayoutParameter";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "LayoutParameter");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "RelativeLayoutParameter", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_RelativeLayoutParameter_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_align", ruby_cocos2dx_ui_RelativeLayoutParameter_setAlign, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_relative_to_widget_name", ruby_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_relative_name", ruby_cocos2dx_ui_RelativeLayoutParameter_getRelativeName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_relative_to_widget_name", ruby_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_relative_name", ruby_cocos2dx_ui_RelativeLayoutParameter_setRelativeName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_align", ruby_cocos2dx_ui_RelativeLayoutParameter_getAlign, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_RelativeLayoutParameter_create_static, ARGS_NONE());
    struct RClass* renum_RelativeAlign = mrb_define_module_under(mrb, rclass, "RelativeAlign");
    ruby_cocos2dx_ui_RelativeLayoutParameter_RelativeAlign_enum_init(mrb, renum_RelativeAlign);
    mrb_define_class_method(mrb, renum_RelativeAlign, "NONE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "PARENT_TOP_LEFT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "PARENT_TOP_CENTER_HORIZONTAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "PARENT_TOP_RIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "PARENT_LEFT_CENTER_VERTICAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "CENTER_IN_PARENT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "PARENT_RIGHT_CENTER_VERTICAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "PARENT_LEFT_BOTTOM", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "PARENT_BOTTOM_CENTER_HORIZONTAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "PARENT_RIGHT_BOTTOM", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_ABOVE_LEFTALIGN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_ABOVE_CENTER", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_ABOVE_RIGHTALIGN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_LEFT_OF_TOPALIGN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_LEFT_OF_CENTER", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_LEFT_OF_BOTTOMALIGN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_RIGHT_OF_TOPALIGN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_RIGHT_OF_CENTER", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_RIGHT_OF_BOTTOMALIGN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_BELOW_LEFTALIGN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_BELOW_CENTER", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_RelativeAlign, "LOCATION_BELOW_RIGHTALIGN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_Widget_setLayoutComponentEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setLayoutComponentEnabled");
            if (!ok) { break; }
            cobj->setLayoutComponentEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setLayoutComponentEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setSizePercent(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            cobj->setSizePercent(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setSizePercent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getCustomSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getCustomSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getCustomSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getLeftBoundary(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getLeftBoundary();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getLeftBoundary");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setFlippedX(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setFlippedX");
            if (!ok) { break; }
            cobj->setFlippedX(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setFlippedX");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setCallbackName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Widget.setCallbackName");
            if (!ok) { break; }
            cobj->setCallbackName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setCallbackName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getVirtualRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Node* retval = cobj->getVirtualRenderer();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Node>(mrb, "CC::Node", (cocos2d::Node*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getVirtualRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setPropagateTouchEvents(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setPropagateTouchEvents");
            if (!ok) { break; }
            cobj->setPropagateTouchEvents(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setPropagateTouchEvents");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isUnifySizeEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isUnifySizeEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isUnifySizeEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getSizePercent(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vec2 retval = cobj->getSizePercent();
            cocos2d::Vec2* retval_ptr = new cocos2d::Vec2(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Vec2>(mrb, "CC::Vec2", (cocos2d::Vec2*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getSizePercent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setPositionPercent(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            cobj->setPositionPercent(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setPositionPercent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setSwallowTouches(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setSwallowTouches");
            if (!ok) { break; }
            cobj->setSwallowTouches(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setSwallowTouches");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getLayoutSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getLayoutSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getLayoutSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setHighlighted(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setHighlighted");
            if (!ok) { break; }
            cobj->setHighlighted(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setHighlighted");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setPositionType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Widget::PositionType arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Widget.setPositionType");
            if (!ok) { break; }
            cobj->setPositionType(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setPositionType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isIgnoreContentAdaptWithSize();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isIgnoreContentAdaptWithSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getVirtualRendererSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getVirtualRendererSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getVirtualRendererSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isHighlighted(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isHighlighted();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isHighlighted");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getLayoutParameter(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::LayoutParameter* retval = cobj->getLayoutParameter();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::LayoutParameter>(mrb, "CCUI::LayoutParameter", (cocos2d::ui::LayoutParameter*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getLayoutParameter");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_addCCSEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *, int)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0, const int larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addCCSEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addCCSEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addCCSEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#addCCSEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getPositionType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getPositionType();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getPositionType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getTopBoundary(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getTopBoundary();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getTopBoundary");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_ignoreContentAdaptWithSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.ignoreContentAdaptWithSize");
            if (!ok) { break; }
            cobj->ignoreContentAdaptWithSize(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#ignoreContentAdaptWithSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_findNextFocusedWidget(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::ui::Widget::FocusDirection arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Widget.findNextFocusedWidget");
            if (!ok) { break; }
            cocos2d::ui::Widget* arg1;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[1], "CCUI::Widget", &arg1);
            if (!ok) { break; }
            cocos2d::ui::Widget* retval = cobj->findNextFocusedWidget(arg0, arg1);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#findNextFocusedWidget");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isFocused(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isFocused();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isFocused");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getTouchBeganPosition(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vec2 retval = cobj->getTouchBeganPosition();
            cocos2d::Vec2* retval_ptr = new cocos2d::Vec2(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Vec2>(mrb, "CC::Vec2", (cocos2d::Vec2*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getTouchBeganPosition");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isTouchEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isTouchEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isTouchEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getCallbackName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getCallbackName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getCallbackName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getActionTag(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getActionTag();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getActionTag");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getWorldPosition(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vec2 retval = cobj->getWorldPosition();
            cocos2d::Vec2* retval_ptr = new cocos2d::Vec2(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Vec2>(mrb, "CC::Vec2", (cocos2d::Vec2*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getWorldPosition");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isFocusEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isFocusEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isFocusEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setFocused(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setFocused");
            if (!ok) { break; }
            cobj->setFocused(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setFocused");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setActionTag(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Widget.setActionTag");
            if (!ok) { break; }
            cobj->setActionTag(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setActionTag");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setTouchEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setTouchEnabled");
            if (!ok) { break; }
            cobj->setTouchEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setTouchEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setFlippedY(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setFlippedY");
            if (!ok) { break; }
            cobj->setFlippedY(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setFlippedY");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setEnabled");
            if (!ok) { break; }
            cobj->setEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getRightBoundary(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getRightBoundary();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getRightBoundary");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setBrightStyle(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Widget::BrightStyle arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Widget.setBrightStyle");
            if (!ok) { break; }
            cobj->setBrightStyle(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setBrightStyle");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setLayoutParameter(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::LayoutParameter* arg0;
            ok = rubyval_to_object<cocos2d::ui::LayoutParameter>(mrb, argv[0], "CCUI::LayoutParameter", &arg0);
            if (!ok) { break; }
            cobj->setLayoutParameter(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setLayoutParameter");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_clone(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Widget* retval = cobj->clone();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#clone");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setFocusEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setFocusEnabled");
            if (!ok) { break; }
            cobj->setFocusEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setFocusEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getBottomBoundary(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getBottomBoundary();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getBottomBoundary");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isBright(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isBright();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isBright");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setUnifySizeEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setUnifySizeEnabled");
            if (!ok) { break; }
            cobj->setUnifySizeEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setUnifySizeEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isPropagateTouchEvents(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isPropagateTouchEvents();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isPropagateTouchEvents");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getCurrentFocusedWidget(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Widget* retval = cobj->getCurrentFocusedWidget();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getCurrentFocusedWidget");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_hitTest(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            bool retval = cobj->hitTest(*arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#hitTest");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isLayoutComponentEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isLayoutComponentEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isLayoutComponentEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_requestFocus(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->requestFocus();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#requestFocus");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_updateSizeAndPosition(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->updateSizeAndPosition(*arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 0) {
            cobj->updateSizeAndPosition();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#updateSizeAndPosition");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getTouchMovePosition(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vec2 retval = cobj->getTouchMovePosition();
            cocos2d::Vec2* retval_ptr = new cocos2d::Vec2(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Vec2>(mrb, "CC::Vec2", (cocos2d::Vec2*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getTouchMovePosition");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getSizeType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getSizeType();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getSizeType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getCallbackType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getCallbackType();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getCallbackType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_addTouchEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *, cocos2d::ui::Widget::TouchEventType)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0, cocos2d::ui::Widget::TouchEventType larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addTouchEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addTouchEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addTouchEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#addTouchEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getTouchEndPosition(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vec2 retval = cobj->getTouchEndPosition();
            cocos2d::Vec2* retval_ptr = new cocos2d::Vec2(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Vec2>(mrb, "CC::Vec2", (cocos2d::Vec2*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getTouchEndPosition");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_getPositionPercent(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vec2 retval = cobj->getPositionPercent();
            cocos2d::Vec2* retval_ptr = new cocos2d::Vec2(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Vec2>(mrb, "CC::Vec2", (cocos2d::Vec2*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#getPositionPercent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_addClickEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addClickEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 1, ruby_arg0);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addClickEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addClickEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#addClickEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isFlippedX(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isFlippedX();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isFlippedX");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isFlippedY(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isFlippedY();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isFlippedY");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isClippingParentContainsPoint(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            bool retval = cobj->isClippingParentContainsPoint(*arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isClippingParentContainsPoint");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setSizeType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Widget::SizeType arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Widget.setSizeType");
            if (!ok) { break; }
            cobj->setSizeType(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setSizeType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setBright(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.setBright");
            if (!ok) { break; }
            cobj->setBright(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setBright");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_setCallbackType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Widget.setCallbackType");
            if (!ok) { break; }
            cobj->setCallbackType(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#setCallbackType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_isSwallowTouches(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isSwallowTouches();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#isSwallowTouches");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_enableDpadNavigation_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Widget.enableDpadNavigation");
            if (!ok) { break; }

            cocos2d::ui::Widget::enableDpadNavigation(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Widget#enableDpadNavigation");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::Widget* retval = cocos2d::ui::Widget::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Widget#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Widget_property_onFocusChanged_get(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value ret;
    #pragma warning NO CONVERSION FROM NATIVE FOR std::function;
    return ret;
}

mrb_value ruby_cocos2dx_ui_Widget_property_onFocusChanged_set(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value argv;
    mrb_get_args(mrb, "o", &argv);

    bool ok = true;
    std::function<void (cocos2d::ui::Widget *, cocos2d::ui::Widget *)> val;
    do {
	    // Lambda binding for ruby.
	    unsigned long idx = -1;
	    val = [mrb, self, idx](cocos2d::ui::Widget* larg0, cocos2d::ui::Widget* larg1) -> void {
	        mrb_value ruby_arg0;
	        ruby_arg0 = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)larg0, nullptr);
	        mrb_value ruby_arg1;
	        ruby_arg1 = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)larg1, nullptr);
	        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
	        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "onFocusChanged->val"));
	        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
	        if (mrb_exception_p(mrb_ret)) {
	            mrb_exc_raise(mrb, mrb_ret);
	        }
	    };
	    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
	    if (!mrb_hash_p(hash)) {
	        hash = mrb_hash_new(mrb);
	    }
	    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "onFocusChanged->val"), argv);
	    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
	    break;
	} while(0);
    if (! ok) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "convert to native failed : Widget#onFocusChanged");
    }
    cobj->onFocusChanged = val;

    return self;
}

mrb_value ruby_cocos2dx_ui_Widget_property_onNextFocusedWidget_get(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value ret;
    #pragma warning NO CONVERSION FROM NATIVE FOR std::function;
    return ret;
}

mrb_value ruby_cocos2dx_ui_Widget_property_onNextFocusedWidget_set(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Widget* cobj = static_cast<cocos2d::ui::Widget*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value argv;
    mrb_get_args(mrb, "o", &argv);

    bool ok = true;
    std::function<cocos2d::ui::Widget *(cocos2d::ui::Widget::FocusDirection)> val;
    do {
	    // Lambda binding for ruby.
	    unsigned long idx = -1;
	    val = [mrb, self, idx](cocos2d::ui::Widget::FocusDirection larg0) -> cocos2d::ui::Widget* {
	        mrb_value ruby_arg0;
	        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
	        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
	        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "onNextFocusedWidget->val"));
	        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 1, ruby_arg0);
	        if (mrb_exception_p(mrb_ret)) {
	            mrb_exc_raise(mrb, mrb_ret);
	        }
	        bool ok = true;
	        cocos2d::ui::Widget* lret;
	        ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, mrb_ret, "CCUI::Widget", &lret);
	        return lret;
	    };
	    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
	    if (!mrb_hash_p(hash)) {
	        hash = mrb_hash_new(mrb);
	    }
	    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "onNextFocusedWidget->val"), argv);
	    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
	    break;
	} while(0);
    if (! ok) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "convert to native failed : Widget#onNextFocusedWidget");
    }
    cobj->onNextFocusedWidget = val;

    return self;
}

mrb_value ruby_cocos2dx_ui_Widget_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Widget* cobj = new cocos2d::ui::Widget();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Widget#Widget");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_Widget_BrightStyle_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::BrightStyle::NONE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NONE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::BrightStyle::NORMAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NORMAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::BrightStyle::HIGHLIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "HIGHLIGHT"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_Widget_TouchEventType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::TouchEventType::BEGAN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "BEGAN"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::TouchEventType::MOVED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "MOVED"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::TouchEventType::ENDED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ENDED"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::TouchEventType::CANCELED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "CANCELED"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_Widget_FocusDirection_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::FocusDirection::LEFT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LEFT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::FocusDirection::RIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "RIGHT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::FocusDirection::UP);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "UP"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::FocusDirection::DOWN);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "DOWN"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_Widget_TextureResType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::TextureResType::LOCAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LOCAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::TextureResType::PLIST);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PLIST"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_Widget_PositionType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::PositionType::ABSOLUTE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ABSOLUTE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::PositionType::PERCENT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PERCENT"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_Widget_SizeType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::SizeType::ABSOLUTE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ABSOLUTE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Widget::SizeType::PERCENT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PERCENT"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_Widget(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::Widget).name();
    g_rubyType[typeName] = "CCUI::Widget";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "ProtectedNode");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Widget", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_Widget_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_layout_component_enabled", ruby_cocos2dx_ui_Widget_setLayoutComponentEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_size_percent", ruby_cocos2dx_ui_Widget_setSizePercent, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_custom_size", ruby_cocos2dx_ui_Widget_getCustomSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_left_boundary", ruby_cocos2dx_ui_Widget_getLeftBoundary, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_flipped_x", ruby_cocos2dx_ui_Widget_setFlippedX, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_callback_name", ruby_cocos2dx_ui_Widget_setCallbackName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_virtual_renderer", ruby_cocos2dx_ui_Widget_getVirtualRenderer, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_propagate_touch_events", ruby_cocos2dx_ui_Widget_setPropagateTouchEvents, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "unify_size_enabled?", ruby_cocos2dx_ui_Widget_isUnifySizeEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_size_percent", ruby_cocos2dx_ui_Widget_getSizePercent, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_position_percent", ruby_cocos2dx_ui_Widget_setPositionPercent, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_swallow_touches", ruby_cocos2dx_ui_Widget_setSwallowTouches, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_layout_size", ruby_cocos2dx_ui_Widget_getLayoutSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_highlighted", ruby_cocos2dx_ui_Widget_setHighlighted, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_position_type", ruby_cocos2dx_ui_Widget_setPositionType, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "ignore_content_adapt_with_size?", ruby_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_virtual_renderer_size", ruby_cocos2dx_ui_Widget_getVirtualRendererSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "highlighted?", ruby_cocos2dx_ui_Widget_isHighlighted, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_layout_parameter", ruby_cocos2dx_ui_Widget_getLayoutParameter, ARGS_NONE());
    mrb_define_method(mrb, rclass, "add_ccsevent_listener", ruby_cocos2dx_ui_Widget_addCCSEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_position_type", ruby_cocos2dx_ui_Widget_getPositionType, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_top_boundary", ruby_cocos2dx_ui_Widget_getTopBoundary, ARGS_NONE());
    mrb_define_method(mrb, rclass, "ignore_content_adapt_with_size", ruby_cocos2dx_ui_Widget_ignoreContentAdaptWithSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "find_next_focused_widget", ruby_cocos2dx_ui_Widget_findNextFocusedWidget, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "enabled?", ruby_cocos2dx_ui_Widget_isEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "focused?", ruby_cocos2dx_ui_Widget_isFocused, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_touch_began_position", ruby_cocos2dx_ui_Widget_getTouchBeganPosition, ARGS_NONE());
    mrb_define_method(mrb, rclass, "touch_enabled?", ruby_cocos2dx_ui_Widget_isTouchEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_callback_name", ruby_cocos2dx_ui_Widget_getCallbackName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_action_tag", ruby_cocos2dx_ui_Widget_getActionTag, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_world_position", ruby_cocos2dx_ui_Widget_getWorldPosition, ARGS_NONE());
    mrb_define_method(mrb, rclass, "focus_enabled?", ruby_cocos2dx_ui_Widget_isFocusEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_focused", ruby_cocos2dx_ui_Widget_setFocused, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_action_tag", ruby_cocos2dx_ui_Widget_setActionTag, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_touch_enabled", ruby_cocos2dx_ui_Widget_setTouchEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_flipped_y", ruby_cocos2dx_ui_Widget_setFlippedY, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_enabled", ruby_cocos2dx_ui_Widget_setEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_right_boundary", ruby_cocos2dx_ui_Widget_getRightBoundary, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_bright_style", ruby_cocos2dx_ui_Widget_setBrightStyle, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_layout_parameter", ruby_cocos2dx_ui_Widget_setLayoutParameter, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "clone", ruby_cocos2dx_ui_Widget_clone, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_focus_enabled", ruby_cocos2dx_ui_Widget_setFocusEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_bottom_boundary", ruby_cocos2dx_ui_Widget_getBottomBoundary, ARGS_NONE());
    mrb_define_method(mrb, rclass, "bright?", ruby_cocos2dx_ui_Widget_isBright, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_unify_size_enabled", ruby_cocos2dx_ui_Widget_setUnifySizeEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "propagate_touch_events?", ruby_cocos2dx_ui_Widget_isPropagateTouchEvents, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_current_focused_widget", ruby_cocos2dx_ui_Widget_getCurrentFocusedWidget, ARGS_NONE());
    mrb_define_method(mrb, rclass, "hit_test", ruby_cocos2dx_ui_Widget_hitTest, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "layout_component_enabled?", ruby_cocos2dx_ui_Widget_isLayoutComponentEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "request_focus", ruby_cocos2dx_ui_Widget_requestFocus, ARGS_NONE());
    mrb_define_method(mrb, rclass, "update_size_and_position", ruby_cocos2dx_ui_Widget_updateSizeAndPosition, ARGS_REQ(0)|ARGS_OPT(1));
    mrb_define_method(mrb, rclass, "get_touch_move_position", ruby_cocos2dx_ui_Widget_getTouchMovePosition, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_size_type", ruby_cocos2dx_ui_Widget_getSizeType, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_callback_type", ruby_cocos2dx_ui_Widget_getCallbackType, ARGS_NONE());
    mrb_define_method(mrb, rclass, "add_touch_event_listener", ruby_cocos2dx_ui_Widget_addTouchEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_touch_end_position", ruby_cocos2dx_ui_Widget_getTouchEndPosition, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_position_percent", ruby_cocos2dx_ui_Widget_getPositionPercent, ARGS_NONE());
    mrb_define_method(mrb, rclass, "add_click_event_listener", ruby_cocos2dx_ui_Widget_addClickEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "flipped_x?", ruby_cocos2dx_ui_Widget_isFlippedX, ARGS_NONE());
    mrb_define_method(mrb, rclass, "flipped_y?", ruby_cocos2dx_ui_Widget_isFlippedY, ARGS_NONE());
    mrb_define_method(mrb, rclass, "clipping_parent_contains_point?", ruby_cocos2dx_ui_Widget_isClippingParentContainsPoint, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_size_type", ruby_cocos2dx_ui_Widget_setSizeType, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_bright", ruby_cocos2dx_ui_Widget_setBright, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_callback_type", ruby_cocos2dx_ui_Widget_setCallbackType, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "swallow_touches?", ruby_cocos2dx_ui_Widget_isSwallowTouches, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "enable_dpad_navigation", ruby_cocos2dx_ui_Widget_enableDpadNavigation_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_Widget_create_static, ARGS_NONE());
    mrb_define_method(mrb, rclass, "on_focus_changed", ruby_cocos2dx_ui_Widget_property_onFocusChanged_get, ARGS_NONE());
    mrb_define_method(mrb, rclass, "on_focus_changed=", ruby_cocos2dx_ui_Widget_property_onFocusChanged_set, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "on_next_focused_widget", ruby_cocos2dx_ui_Widget_property_onNextFocusedWidget_get, ARGS_NONE());
    mrb_define_method(mrb, rclass, "on_next_focused_widget=", ruby_cocos2dx_ui_Widget_property_onNextFocusedWidget_set, ARGS_REQ(1));
    struct RClass* renum_BrightStyle = mrb_define_module_under(mrb, rclass, "BrightStyle");
    ruby_cocos2dx_ui_Widget_BrightStyle_enum_init(mrb, renum_BrightStyle);
    mrb_define_class_method(mrb, renum_BrightStyle, "NONE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_BrightStyle, "NORMAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_BrightStyle, "HIGHLIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_TouchEventType = mrb_define_module_under(mrb, rclass, "TouchEventType");
    ruby_cocos2dx_ui_Widget_TouchEventType_enum_init(mrb, renum_TouchEventType);
    mrb_define_class_method(mrb, renum_TouchEventType, "BEGAN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_TouchEventType, "MOVED", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_TouchEventType, "ENDED", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_TouchEventType, "CANCELED", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_FocusDirection = mrb_define_module_under(mrb, rclass, "FocusDirection");
    ruby_cocos2dx_ui_Widget_FocusDirection_enum_init(mrb, renum_FocusDirection);
    mrb_define_class_method(mrb, renum_FocusDirection, "LEFT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_FocusDirection, "RIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_FocusDirection, "UP", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_FocusDirection, "DOWN", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_TextureResType = mrb_define_module_under(mrb, rclass, "TextureResType");
    ruby_cocos2dx_ui_Widget_TextureResType_enum_init(mrb, renum_TextureResType);
    mrb_define_class_method(mrb, renum_TextureResType, "LOCAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_TextureResType, "PLIST", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_PositionType = mrb_define_module_under(mrb, rclass, "PositionType");
    ruby_cocos2dx_ui_Widget_PositionType_enum_init(mrb, renum_PositionType);
    mrb_define_class_method(mrb, renum_PositionType, "ABSOLUTE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_PositionType, "PERCENT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_SizeType = mrb_define_module_under(mrb, rclass, "SizeType");
    ruby_cocos2dx_ui_Widget_SizeType_enum_init(mrb, renum_SizeType);
    mrb_define_class_method(mrb, renum_SizeType, "ABSOLUTE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_SizeType, "PERCENT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_Layout_setBackGroundColorVector(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            cobj->setBackGroundColorVector(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundColorVector");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setClippingType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Layout::ClippingType arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Layout.setClippingType");
            if (!ok) { break; }
            cobj->setClippingType(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setClippingType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setBackGroundColorType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Layout::BackGroundColorType arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Layout.setBackGroundColorType");
            if (!ok) { break; }
            cobj->setBackGroundColorType(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundColorType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setLoopFocus(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Layout.setLoopFocus");
            if (!ok) { break; }
            cobj->setLoopFocus(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setLoopFocus");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setBackGroundImageColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color3B* arg0;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[0], "CC::Color3B", &arg0);
            if (!ok) { break; }
            cobj->setBackGroundImageColor(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundImageColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundColorVector(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vec2 retval = cobj->getBackGroundColorVector();
            cocos2d::Vec2* retval_ptr = new cocos2d::Vec2(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Vec2>(mrb, "CC::Vec2", (cocos2d::Vec2*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundColorVector");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getClippingType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getClippingType();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getClippingType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_isLoopFocus(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isLoopFocus();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#isLoopFocus");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_removeBackGroundImage(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->removeBackGroundImage();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#removeBackGroundImage");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundColorOpacity(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            uint16_t retval = cobj->getBackGroundColorOpacity();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundColorOpacity");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_isClippingEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isClippingEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#isClippingEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setBackGroundImageOpacity(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            uint16_t arg0;
            ok = rubyval_to_uint16(mrb, argv[0], &arg0, "CCUI::Layout.setBackGroundImageOpacity");
            if (!ok) { break; }
            cobj->setBackGroundImageOpacity(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundImageOpacity");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setBackGroundImage(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Layout.setBackGroundImage");
            if (!ok) { break; }
            cobj->setBackGroundImage(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Layout.setBackGroundImage");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Layout.setBackGroundImage");
            if (!ok) { break; }
            cobj->setBackGroundImage(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundImage");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setBackGroundColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::Color3B* arg0;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[0], "CC::Color3B", &arg0);
            if (!ok) { break; }
            cocos2d::Color3B* arg1;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[1], "CC::Color3B", &arg1);
            if (!ok) { break; }
            cobj->setBackGroundColor(*arg0, *arg1);
            return self;
        }
    } while (0);
    do {
        if (argc == 1) {
            cocos2d::Color3B* arg0;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[0], "CC::Color3B", &arg0);
            if (!ok) { break; }
            cobj->setBackGroundColor(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_requestDoLayout(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->requestDoLayout();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#requestDoLayout");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundImageCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getBackGroundImageCapInsets();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundImageCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Color3B retval = cobj->getBackGroundColor();
            cocos2d::Color3B* retval_ptr = new cocos2d::Color3B(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Color3B>(mrb, "CC::Color3B", (cocos2d::Color3B*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setClippingEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Layout.setClippingEnabled");
            if (!ok) { break; }
            cobj->setClippingEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setClippingEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundImageColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Color3B retval = cobj->getBackGroundImageColor();
            cocos2d::Color3B* retval_ptr = new cocos2d::Color3B(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Color3B>(mrb, "CC::Color3B", (cocos2d::Color3B*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundImageColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isBackGroundImageScale9Enabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#isBackGroundImageScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundColorType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getBackGroundColorType();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundColorType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundEndColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Color3B retval = cobj->getBackGroundEndColor();
            cocos2d::Color3B* retval_ptr = new cocos2d::Color3B(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Color3B>(mrb, "CC::Color3B", (cocos2d::Color3B*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundEndColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setBackGroundColorOpacity(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            uint16_t arg0;
            ok = rubyval_to_uint16(mrb, argv[0], &arg0, "CCUI::Layout.setBackGroundColorOpacity");
            if (!ok) { break; }
            cobj->setBackGroundColorOpacity(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundColorOpacity");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundImageOpacity(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            uint16_t retval = cobj->getBackGroundImageOpacity();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundImageOpacity");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_isPassFocusToChild(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isPassFocusToChild();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#isPassFocusToChild");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setBackGroundImageCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setBackGroundImageCapInsets(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundImageCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundImageTextureSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getBackGroundImageTextureSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundImageTextureSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_forceDoLayout(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->forceDoLayout();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#forceDoLayout");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getLayoutType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getLayoutType();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getLayoutType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setPassFocusToChild(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Layout.setPassFocusToChild");
            if (!ok) { break; }
            cobj->setPassFocusToChild(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setPassFocusToChild");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_getBackGroundStartColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Color3B retval = cobj->getBackGroundStartColor();
            cocos2d::Color3B* retval_ptr = new cocos2d::Color3B(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Color3B>(mrb, "CC::Color3B", (cocos2d::Color3B*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#getBackGroundStartColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Layout.setBackGroundImageScale9Enabled");
            if (!ok) { break; }
            cobj->setBackGroundImageScale9Enabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setBackGroundImageScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_setLayoutType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Layout::Type arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Layout.setLayoutType");
            if (!ok) { break; }
            cobj->setLayoutType(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#setLayoutType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::Layout* retval = cocos2d::ui::Layout::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Layout>(mrb, "CCUI::Layout", (cocos2d::ui::Layout*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Layout#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::Layout::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Layout#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Layout_property_onPassFocusToChild_get(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value ret;
    #pragma warning NO CONVERSION FROM NATIVE FOR std::function;
    return ret;
}

mrb_value ruby_cocos2dx_ui_Layout_property_onPassFocusToChild_set(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Layout* cobj = static_cast<cocos2d::ui::Layout*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value argv;
    mrb_get_args(mrb, "o", &argv);

    bool ok = true;
    std::function<int (cocos2d::ui::Widget::FocusDirection, cocos2d::ui::Widget *)> val;
    do {
	    // Lambda binding for ruby.
	    unsigned long idx = -1;
	    val = [mrb, self, idx](cocos2d::ui::Widget::FocusDirection larg0, cocos2d::ui::Widget* larg1) -> int {
	        mrb_value ruby_arg0;
	        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
	        mrb_value ruby_arg1;
	        ruby_arg1 = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)larg1, nullptr);
	        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
	        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "onPassFocusToChild->val"));
	        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
	        if (mrb_exception_p(mrb_ret)) {
	            mrb_exc_raise(mrb, mrb_ret);
	        }
	        bool ok = true;
	        int lret;
	        ok = rubyval_to_int32(mrb, mrb_ret, (int*)&lret, ".Proc.call");
	        return lret;
	    };
	    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
	    if (!mrb_hash_p(hash)) {
	        hash = mrb_hash_new(mrb);
	    }
	    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "onPassFocusToChild->val"), argv);
	    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
	    break;
	} while(0);
    if (! ok) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "convert to native failed : Layout#onPassFocusToChild");
    }
    cobj->onPassFocusToChild = val;

    return self;
}

mrb_value ruby_cocos2dx_ui_Layout_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Layout* cobj = new cocos2d::ui::Layout();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Layout#Layout");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_Layout_BackGroundColorType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::BackGroundColorType::NONE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NONE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::BackGroundColorType::SOLID);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SOLID"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::BackGroundColorType::GRADIENT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "GRADIENT"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_Layout_Type_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::Type::ABSOLUTE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ABSOLUTE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::Type::VERTICAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "VERTICAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::Type::HORIZONTAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "HORIZONTAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::Type::RELATIVE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "RELATIVE"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_Layout_ClippingType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::ClippingType::STENCIL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "STENCIL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Layout::ClippingType::SCISSOR);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SCISSOR"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_Layout(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::Layout).name();
    g_rubyType[typeName] = "CCUI::Layout";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Layout", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_Layout_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_back_ground_color_vector", ruby_cocos2dx_ui_Layout_setBackGroundColorVector, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_clipping_type", ruby_cocos2dx_ui_Layout_setClippingType, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_back_ground_color_type", ruby_cocos2dx_ui_Layout_setBackGroundColorType, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_loop_focus", ruby_cocos2dx_ui_Layout_setLoopFocus, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_back_ground_image_color", ruby_cocos2dx_ui_Layout_setBackGroundImageColor, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_back_ground_color_vector", ruby_cocos2dx_ui_Layout_getBackGroundColorVector, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_clipping_type", ruby_cocos2dx_ui_Layout_getClippingType, ARGS_NONE());
    mrb_define_method(mrb, rclass, "loop_focus?", ruby_cocos2dx_ui_Layout_isLoopFocus, ARGS_NONE());
    mrb_define_method(mrb, rclass, "remove_back_ground_image", ruby_cocos2dx_ui_Layout_removeBackGroundImage, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_back_ground_color_opacity", ruby_cocos2dx_ui_Layout_getBackGroundColorOpacity, ARGS_NONE());
    mrb_define_method(mrb, rclass, "clipping_enabled?", ruby_cocos2dx_ui_Layout_isClippingEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_back_ground_image_opacity", ruby_cocos2dx_ui_Layout_setBackGroundImageOpacity, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_back_ground_image", ruby_cocos2dx_ui_Layout_setBackGroundImage, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_back_ground_color", ruby_cocos2dx_ui_Layout_setBackGroundColor, ARGS_REQ(1)|ARGS_OPT(1));
    mrb_define_method(mrb, rclass, "request_do_layout", ruby_cocos2dx_ui_Layout_requestDoLayout, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_back_ground_image_cap_insets", ruby_cocos2dx_ui_Layout_getBackGroundImageCapInsets, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_back_ground_color", ruby_cocos2dx_ui_Layout_getBackGroundColor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_clipping_enabled", ruby_cocos2dx_ui_Layout_setClippingEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_back_ground_image_color", ruby_cocos2dx_ui_Layout_getBackGroundImageColor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "back_ground_image_scale9_enabled?", ruby_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_back_ground_color_type", ruby_cocos2dx_ui_Layout_getBackGroundColorType, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_back_ground_end_color", ruby_cocos2dx_ui_Layout_getBackGroundEndColor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_back_ground_color_opacity", ruby_cocos2dx_ui_Layout_setBackGroundColorOpacity, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_back_ground_image_opacity", ruby_cocos2dx_ui_Layout_getBackGroundImageOpacity, ARGS_NONE());
    mrb_define_method(mrb, rclass, "pass_focus_to_child?", ruby_cocos2dx_ui_Layout_isPassFocusToChild, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_back_ground_image_cap_insets", ruby_cocos2dx_ui_Layout_setBackGroundImageCapInsets, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_back_ground_image_texture_size", ruby_cocos2dx_ui_Layout_getBackGroundImageTextureSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "force_do_layout", ruby_cocos2dx_ui_Layout_forceDoLayout, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_layout_type", ruby_cocos2dx_ui_Layout_getLayoutType, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_pass_focus_to_child", ruby_cocos2dx_ui_Layout_setPassFocusToChild, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_back_ground_start_color", ruby_cocos2dx_ui_Layout_getBackGroundStartColor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_back_ground_image_scale9_enabled", ruby_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_layout_type", ruby_cocos2dx_ui_Layout_setLayoutType, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_Layout_create_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_Layout_createInstance_static, ARGS_NONE());
    mrb_define_method(mrb, rclass, "on_pass_focus_to_child", ruby_cocos2dx_ui_Layout_property_onPassFocusToChild_get, ARGS_NONE());
    mrb_define_method(mrb, rclass, "on_pass_focus_to_child=", ruby_cocos2dx_ui_Layout_property_onPassFocusToChild_set, ARGS_REQ(1));
    struct RClass* renum_BackGroundColorType = mrb_define_module_under(mrb, rclass, "BackGroundColorType");
    ruby_cocos2dx_ui_Layout_BackGroundColorType_enum_init(mrb, renum_BackGroundColorType);
    mrb_define_class_method(mrb, renum_BackGroundColorType, "NONE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_BackGroundColorType, "SOLID", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_BackGroundColorType, "GRADIENT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_Type = mrb_define_module_under(mrb, rclass, "Type");
    ruby_cocos2dx_ui_Layout_Type_enum_init(mrb, renum_Type);
    mrb_define_class_method(mrb, renum_Type, "ABSOLUTE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Type, "VERTICAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Type, "HORIZONTAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Type, "RELATIVE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_ClippingType = mrb_define_module_under(mrb, rclass, "ClippingType");
    ruby_cocos2dx_ui_Layout_ClippingType_enum_init(mrb, renum_ClippingType);
    mrb_define_class_method(mrb, renum_ClippingType, "STENCIL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_ClippingType, "SCISSOR", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_Button_getTitleText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getTitleText();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getTitleText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setTitleFontSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::Button.setTitleFontSize");
            if (!ok) { break; }
            cobj->setTitleFontSize(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setTitleFontSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Button.setScale9Enabled");
            if (!ok) { break; }
            cobj->setScale9Enabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_getTitleRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Label* retval = cobj->getTitleRenderer();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Label>(mrb, "CC::Label", (cocos2d::Label*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getTitleRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_getZoomScale(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getZoomScale();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getZoomScale");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_getCapInsetsDisabledRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getCapInsetsDisabledRenderer();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getCapInsetsDisabledRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setTitleColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color3B* arg0;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[0], "CC::Color3B", &arg0);
            if (!ok) { break; }
            cobj->setTitleColor(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setTitleColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setCapInsetsDisabledRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsetsDisabledRenderer(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setCapInsetsDisabledRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsets(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_loadTextureDisabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTextureDisabled");
            if (!ok) { break; }
            cobj->loadTextureDisabled(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTextureDisabled");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Button.loadTextureDisabled");
            if (!ok) { break; }
            cobj->loadTextureDisabled(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#loadTextureDisabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setTitleText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.setTitleText");
            if (!ok) { break; }
            cobj->setTitleText(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setTitleText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setCapInsetsNormalRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsetsNormalRenderer(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setCapInsetsNormalRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_loadTexturePressed(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTexturePressed");
            if (!ok) { break; }
            cobj->loadTexturePressed(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTexturePressed");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Button.loadTexturePressed");
            if (!ok) { break; }
            cobj->loadTexturePressed(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#loadTexturePressed");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setTitleFontName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.setTitleFontName");
            if (!ok) { break; }
            cobj->setTitleFontName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setTitleFontName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_getCapInsetsNormalRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getCapInsetsNormalRenderer();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getCapInsetsNormalRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_getCapInsetsPressedRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getCapInsetsPressedRenderer();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getCapInsetsPressedRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_loadTextures(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            cobj->loadTextures(arg0, arg1);
            return self;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            cobj->loadTextures(arg0, arg1, arg2);
            return self;
        }
    } while (0);
    do {
        if (argc == 4) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg3;
            ok = rubyval_to_int32(mrb, argv[3], (int*)&arg3, "CCUI::Button.loadTextures");
            if (!ok) { break; }
            cobj->loadTextures(arg0, arg1, arg2, arg3);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#loadTextures");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_isScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isScale9Enabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#isScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_loadTextureNormal(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTextureNormal");
            if (!ok) { break; }
            cobj->loadTextureNormal(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.loadTextureNormal");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Button.loadTextureNormal");
            if (!ok) { break; }
            cobj->loadTextureNormal(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#loadTextureNormal");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setCapInsetsPressedRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsetsPressedRenderer(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setCapInsetsPressedRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_getTitleFontSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getTitleFontSize();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getTitleFontSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_getTitleFontName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getTitleFontName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getTitleFontName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_getTitleColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Color3B retval = cobj->getTitleColor();
            cocos2d::Color3B* retval_ptr = new cocos2d::Color3B(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Color3B>(mrb, "CC::Color3B", (cocos2d::Color3B*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#getTitleColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setPressedActionEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Button.setPressedActionEnabled");
            if (!ok) { break; }
            cobj->setPressedActionEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setPressedActionEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_setZoomScale(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Button* cobj = static_cast<cocos2d::ui::Button*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::Button.setZoomScale");
            if (!ok) { break; }
            cobj->setZoomScale(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#setZoomScale");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.create");
            if (!ok) { break; }

            cocos2d::ui::Button* retval = cocos2d::ui::Button::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Button>(mrb, "CCUI::Button", (cocos2d::ui::Button*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Button.create");
            if (!ok) { break; }

            cocos2d::ui::Button* retval = cocos2d::ui::Button::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Button>(mrb, "CCUI::Button", (cocos2d::ui::Button*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Button.create");
            if (!ok) { break; }

            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::Button.create");
            if (!ok) { break; }

            cocos2d::ui::Button* retval = cocos2d::ui::Button::create(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Button>(mrb, "CCUI::Button", (cocos2d::ui::Button*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 4) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Button.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Button.create");
            if (!ok) { break; }

            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::Button.create");
            if (!ok) { break; }

            cocos2d::ui::Widget::TextureResType arg3;
            ok = rubyval_to_int32(mrb, argv[3], (int*)&arg3, "CCUI::Button.create");
            if (!ok) { break; }

            cocos2d::ui::Button* retval = cocos2d::ui::Button::create(arg0, arg1, arg2, arg3);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Button>(mrb, "CCUI::Button", (cocos2d::ui::Button*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::Button* retval = cocos2d::ui::Button::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Button>(mrb, "CCUI::Button", (cocos2d::ui::Button*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Button#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::Button::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Button#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Button_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Button* cobj = new cocos2d::ui::Button();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Button#Button");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_Button(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::Button).name();
    g_rubyType[typeName] = "CCUI::Button";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Button", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_Button_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_title_text", ruby_cocos2dx_ui_Button_getTitleText, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_title_font_size", ruby_cocos2dx_ui_Button_setTitleFontSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_scale9_enabled", ruby_cocos2dx_ui_Button_setScale9Enabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_title_renderer", ruby_cocos2dx_ui_Button_getTitleRenderer, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_zoom_scale", ruby_cocos2dx_ui_Button_getZoomScale, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_cap_insets_disabled_renderer", ruby_cocos2dx_ui_Button_getCapInsetsDisabledRenderer, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_title_color", ruby_cocos2dx_ui_Button_setTitleColor, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_cap_insets_disabled_renderer", ruby_cocos2dx_ui_Button_setCapInsetsDisabledRenderer, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_cap_insets", ruby_cocos2dx_ui_Button_setCapInsets, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "load_texture_disabled", ruby_cocos2dx_ui_Button_loadTextureDisabled, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_title_text", ruby_cocos2dx_ui_Button_setTitleText, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_cap_insets_normal_renderer", ruby_cocos2dx_ui_Button_setCapInsetsNormalRenderer, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "load_texture_pressed", ruby_cocos2dx_ui_Button_loadTexturePressed, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_title_font_name", ruby_cocos2dx_ui_Button_setTitleFontName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_cap_insets_normal_renderer", ruby_cocos2dx_ui_Button_getCapInsetsNormalRenderer, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_cap_insets_pressed_renderer", ruby_cocos2dx_ui_Button_getCapInsetsPressedRenderer, ARGS_NONE());
    mrb_define_method(mrb, rclass, "load_textures", ruby_cocos2dx_ui_Button_loadTextures, ARGS_REQ(4));
    mrb_define_method(mrb, rclass, "scale9_enabled?", ruby_cocos2dx_ui_Button_isScale9Enabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "load_texture_normal", ruby_cocos2dx_ui_Button_loadTextureNormal, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_cap_insets_pressed_renderer", ruby_cocos2dx_ui_Button_setCapInsetsPressedRenderer, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_title_font_size", ruby_cocos2dx_ui_Button_getTitleFontSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_title_font_name", ruby_cocos2dx_ui_Button_getTitleFontName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_title_color", ruby_cocos2dx_ui_Button_getTitleColor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_pressed_action_enabled", ruby_cocos2dx_ui_Button_setPressedActionEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_zoom_scale", ruby_cocos2dx_ui_Button_setZoomScale, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_Button_create_static, ARGS_REQ(0)|ARGS_OPT(4));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_Button_createInstance_static, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_CheckBox_loadTextureBackGroundSelected(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureBackGroundSelected");
            if (!ok) { break; }
            cobj->loadTextureBackGroundSelected(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureBackGroundSelected");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::CheckBox.loadTextureBackGroundSelected");
            if (!ok) { break; }
            cobj->loadTextureBackGroundSelected(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#loadTextureBackGroundSelected");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_loadTextureBackGroundDisabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureBackGroundDisabled");
            if (!ok) { break; }
            cobj->loadTextureBackGroundDisabled(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureBackGroundDisabled");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::CheckBox.loadTextureBackGroundDisabled");
            if (!ok) { break; }
            cobj->loadTextureBackGroundDisabled(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#loadTextureBackGroundDisabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_setSelected(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::CheckBox.setSelected");
            if (!ok) { break; }
            cobj->setSelected(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#setSelected");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_addEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *, cocos2d::ui::CheckBox::EventType)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0, cocos2d::ui::CheckBox::EventType larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#addEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_loadTextureFrontCross(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureFrontCross");
            if (!ok) { break; }
            cobj->loadTextureFrontCross(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureFrontCross");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::CheckBox.loadTextureFrontCross");
            if (!ok) { break; }
            cobj->loadTextureFrontCross(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#loadTextureFrontCross");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_isSelected(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isSelected();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#isSelected");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_loadTextures(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 5) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            std::string arg3;
            ok = rubyval_to_std_string(mrb, argv[3], &arg3, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            std::string arg4;
            ok = rubyval_to_std_string(mrb, argv[4], &arg4, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            cobj->loadTextures(arg0, arg1, arg2, arg3, arg4);
            return self;
        }
    } while (0);
    do {
        if (argc == 6) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            std::string arg3;
            ok = rubyval_to_std_string(mrb, argv[3], &arg3, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            std::string arg4;
            ok = rubyval_to_std_string(mrb, argv[4], &arg4, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg5;
            ok = rubyval_to_int32(mrb, argv[5], (int*)&arg5, "CCUI::CheckBox.loadTextures");
            if (!ok) { break; }
            cobj->loadTextures(arg0, arg1, arg2, arg3, arg4, arg5);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#loadTextures");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_getZoomScale(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getZoomScale();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#getZoomScale");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_loadTextureBackGround(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureBackGround");
            if (!ok) { break; }
            cobj->loadTextureBackGround(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureBackGround");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::CheckBox.loadTextureBackGround");
            if (!ok) { break; }
            cobj->loadTextureBackGround(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#loadTextureBackGround");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_setZoomScale(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::CheckBox.setZoomScale");
            if (!ok) { break; }
            cobj->setZoomScale(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#setZoomScale");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_loadTextureFrontCrossDisabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::CheckBox* cobj = static_cast<cocos2d::ui::CheckBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureFrontCrossDisabled");
            if (!ok) { break; }
            cobj->loadTextureFrontCrossDisabled(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.loadTextureFrontCrossDisabled");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::CheckBox.loadTextureFrontCrossDisabled");
            if (!ok) { break; }
            cobj->loadTextureFrontCrossDisabled(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#loadTextureFrontCrossDisabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 5) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg3;
            ok = rubyval_to_std_string(mrb, argv[3], &arg3, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg4;
            ok = rubyval_to_std_string(mrb, argv[4], &arg4, "CCUI::CheckBox.create");
            if (!ok) { break; }

            cocos2d::ui::CheckBox* retval = cocos2d::ui::CheckBox::create(arg0, arg1, arg2, arg3, arg4);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::CheckBox>(mrb, "CCUI::CheckBox", (cocos2d::ui::CheckBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 6) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg3;
            ok = rubyval_to_std_string(mrb, argv[3], &arg3, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg4;
            ok = rubyval_to_std_string(mrb, argv[4], &arg4, "CCUI::CheckBox.create");
            if (!ok) { break; }

            cocos2d::ui::Widget::TextureResType arg5;
            ok = rubyval_to_int32(mrb, argv[5], (int*)&arg5, "CCUI::CheckBox.create");
            if (!ok) { break; }

            cocos2d::ui::CheckBox* retval = cocos2d::ui::CheckBox::create(arg0, arg1, arg2, arg3, arg4, arg5);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::CheckBox>(mrb, "CCUI::CheckBox", (cocos2d::ui::CheckBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::CheckBox* retval = cocos2d::ui::CheckBox::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::CheckBox>(mrb, "CCUI::CheckBox", (cocos2d::ui::CheckBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::CheckBox.create");
            if (!ok) { break; }

            cocos2d::ui::CheckBox* retval = cocos2d::ui::CheckBox::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::CheckBox>(mrb, "CCUI::CheckBox", (cocos2d::ui::CheckBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::CheckBox.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::CheckBox.create");
            if (!ok) { break; }

            cocos2d::ui::Widget::TextureResType arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::CheckBox.create");
            if (!ok) { break; }

            cocos2d::ui::CheckBox* retval = cocos2d::ui::CheckBox::create(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::CheckBox>(mrb, "CCUI::CheckBox", (cocos2d::ui::CheckBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::CheckBox#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::CheckBox::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::CheckBox#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_CheckBox_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::CheckBox* cobj = new cocos2d::ui::CheckBox();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::CheckBox#CheckBox");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_CheckBox_EventType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::CheckBox::EventType::SELECTED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SELECTED"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::CheckBox::EventType::UNSELECTED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "UNSELECTED"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_CheckBox(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::CheckBox).name();
    g_rubyType[typeName] = "CCUI::CheckBox";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "CheckBox", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_CheckBox_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "load_texture_back_ground_selected", ruby_cocos2dx_ui_CheckBox_loadTextureBackGroundSelected, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "load_texture_back_ground_disabled", ruby_cocos2dx_ui_CheckBox_loadTextureBackGroundDisabled, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_selected", ruby_cocos2dx_ui_CheckBox_setSelected, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "add_event_listener", ruby_cocos2dx_ui_CheckBox_addEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "load_texture_front_cross", ruby_cocos2dx_ui_CheckBox_loadTextureFrontCross, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "selected?", ruby_cocos2dx_ui_CheckBox_isSelected, ARGS_NONE());
    mrb_define_method(mrb, rclass, "load_textures", ruby_cocos2dx_ui_CheckBox_loadTextures, ARGS_REQ(6));
    mrb_define_method(mrb, rclass, "get_zoom_scale", ruby_cocos2dx_ui_CheckBox_getZoomScale, ARGS_NONE());
    mrb_define_method(mrb, rclass, "load_texture_back_ground", ruby_cocos2dx_ui_CheckBox_loadTextureBackGround, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_zoom_scale", ruby_cocos2dx_ui_CheckBox_setZoomScale, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "load_texture_front_cross_disabled", ruby_cocos2dx_ui_CheckBox_loadTextureFrontCrossDisabled, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_CheckBox_create_static, ARGS_REQ(0)|ARGS_OPT(6));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_CheckBox_createInstance_static, ARGS_NONE());
    struct RClass* renum_EventType = mrb_define_module_under(mrb, rclass, "EventType");
    ruby_cocos2dx_ui_CheckBox_EventType_enum_init(mrb, renum_EventType);
    mrb_define_class_method(mrb, renum_EventType, "SELECTED", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "UNSELECTED", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_ImageView_loadTexture(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ImageView* cobj = static_cast<cocos2d::ui::ImageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::ImageView.loadTexture");
            if (!ok) { break; }
            cobj->loadTexture(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::ImageView.loadTexture");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::ImageView.loadTexture");
            if (!ok) { break; }
            cobj->loadTexture(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ImageView#loadTexture");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ImageView_setScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ImageView* cobj = static_cast<cocos2d::ui::ImageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::ImageView.setScale9Enabled");
            if (!ok) { break; }
            cobj->setScale9Enabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ImageView#setScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ImageView_setTextureRect(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ImageView* cobj = static_cast<cocos2d::ui::ImageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setTextureRect(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ImageView#setTextureRect");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ImageView_setCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ImageView* cobj = static_cast<cocos2d::ui::ImageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsets(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ImageView#setCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ImageView_getCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ImageView* cobj = static_cast<cocos2d::ui::ImageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getCapInsets();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ImageView#getCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ImageView_isScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ImageView* cobj = static_cast<cocos2d::ui::ImageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isScale9Enabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ImageView#isScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ImageView_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::ImageView.create");
            if (!ok) { break; }

            cocos2d::ui::ImageView* retval = cocos2d::ui::ImageView::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::ImageView>(mrb, "CCUI::ImageView", (cocos2d::ui::ImageView*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::ImageView.create");
            if (!ok) { break; }

            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::ImageView.create");
            if (!ok) { break; }

            cocos2d::ui::ImageView* retval = cocos2d::ui::ImageView::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::ImageView>(mrb, "CCUI::ImageView", (cocos2d::ui::ImageView*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::ImageView* retval = cocos2d::ui::ImageView::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::ImageView>(mrb, "CCUI::ImageView", (cocos2d::ui::ImageView*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::ImageView#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ImageView_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::ImageView::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::ImageView#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ImageView_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::ImageView* cobj = new cocos2d::ui::ImageView();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ImageView#ImageView");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_ImageView(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::ImageView).name();
    g_rubyType[typeName] = "CCUI::ImageView";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "ImageView", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_ImageView_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "load_texture", ruby_cocos2dx_ui_ImageView_loadTexture, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_scale9_enabled", ruby_cocos2dx_ui_ImageView_setScale9Enabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_texture_rect", ruby_cocos2dx_ui_ImageView_setTextureRect, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_cap_insets", ruby_cocos2dx_ui_ImageView_setCapInsets, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_cap_insets", ruby_cocos2dx_ui_ImageView_getCapInsets, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scale9_enabled?", ruby_cocos2dx_ui_ImageView_isScale9Enabled, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_ImageView_create_static, ARGS_REQ(0)|ARGS_OPT(2));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_ImageView_createInstance_static, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_Text_enableShadow(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 0) {
            cobj->enableShadow();
            return self;
        }
    } while (0);
    do {
        if (argc == 1) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            cobj->enableShadow(*arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            cocos2d::Size* arg1;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[1], "CC::Size", &arg1);
            if (!ok) { break; }
            cobj->enableShadow(*arg0, *arg1);
            return self;
        }
    } while (0);
    do {
        if (argc == 3) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            cocos2d::Size* arg1;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[1], "CC::Size", &arg1);
            if (!ok) { break; }
            int arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::Text.enableShadow");
            if (!ok) { break; }
            cobj->enableShadow(*arg0, *arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#enableShadow");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getFontSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getFontSize();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getFontSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getString(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getString();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getString");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_disableEffect(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->disableEffect();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#disableEffect");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getTextColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Color4B retval = cobj->getTextColor();
            cocos2d::Color4B* retval_ptr = new cocos2d::Color4B(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Color4B>(mrb, "CC::Color4B", (cocos2d::Color4B*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getTextColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_setTextVerticalAlignment(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::TextVAlignment arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Text.setTextVerticalAlignment");
            if (!ok) { break; }
            cobj->setTextVerticalAlignment(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#setTextVerticalAlignment");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_setFontName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Text.setFontName");
            if (!ok) { break; }
            cobj->setFontName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#setFontName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_setTouchScaleChangeEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Text.setTouchScaleChangeEnabled");
            if (!ok) { break; }
            cobj->setTouchScaleChangeEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#setTouchScaleChangeEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_setString(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Text.setString");
            if (!ok) { break; }
            cobj->setString(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#setString");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_isTouchScaleChangeEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isTouchScaleChangeEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#isTouchScaleChangeEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getFontName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getFontName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getFontName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_setTextAreaSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setTextAreaSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#setTextAreaSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getStringLength(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            ssize_t retval = cobj->getStringLength();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getStringLength");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getAutoRenderSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getAutoRenderSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getAutoRenderSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_enableOutline(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            cobj->enableOutline(*arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Text.enableOutline");
            if (!ok) { break; }
            cobj->enableOutline(*arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#enableOutline");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getType();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getTextHorizontalAlignment(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getTextHorizontalAlignment();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getTextHorizontalAlignment");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_setFontSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Text.setFontSize");
            if (!ok) { break; }
            cobj->setFontSize(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#setFontSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_setTextColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            cobj->setTextColor(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#setTextColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_enableGlow(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            cobj->enableGlow(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#enableGlow");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getTextVerticalAlignment(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getTextVerticalAlignment();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getTextVerticalAlignment");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_getTextAreaSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getTextAreaSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#getTextAreaSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_setTextHorizontalAlignment(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Text* cobj = static_cast<cocos2d::ui::Text*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::TextHAlignment arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Text.setTextHorizontalAlignment");
            if (!ok) { break; }
            cobj->setTextHorizontalAlignment(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#setTextHorizontalAlignment");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Text.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Text.create");
            if (!ok) { break; }

            int arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::Text.create");
            if (!ok) { break; }

            cocos2d::ui::Text* retval = cocos2d::ui::Text::create(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Text>(mrb, "CCUI::Text", (cocos2d::ui::Text*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::Text* retval = cocos2d::ui::Text::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Text>(mrb, "CCUI::Text", (cocos2d::ui::Text*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Text#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::Text::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Text#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Text_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Text* cobj = new cocos2d::ui::Text();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Text#Text");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_Text_Type_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Text::Type::SYSTEM);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SYSTEM"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Text::Type::TTF);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "TTF"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_Text(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::Text).name();
    g_rubyType[typeName] = "CCUI::Text";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Text", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_Text_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "enable_shadow", ruby_cocos2dx_ui_Text_enableShadow, ARGS_REQ(3));
    mrb_define_method(mrb, rclass, "get_font_size", ruby_cocos2dx_ui_Text_getFontSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_string", ruby_cocos2dx_ui_Text_getString, ARGS_NONE());
    mrb_define_method(mrb, rclass, "disable_effect", ruby_cocos2dx_ui_Text_disableEffect, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_text_color", ruby_cocos2dx_ui_Text_getTextColor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_text_vertical_alignment", ruby_cocos2dx_ui_Text_setTextVerticalAlignment, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_font_name", ruby_cocos2dx_ui_Text_setFontName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_touch_scale_change_enabled", ruby_cocos2dx_ui_Text_setTouchScaleChangeEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_string", ruby_cocos2dx_ui_Text_setString, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "touch_scale_change_enabled?", ruby_cocos2dx_ui_Text_isTouchScaleChangeEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_font_name", ruby_cocos2dx_ui_Text_getFontName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_text_area_size", ruby_cocos2dx_ui_Text_setTextAreaSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_string_length", ruby_cocos2dx_ui_Text_getStringLength, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_auto_render_size", ruby_cocos2dx_ui_Text_getAutoRenderSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "enable_outline", ruby_cocos2dx_ui_Text_enableOutline, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "get_type", ruby_cocos2dx_ui_Text_getType, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_text_horizontal_alignment", ruby_cocos2dx_ui_Text_getTextHorizontalAlignment, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_font_size", ruby_cocos2dx_ui_Text_setFontSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_text_color", ruby_cocos2dx_ui_Text_setTextColor, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "enable_glow", ruby_cocos2dx_ui_Text_enableGlow, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_text_vertical_alignment", ruby_cocos2dx_ui_Text_getTextVerticalAlignment, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_text_area_size", ruby_cocos2dx_ui_Text_getTextAreaSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_text_horizontal_alignment", ruby_cocos2dx_ui_Text_setTextHorizontalAlignment, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_Text_create_static, ARGS_REQ(0)|ARGS_OPT(3));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_Text_createInstance_static, ARGS_NONE());
    struct RClass* renum_Type = mrb_define_module_under(mrb, rclass, "Type");
    ruby_cocos2dx_ui_Text_Type_enum_init(mrb, renum_Type);
    mrb_define_class_method(mrb, renum_Type, "SYSTEM", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Type, "TTF", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_TextAtlas_getStringLength(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextAtlas* cobj = static_cast<cocos2d::ui::TextAtlas*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            ssize_t retval = cobj->getStringLength();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextAtlas#getStringLength");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextAtlas_getString(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextAtlas* cobj = static_cast<cocos2d::ui::TextAtlas*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getString();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextAtlas#getString");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextAtlas_setString(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextAtlas* cobj = static_cast<cocos2d::ui::TextAtlas*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextAtlas.setString");
            if (!ok) { break; }
            cobj->setString(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextAtlas#setString");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextAtlas_setProperty(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextAtlas* cobj = static_cast<cocos2d::ui::TextAtlas*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 5) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextAtlas.setProperty");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::TextAtlas.setProperty");
            if (!ok) { break; }
            int arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::TextAtlas.setProperty");
            if (!ok) { break; }
            int arg3;
            ok = rubyval_to_int32(mrb, argv[3], (int*)&arg3, "CCUI::TextAtlas.setProperty");
            if (!ok) { break; }
            std::string arg4;
            ok = rubyval_to_std_string(mrb, argv[4], &arg4, "CCUI::TextAtlas.setProperty");
            if (!ok) { break; }
            cobj->setProperty(arg0, arg1, arg2, arg3, arg4);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextAtlas#setProperty");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextAtlas_adaptRenderers(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextAtlas* cobj = static_cast<cocos2d::ui::TextAtlas*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->adaptRenderers();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextAtlas#adaptRenderers");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextAtlas_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 5) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextAtlas.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::TextAtlas.create");
            if (!ok) { break; }

            int arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::TextAtlas.create");
            if (!ok) { break; }

            int arg3;
            ok = rubyval_to_int32(mrb, argv[3], (int*)&arg3, "CCUI::TextAtlas.create");
            if (!ok) { break; }

            std::string arg4;
            ok = rubyval_to_std_string(mrb, argv[4], &arg4, "CCUI::TextAtlas.create");
            if (!ok) { break; }

            cocos2d::ui::TextAtlas* retval = cocos2d::ui::TextAtlas::create(arg0, arg1, arg2, arg3, arg4);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::TextAtlas>(mrb, "CCUI::TextAtlas", (cocos2d::ui::TextAtlas*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::TextAtlas* retval = cocos2d::ui::TextAtlas::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::TextAtlas>(mrb, "CCUI::TextAtlas", (cocos2d::ui::TextAtlas*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::TextAtlas#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextAtlas_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::TextAtlas::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::TextAtlas#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextAtlas_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::TextAtlas* cobj = new cocos2d::ui::TextAtlas();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextAtlas#TextAtlas");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_TextAtlas(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::TextAtlas).name();
    g_rubyType[typeName] = "CCUI::TextAtlas";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "TextAtlas", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_TextAtlas_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_string_length", ruby_cocos2dx_ui_TextAtlas_getStringLength, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_string", ruby_cocos2dx_ui_TextAtlas_getString, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_string", ruby_cocos2dx_ui_TextAtlas_setString, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_property", ruby_cocos2dx_ui_TextAtlas_setProperty, ARGS_REQ(5));
    mrb_define_method(mrb, rclass, "adapt_renderers", ruby_cocos2dx_ui_TextAtlas_adaptRenderers, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_TextAtlas_create_static, ARGS_REQ(0)|ARGS_OPT(5));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_TextAtlas_createInstance_static, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_LoadingBar_setPercent(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::LoadingBar.setPercent");
            if (!ok) { break; }
            cobj->setPercent(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#setPercent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_loadTexture(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::LoadingBar.loadTexture");
            if (!ok) { break; }
            cobj->loadTexture(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::LoadingBar.loadTexture");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::LoadingBar.loadTexture");
            if (!ok) { break; }
            cobj->loadTexture(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#loadTexture");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_setDirection(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::LoadingBar::Direction arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::LoadingBar.setDirection");
            if (!ok) { break; }
            cobj->setDirection(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#setDirection");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_setScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::LoadingBar.setScale9Enabled");
            if (!ok) { break; }
            cobj->setScale9Enabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#setScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_setCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsets(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#setCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_getDirection(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getDirection();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#getDirection");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_getCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getCapInsets();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#getCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_isScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isScale9Enabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#isScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_getPercent(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::LoadingBar* cobj = static_cast<cocos2d::ui::LoadingBar*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getPercent();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#getPercent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::LoadingBar.create");
            if (!ok) { break; }

            cocos2d::ui::LoadingBar* retval = cocos2d::ui::LoadingBar::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::LoadingBar>(mrb, "CCUI::LoadingBar", (cocos2d::ui::LoadingBar*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::LoadingBar.create");
            if (!ok) { break; }

            double arg1;
            ok = rubyval_to_number(mrb, argv[1], (double*)&arg1, "CCUI::LoadingBar.create");
            if (!ok) { break; }

            cocos2d::ui::LoadingBar* retval = cocos2d::ui::LoadingBar::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::LoadingBar>(mrb, "CCUI::LoadingBar", (cocos2d::ui::LoadingBar*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::LoadingBar* retval = cocos2d::ui::LoadingBar::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::LoadingBar>(mrb, "CCUI::LoadingBar", (cocos2d::ui::LoadingBar*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::LoadingBar.create");
            if (!ok) { break; }

            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::LoadingBar.create");
            if (!ok) { break; }

            cocos2d::ui::LoadingBar* retval = cocos2d::ui::LoadingBar::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::LoadingBar>(mrb, "CCUI::LoadingBar", (cocos2d::ui::LoadingBar*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::LoadingBar.create");
            if (!ok) { break; }

            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::LoadingBar.create");
            if (!ok) { break; }

            double arg2;
            ok = rubyval_to_number(mrb, argv[2], (double*)&arg2, "CCUI::LoadingBar.create");
            if (!ok) { break; }

            cocos2d::ui::LoadingBar* retval = cocos2d::ui::LoadingBar::create(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::LoadingBar>(mrb, "CCUI::LoadingBar", (cocos2d::ui::LoadingBar*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::LoadingBar#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::LoadingBar::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::LoadingBar#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_LoadingBar_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::LoadingBar* cobj = new cocos2d::ui::LoadingBar();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::LoadingBar#LoadingBar");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_LoadingBar_Direction_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LoadingBar::Direction::LEFT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LEFT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::LoadingBar::Direction::RIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "RIGHT"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_LoadingBar(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::LoadingBar).name();
    g_rubyType[typeName] = "CCUI::LoadingBar";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "LoadingBar", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_LoadingBar_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_percent", ruby_cocos2dx_ui_LoadingBar_setPercent, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "load_texture", ruby_cocos2dx_ui_LoadingBar_loadTexture, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_direction", ruby_cocos2dx_ui_LoadingBar_setDirection, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_scale9_enabled", ruby_cocos2dx_ui_LoadingBar_setScale9Enabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_cap_insets", ruby_cocos2dx_ui_LoadingBar_setCapInsets, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_direction", ruby_cocos2dx_ui_LoadingBar_getDirection, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_cap_insets", ruby_cocos2dx_ui_LoadingBar_getCapInsets, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scale9_enabled?", ruby_cocos2dx_ui_LoadingBar_isScale9Enabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_percent", ruby_cocos2dx_ui_LoadingBar_getPercent, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_LoadingBar_create_static, ARGS_REQ(0)|ARGS_OPT(3));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_LoadingBar_createInstance_static, ARGS_NONE());
    struct RClass* renum_Direction = mrb_define_module_under(mrb, rclass, "Direction");
    ruby_cocos2dx_ui_LoadingBar_Direction_enum_init(mrb, renum_Direction);
    mrb_define_class_method(mrb, renum_Direction, "LEFT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Direction, "RIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_ScrollView_scrollToTop(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToTop");
            if (!ok) { break; }
            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCUI::ScrollView.scrollToTop");
            if (!ok) { break; }
            cobj->scrollToTop(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToTop");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToPercentHorizontal(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToPercentHorizontal");
            if (!ok) { break; }
            double arg1;
            ok = rubyval_to_number(mrb, argv[1], (double*)&arg1, "CCUI::ScrollView.scrollToPercentHorizontal");
            if (!ok) { break; }
            bool arg2;
            ok = rubyval_to_boolean(mrb, argv[2], &arg2, "CCUI::ScrollView.scrollToPercentHorizontal");
            if (!ok) { break; }
            cobj->scrollToPercentHorizontal(arg0, arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToPercentHorizontal");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_isInertiaScrollEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isInertiaScrollEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#isInertiaScrollEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToPercentBothDirection(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            double arg1;
            ok = rubyval_to_number(mrb, argv[1], (double*)&arg1, "CCUI::ScrollView.scrollToPercentBothDirection");
            if (!ok) { break; }
            bool arg2;
            ok = rubyval_to_boolean(mrb, argv[2], &arg2, "CCUI::ScrollView.scrollToPercentBothDirection");
            if (!ok) { break; }
            cobj->scrollToPercentBothDirection(*arg0, arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToPercentBothDirection");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_getDirection(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getDirection();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#getDirection");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToBottomLeft(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToBottomLeft");
            if (!ok) { break; }
            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCUI::ScrollView.scrollToBottomLeft");
            if (!ok) { break; }
            cobj->scrollToBottomLeft(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToBottomLeft");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_getInnerContainer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Layout* retval = cobj->getInnerContainer();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Layout>(mrb, "CCUI::Layout", (cocos2d::ui::Layout*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#getInnerContainer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToBottom(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->jumpToBottom();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToBottom");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_setDirection(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::ScrollView::Direction arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::ScrollView.setDirection");
            if (!ok) { break; }
            cobj->setDirection(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#setDirection");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToTopLeft(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToTopLeft");
            if (!ok) { break; }
            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCUI::ScrollView.scrollToTopLeft");
            if (!ok) { break; }
            cobj->scrollToTopLeft(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToTopLeft");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToTopRight(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->jumpToTopRight();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToTopRight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToBottomLeft(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->jumpToBottomLeft();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToBottomLeft");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_setInnerContainerSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setInnerContainerSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#setInnerContainerSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_getInnerContainerSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getInnerContainerSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#getInnerContainerSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_isBounceEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isBounceEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#isBounceEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToPercentVertical(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.jumpToPercentVertical");
            if (!ok) { break; }
            cobj->jumpToPercentVertical(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToPercentVertical");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_addEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *, cocos2d::ui::ScrollView::EventType)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0, cocos2d::ui::ScrollView::EventType larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#addEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_setInertiaScrollEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::ScrollView.setInertiaScrollEnabled");
            if (!ok) { break; }
            cobj->setInertiaScrollEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#setInertiaScrollEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToTopLeft(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->jumpToTopLeft();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToTopLeft");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToPercentHorizontal(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.jumpToPercentHorizontal");
            if (!ok) { break; }
            cobj->jumpToPercentHorizontal(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToPercentHorizontal");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToBottomRight(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->jumpToBottomRight();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToBottomRight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_setBounceEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::ScrollView.setBounceEnabled");
            if (!ok) { break; }
            cobj->setBounceEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#setBounceEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToTop(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->jumpToTop();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToTop");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToLeft(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToLeft");
            if (!ok) { break; }
            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCUI::ScrollView.scrollToLeft");
            if (!ok) { break; }
            cobj->scrollToLeft(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToLeft");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToPercentBothDirection(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            cobj->jumpToPercentBothDirection(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToPercentBothDirection");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToPercentVertical(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToPercentVertical");
            if (!ok) { break; }
            double arg1;
            ok = rubyval_to_number(mrb, argv[1], (double*)&arg1, "CCUI::ScrollView.scrollToPercentVertical");
            if (!ok) { break; }
            bool arg2;
            ok = rubyval_to_boolean(mrb, argv[2], &arg2, "CCUI::ScrollView.scrollToPercentVertical");
            if (!ok) { break; }
            cobj->scrollToPercentVertical(arg0, arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToPercentVertical");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToBottom(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToBottom");
            if (!ok) { break; }
            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCUI::ScrollView.scrollToBottom");
            if (!ok) { break; }
            cobj->scrollToBottom(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToBottom");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToBottomRight(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToBottomRight");
            if (!ok) { break; }
            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCUI::ScrollView.scrollToBottomRight");
            if (!ok) { break; }
            cobj->scrollToBottomRight(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToBottomRight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToLeft(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->jumpToLeft();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToLeft");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToRight(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToRight");
            if (!ok) { break; }
            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCUI::ScrollView.scrollToRight");
            if (!ok) { break; }
            cobj->scrollToRight(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToRight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_jumpToRight(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->jumpToRight();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#jumpToRight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_scrollToTopRight(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ScrollView* cobj = static_cast<cocos2d::ui::ScrollView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ScrollView.scrollToTopRight");
            if (!ok) { break; }
            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCUI::ScrollView.scrollToTopRight");
            if (!ok) { break; }
            cobj->scrollToTopRight(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#scrollToTopRight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::ScrollView* retval = cocos2d::ui::ScrollView::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::ScrollView>(mrb, "CCUI::ScrollView", (cocos2d::ui::ScrollView*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::ScrollView#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::ScrollView::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::ScrollView#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ScrollView_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::ScrollView* cobj = new cocos2d::ui::ScrollView();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ScrollView#ScrollView");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_ScrollView_EventType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::SCROLL_TO_TOP);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SCROLL_TO_TOP"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::SCROLL_TO_BOTTOM);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SCROLL_TO_BOTTOM"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::SCROLL_TO_LEFT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SCROLL_TO_LEFT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::SCROLL_TO_RIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SCROLL_TO_RIGHT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::SCROLLING);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SCROLLING"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::BOUNCE_TOP);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "BOUNCE_TOP"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::BOUNCE_BOTTOM);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "BOUNCE_BOTTOM"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::BOUNCE_LEFT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "BOUNCE_LEFT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::EventType::BOUNCE_RIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "BOUNCE_RIGHT"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_ScrollView_Direction_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::Direction::NONE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NONE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::Direction::VERTICAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "VERTICAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::Direction::HORIZONTAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "HORIZONTAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ScrollView::Direction::BOTH);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "BOTH"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_ScrollView(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::ScrollView).name();
    g_rubyType[typeName] = "CCUI::ScrollView";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Layout");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "ScrollView", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_ScrollView_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scroll_to_top", ruby_cocos2dx_ui_ScrollView_scrollToTop, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "scroll_to_percent_horizontal", ruby_cocos2dx_ui_ScrollView_scrollToPercentHorizontal, ARGS_REQ(3));
    mrb_define_method(mrb, rclass, "inertia_scroll_enabled?", ruby_cocos2dx_ui_ScrollView_isInertiaScrollEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scroll_to_percent_both_direction", ruby_cocos2dx_ui_ScrollView_scrollToPercentBothDirection, ARGS_REQ(3));
    mrb_define_method(mrb, rclass, "get_direction", ruby_cocos2dx_ui_ScrollView_getDirection, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scroll_to_bottom_left", ruby_cocos2dx_ui_ScrollView_scrollToBottomLeft, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "get_inner_container", ruby_cocos2dx_ui_ScrollView_getInnerContainer, ARGS_NONE());
    mrb_define_method(mrb, rclass, "jump_to_bottom", ruby_cocos2dx_ui_ScrollView_jumpToBottom, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_direction", ruby_cocos2dx_ui_ScrollView_setDirection, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "scroll_to_top_left", ruby_cocos2dx_ui_ScrollView_scrollToTopLeft, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "jump_to_top_right", ruby_cocos2dx_ui_ScrollView_jumpToTopRight, ARGS_NONE());
    mrb_define_method(mrb, rclass, "jump_to_bottom_left", ruby_cocos2dx_ui_ScrollView_jumpToBottomLeft, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_inner_container_size", ruby_cocos2dx_ui_ScrollView_setInnerContainerSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_inner_container_size", ruby_cocos2dx_ui_ScrollView_getInnerContainerSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "bounce_enabled?", ruby_cocos2dx_ui_ScrollView_isBounceEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "jump_to_percent_vertical", ruby_cocos2dx_ui_ScrollView_jumpToPercentVertical, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "add_event_listener", ruby_cocos2dx_ui_ScrollView_addEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_inertia_scroll_enabled", ruby_cocos2dx_ui_ScrollView_setInertiaScrollEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "jump_to_top_left", ruby_cocos2dx_ui_ScrollView_jumpToTopLeft, ARGS_NONE());
    mrb_define_method(mrb, rclass, "jump_to_percent_horizontal", ruby_cocos2dx_ui_ScrollView_jumpToPercentHorizontal, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "jump_to_bottom_right", ruby_cocos2dx_ui_ScrollView_jumpToBottomRight, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_bounce_enabled", ruby_cocos2dx_ui_ScrollView_setBounceEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "jump_to_top", ruby_cocos2dx_ui_ScrollView_jumpToTop, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scroll_to_left", ruby_cocos2dx_ui_ScrollView_scrollToLeft, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "jump_to_percent_both_direction", ruby_cocos2dx_ui_ScrollView_jumpToPercentBothDirection, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "scroll_to_percent_vertical", ruby_cocos2dx_ui_ScrollView_scrollToPercentVertical, ARGS_REQ(3));
    mrb_define_method(mrb, rclass, "scroll_to_bottom", ruby_cocos2dx_ui_ScrollView_scrollToBottom, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "scroll_to_bottom_right", ruby_cocos2dx_ui_ScrollView_scrollToBottomRight, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "jump_to_left", ruby_cocos2dx_ui_ScrollView_jumpToLeft, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scroll_to_right", ruby_cocos2dx_ui_ScrollView_scrollToRight, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "jump_to_right", ruby_cocos2dx_ui_ScrollView_jumpToRight, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scroll_to_top_right", ruby_cocos2dx_ui_ScrollView_scrollToTopRight, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_ScrollView_create_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_ScrollView_createInstance_static, ARGS_NONE());
    struct RClass* renum_EventType = mrb_define_module_under(mrb, rclass, "EventType");
    ruby_cocos2dx_ui_ScrollView_EventType_enum_init(mrb, renum_EventType);
    mrb_define_class_method(mrb, renum_EventType, "SCROLL_TO_TOP", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "SCROLL_TO_BOTTOM", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "SCROLL_TO_LEFT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "SCROLL_TO_RIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "SCROLLING", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "BOUNCE_TOP", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "BOUNCE_BOTTOM", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "BOUNCE_LEFT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "BOUNCE_RIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_Direction = mrb_define_module_under(mrb, rclass, "Direction");
    ruby_cocos2dx_ui_ScrollView_Direction_enum_init(mrb, renum_Direction);
    mrb_define_class_method(mrb, renum_Direction, "NONE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Direction, "VERTICAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Direction, "HORIZONTAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Direction, "BOTH", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_ListView_getIndex(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Widget* arg0;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[0], "CCUI::Widget", &arg0);
            if (!ok) { break; }
            ssize_t retval = cobj->getIndex(arg0);
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#getIndex");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_removeAllItems(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->removeAllItems();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#removeAllItems");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_setGravity(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::ListView::Gravity arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::ListView.setGravity");
            if (!ok) { break; }
            cobj->setGravity(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#setGravity");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_pushBackCustomItem(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Widget* arg0;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[0], "CCUI::Widget", &arg0);
            if (!ok) { break; }
            cobj->pushBackCustomItem(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#pushBackCustomItem");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_getItems(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vector<cocos2d::ui::Widget *> retval = cobj->getItems();
            mrb_value ret;
            ret = ccvector_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#getItems");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_removeItem(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            ssize_t arg0;
            ok = rubyval_to_ssize(mrb, argv[0], &arg0, "CCUI::ListView.removeItem");
            if (!ok) { break; }
            cobj->removeItem(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#removeItem");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_getCurSelectedIndex(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            ssize_t retval = cobj->getCurSelectedIndex();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#getCurSelectedIndex");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_insertDefaultItem(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            ssize_t arg0;
            ok = rubyval_to_ssize(mrb, argv[0], &arg0, "CCUI::ListView.insertDefaultItem");
            if (!ok) { break; }
            cobj->insertDefaultItem(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#insertDefaultItem");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_requestRefreshView(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->requestRefreshView();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#requestRefreshView");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_setItemsMargin(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::ListView.setItemsMargin");
            if (!ok) { break; }
            cobj->setItemsMargin(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#setItemsMargin");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_refreshView(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->refreshView();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#refreshView");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_removeLastItem(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->removeLastItem();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#removeLastItem");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_getItemsMargin(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getItemsMargin();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#getItemsMargin");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_addEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *, cocos2d::ui::ListView::EventType)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0, cocos2d::ui::ListView::EventType larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#addEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_getItem(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            ssize_t arg0;
            ok = rubyval_to_ssize(mrb, argv[0], &arg0, "CCUI::ListView.getItem");
            if (!ok) { break; }
            cocos2d::ui::Widget* retval = cobj->getItem(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#getItem");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_setItemModel(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Widget* arg0;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[0], "CCUI::Widget", &arg0);
            if (!ok) { break; }
            cobj->setItemModel(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#setItemModel");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_doLayout(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->doLayout();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#doLayout");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_pushBackDefaultItem(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->pushBackDefaultItem();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#pushBackDefaultItem");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_insertCustomItem(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::ListView* cobj = static_cast<cocos2d::ui::ListView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::ui::Widget* arg0;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[0], "CCUI::Widget", &arg0);
            if (!ok) { break; }
            ssize_t arg1;
            ok = rubyval_to_ssize(mrb, argv[1], &arg1, "CCUI::ListView.insertCustomItem");
            if (!ok) { break; }
            cobj->insertCustomItem(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#insertCustomItem");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::ListView* retval = cocos2d::ui::ListView::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::ListView>(mrb, "CCUI::ListView", (cocos2d::ui::ListView*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::ListView#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::ListView::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::ListView#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_ListView_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::ListView* cobj = new cocos2d::ui::ListView();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::ListView#ListView");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_ListView_EventType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ListView::EventType::ON_SELECTED_ITEM_START);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ON_SELECTED_ITEM_START"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ListView::EventType::ON_SELECTED_ITEM_END);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ON_SELECTED_ITEM_END"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_ListView_Gravity_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ListView::Gravity::LEFT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LEFT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ListView::Gravity::RIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "RIGHT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ListView::Gravity::CENTER_HORIZONTAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "CENTER_HORIZONTAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ListView::Gravity::TOP);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "TOP"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ListView::Gravity::BOTTOM);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "BOTTOM"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::ListView::Gravity::CENTER_VERTICAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "CENTER_VERTICAL"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_ListView(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::ListView).name();
    g_rubyType[typeName] = "CCUI::ListView";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "ScrollView");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "ListView", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_ListView_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_index", ruby_cocos2dx_ui_ListView_getIndex, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "remove_all_items", ruby_cocos2dx_ui_ListView_removeAllItems, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_gravity", ruby_cocos2dx_ui_ListView_setGravity, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "push_back_custom_item", ruby_cocos2dx_ui_ListView_pushBackCustomItem, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_items", ruby_cocos2dx_ui_ListView_getItems, ARGS_NONE());
    mrb_define_method(mrb, rclass, "remove_item", ruby_cocos2dx_ui_ListView_removeItem, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_cur_selected_index", ruby_cocos2dx_ui_ListView_getCurSelectedIndex, ARGS_NONE());
    mrb_define_method(mrb, rclass, "insert_default_item", ruby_cocos2dx_ui_ListView_insertDefaultItem, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "request_refresh_view", ruby_cocos2dx_ui_ListView_requestRefreshView, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_items_margin", ruby_cocos2dx_ui_ListView_setItemsMargin, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "refresh_view", ruby_cocos2dx_ui_ListView_refreshView, ARGS_NONE());
    mrb_define_method(mrb, rclass, "remove_last_item", ruby_cocos2dx_ui_ListView_removeLastItem, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_items_margin", ruby_cocos2dx_ui_ListView_getItemsMargin, ARGS_NONE());
    mrb_define_method(mrb, rclass, "add_event_listener", ruby_cocos2dx_ui_ListView_addEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_item", ruby_cocos2dx_ui_ListView_getItem, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_item_model", ruby_cocos2dx_ui_ListView_setItemModel, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "do_layout", ruby_cocos2dx_ui_ListView_doLayout, ARGS_NONE());
    mrb_define_method(mrb, rclass, "push_back_default_item", ruby_cocos2dx_ui_ListView_pushBackDefaultItem, ARGS_NONE());
    mrb_define_method(mrb, rclass, "insert_custom_item", ruby_cocos2dx_ui_ListView_insertCustomItem, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_ListView_create_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_ListView_createInstance_static, ARGS_NONE());
    struct RClass* renum_EventType = mrb_define_module_under(mrb, rclass, "EventType");
    ruby_cocos2dx_ui_ListView_EventType_enum_init(mrb, renum_EventType);
    mrb_define_class_method(mrb, renum_EventType, "ON_SELECTED_ITEM_START", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "ON_SELECTED_ITEM_END", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_Gravity = mrb_define_module_under(mrb, rclass, "Gravity");
    ruby_cocos2dx_ui_ListView_Gravity_enum_init(mrb, renum_Gravity);
    mrb_define_class_method(mrb, renum_Gravity, "LEFT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Gravity, "RIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Gravity, "CENTER_HORIZONTAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Gravity, "TOP", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Gravity, "BOTTOM", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Gravity, "CENTER_VERTICAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_Slider_setPercent(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Slider.setPercent");
            if (!ok) { break; }
            cobj->setPercent(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#setPercent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_loadSlidBallTextureDisabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTextureDisabled");
            if (!ok) { break; }
            cobj->loadSlidBallTextureDisabled(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTextureDisabled");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Slider.loadSlidBallTextureDisabled");
            if (!ok) { break; }
            cobj->loadSlidBallTextureDisabled(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#loadSlidBallTextureDisabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_loadSlidBallTextureNormal(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTextureNormal");
            if (!ok) { break; }
            cobj->loadSlidBallTextureNormal(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTextureNormal");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Slider.loadSlidBallTextureNormal");
            if (!ok) { break; }
            cobj->loadSlidBallTextureNormal(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#loadSlidBallTextureNormal");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_loadBarTexture(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadBarTexture");
            if (!ok) { break; }
            cobj->loadBarTexture(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadBarTexture");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Slider.loadBarTexture");
            if (!ok) { break; }
            cobj->loadBarTexture(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#loadBarTexture");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_loadProgressBarTexture(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadProgressBarTexture");
            if (!ok) { break; }
            cobj->loadProgressBarTexture(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadProgressBarTexture");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Slider.loadProgressBarTexture");
            if (!ok) { break; }
            cobj->loadProgressBarTexture(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#loadProgressBarTexture");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_loadSlidBallTextures(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            cobj->loadSlidBallTextures(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            cobj->loadSlidBallTextures(arg0, arg1);
            return self;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            cobj->loadSlidBallTextures(arg0, arg1, arg2);
            return self;
        }
    } while (0);
    do {
        if (argc == 4) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            std::string arg2;
            ok = rubyval_to_std_string(mrb, argv[2], &arg2, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg3;
            ok = rubyval_to_int32(mrb, argv[3], (int*)&arg3, "CCUI::Slider.loadSlidBallTextures");
            if (!ok) { break; }
            cobj->loadSlidBallTextures(arg0, arg1, arg2, arg3);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#loadSlidBallTextures");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_setCapInsetProgressBarRebderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsetProgressBarRebderer(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#setCapInsetProgressBarRebderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_setCapInsetsBarRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsetsBarRenderer(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#setCapInsetsBarRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_getCapInsetsProgressBarRebderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getCapInsetsProgressBarRebderer();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#getCapInsetsProgressBarRebderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_setScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Slider.setScale9Enabled");
            if (!ok) { break; }
            cobj->setScale9Enabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#setScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_setZoomScale(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::Slider.setZoomScale");
            if (!ok) { break; }
            cobj->setZoomScale(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#setZoomScale");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_setCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsets(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#setCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_getZoomScale(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getZoomScale();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#getZoomScale");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_addEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *, cocos2d::ui::Slider::EventType)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0, cocos2d::ui::Slider::EventType larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#addEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_loadSlidBallTexturePressed(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTexturePressed");
            if (!ok) { break; }
            cobj->loadSlidBallTexturePressed(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.loadSlidBallTexturePressed");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Slider.loadSlidBallTexturePressed");
            if (!ok) { break; }
            cobj->loadSlidBallTexturePressed(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#loadSlidBallTexturePressed");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_isScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isScale9Enabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#isScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_getCapInsetsBarRenderer(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getCapInsetsBarRenderer();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#getCapInsetsBarRenderer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_getPercent(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Slider* cobj = static_cast<cocos2d::ui::Slider*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getPercent();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#getPercent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Slider.create");
            if (!ok) { break; }

            cocos2d::ui::Slider* retval = cocos2d::ui::Slider::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Slider>(mrb, "CCUI::Slider", (cocos2d::ui::Slider*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Slider.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Slider.create");
            if (!ok) { break; }

            cocos2d::ui::Widget::TextureResType arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::Slider.create");
            if (!ok) { break; }

            cocos2d::ui::Slider* retval = cocos2d::ui::Slider::create(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Slider>(mrb, "CCUI::Slider", (cocos2d::ui::Slider*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::Slider* retval = cocos2d::ui::Slider::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Slider>(mrb, "CCUI::Slider", (cocos2d::ui::Slider*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Slider#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::Slider::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Slider#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Slider_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Slider* cobj = new cocos2d::ui::Slider();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Slider#Slider");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_Slider_EventType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Slider::EventType::ON_PERCENTAGE_CHANGED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ON_PERCENTAGE_CHANGED"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_Slider(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::Slider).name();
    g_rubyType[typeName] = "CCUI::Slider";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Slider", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_Slider_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_percent", ruby_cocos2dx_ui_Slider_setPercent, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "load_slid_ball_texture_disabled", ruby_cocos2dx_ui_Slider_loadSlidBallTextureDisabled, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "load_slid_ball_texture_normal", ruby_cocos2dx_ui_Slider_loadSlidBallTextureNormal, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "load_bar_texture", ruby_cocos2dx_ui_Slider_loadBarTexture, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "load_progress_bar_texture", ruby_cocos2dx_ui_Slider_loadProgressBarTexture, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "load_slid_ball_textures", ruby_cocos2dx_ui_Slider_loadSlidBallTextures, ARGS_REQ(4));
    mrb_define_method(mrb, rclass, "set_cap_inset_progress_bar_rebderer", ruby_cocos2dx_ui_Slider_setCapInsetProgressBarRebderer, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_cap_insets_bar_renderer", ruby_cocos2dx_ui_Slider_setCapInsetsBarRenderer, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_cap_insets_progress_bar_rebderer", ruby_cocos2dx_ui_Slider_getCapInsetsProgressBarRebderer, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_scale9_enabled", ruby_cocos2dx_ui_Slider_setScale9Enabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_zoom_scale", ruby_cocos2dx_ui_Slider_setZoomScale, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_cap_insets", ruby_cocos2dx_ui_Slider_setCapInsets, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_zoom_scale", ruby_cocos2dx_ui_Slider_getZoomScale, ARGS_NONE());
    mrb_define_method(mrb, rclass, "add_event_listener", ruby_cocos2dx_ui_Slider_addEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "load_slid_ball_texture_pressed", ruby_cocos2dx_ui_Slider_loadSlidBallTexturePressed, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "scale9_enabled?", ruby_cocos2dx_ui_Slider_isScale9Enabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_cap_insets_bar_renderer", ruby_cocos2dx_ui_Slider_getCapInsetsBarRenderer, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_percent", ruby_cocos2dx_ui_Slider_getPercent, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_Slider_create_static, ARGS_REQ(0)|ARGS_OPT(3));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_Slider_createInstance_static, ARGS_NONE());
    struct RClass* renum_EventType = mrb_define_module_under(mrb, rclass, "EventType");
    ruby_cocos2dx_ui_Slider_EventType_enum_init(mrb, renum_EventType);
    mrb_define_class_method(mrb, renum_EventType, "ON_PERCENTAGE_CHANGED", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_TextField_setAttachWithIME(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::TextField.setAttachWithIME");
            if (!ok) { break; }
            cobj->setAttachWithIME(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setAttachWithIME");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getFontSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getFontSize();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getFontSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getString(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getString();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getString");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setPasswordStyleText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok = rubyval_to_std_string(mrb, argv[0], &arg0_tmp, "CCUI::TextField:setPasswordStyleText"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cobj->setPasswordStyleText(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setPasswordStyleText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getDeleteBackward(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->getDeleteBackward();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getDeleteBackward");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getPlaceHolder(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getPlaceHolder();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getPlaceHolder");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getAttachWithIME(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->getAttachWithIME();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getAttachWithIME");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setFontName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextField.setFontName");
            if (!ok) { break; }
            cobj->setFontName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setFontName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getInsertText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->getInsertText();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getInsertText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setInsertText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::TextField.setInsertText");
            if (!ok) { break; }
            cobj->setInsertText(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setInsertText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setString(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextField.setString");
            if (!ok) { break; }
            cobj->setString(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setString");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getDetachWithIME(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->getDetachWithIME();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getDetachWithIME");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setTextVerticalAlignment(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::TextVAlignment arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::TextField.setTextVerticalAlignment");
            if (!ok) { break; }
            cobj->setTextVerticalAlignment(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setTextVerticalAlignment");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_addEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *, cocos2d::ui::TextField::EventType)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0, cocos2d::ui::TextField::EventType larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#addEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_didNotSelectSelf(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->didNotSelectSelf();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#didNotSelectSelf");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getFontName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getFontName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getFontName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setTextAreaSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setTextAreaSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setTextAreaSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_attachWithIME(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->attachWithIME();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#attachWithIME");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getStringLength(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getStringLength();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getStringLength");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getAutoRenderSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getAutoRenderSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getAutoRenderSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setPasswordEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::TextField.setPasswordEnabled");
            if (!ok) { break; }
            cobj->setPasswordEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setPasswordEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getPlaceHolderColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Color4B retval = cobj->getPlaceHolderColor();
            cocos2d::Color4B* retval_ptr = new cocos2d::Color4B(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Color4B>(mrb, "CC::Color4B", (cocos2d::Color4B*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getPlaceHolderColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getPasswordStyleText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            const char* retval = cobj->getPasswordStyleText();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, (const char*)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getPasswordStyleText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setMaxLengthEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::TextField.setMaxLengthEnabled");
            if (!ok) { break; }
            cobj->setMaxLengthEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setMaxLengthEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_isPasswordEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isPasswordEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#isPasswordEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setDeleteBackward(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::TextField.setDeleteBackward");
            if (!ok) { break; }
            cobj->setDeleteBackward(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setDeleteBackward");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setFontSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::TextField.setFontSize");
            if (!ok) { break; }
            cobj->setFontSize(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setFontSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setPlaceHolder(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextField.setPlaceHolder");
            if (!ok) { break; }
            cobj->setPlaceHolder(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setPlaceHolder");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setPlaceHolderColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            cobj->setPlaceHolderColor(*arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 1) {
            cocos2d::Color3B* arg0;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[0], "CC::Color3B", &arg0);
            if (!ok) { break; }
            cobj->setPlaceHolderColor(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setPlaceHolderColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setTextHorizontalAlignment(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::TextHAlignment arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::TextField.setTextHorizontalAlignment");
            if (!ok) { break; }
            cobj->setTextHorizontalAlignment(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setTextHorizontalAlignment");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setTextColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color4B* arg0;
            ok = rubyval_to_object<cocos2d::Color4B>(mrb, argv[0], "CC::Color4B", &arg0);
            if (!ok) { break; }
            cobj->setTextColor(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setTextColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getMaxLength(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getMaxLength();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getMaxLength");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_isMaxLengthEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isMaxLengthEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#isMaxLengthEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setDetachWithIME(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::TextField.setDetachWithIME");
            if (!ok) { break; }
            cobj->setDetachWithIME(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setDetachWithIME");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setTouchAreaEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::TextField.setTouchAreaEnabled");
            if (!ok) { break; }
            cobj->setTouchAreaEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setTouchAreaEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_hitTest(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            bool retval = cobj->hitTest(*arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#hitTest");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setMaxLength(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::TextField.setMaxLength");
            if (!ok) { break; }
            cobj->setMaxLength(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setMaxLength");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_setTouchSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setTouchSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#setTouchSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_getTouchSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextField* cobj = static_cast<cocos2d::ui::TextField*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getTouchSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#getTouchSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextField.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::TextField.create");
            if (!ok) { break; }

            int arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::TextField.create");
            if (!ok) { break; }

            cocos2d::ui::TextField* retval = cocos2d::ui::TextField::create(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::TextField>(mrb, "CCUI::TextField", (cocos2d::ui::TextField*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::TextField* retval = cocos2d::ui::TextField::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::TextField>(mrb, "CCUI::TextField", (cocos2d::ui::TextField*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::TextField#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::TextField::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::TextField#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextField_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::TextField* cobj = new cocos2d::ui::TextField();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextField#TextField");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_TextField_EventType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::TextField::EventType::ATTACH_WITH_IME);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ATTACH_WITH_IME"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::TextField::EventType::DETACH_WITH_IME);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "DETACH_WITH_IME"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::TextField::EventType::INSERT_TEXT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "INSERT_TEXT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::TextField::EventType::DELETE_BACKWARD);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "DELETE_BACKWARD"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_TextField(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::TextField).name();
    g_rubyType[typeName] = "CCUI::TextField";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "TextField", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_TextField_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_attach_with_ime", ruby_cocos2dx_ui_TextField_setAttachWithIME, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_font_size", ruby_cocos2dx_ui_TextField_getFontSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_string", ruby_cocos2dx_ui_TextField_getString, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_password_style_text", ruby_cocos2dx_ui_TextField_setPasswordStyleText, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_delete_backward", ruby_cocos2dx_ui_TextField_getDeleteBackward, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_place_holder", ruby_cocos2dx_ui_TextField_getPlaceHolder, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_attach_with_ime", ruby_cocos2dx_ui_TextField_getAttachWithIME, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_font_name", ruby_cocos2dx_ui_TextField_setFontName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_insert_text", ruby_cocos2dx_ui_TextField_getInsertText, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_insert_text", ruby_cocos2dx_ui_TextField_setInsertText, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_string", ruby_cocos2dx_ui_TextField_setString, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_detach_with_ime", ruby_cocos2dx_ui_TextField_getDetachWithIME, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_text_vertical_alignment", ruby_cocos2dx_ui_TextField_setTextVerticalAlignment, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "add_event_listener", ruby_cocos2dx_ui_TextField_addEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "did_not_select_self", ruby_cocos2dx_ui_TextField_didNotSelectSelf, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_font_name", ruby_cocos2dx_ui_TextField_getFontName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_text_area_size", ruby_cocos2dx_ui_TextField_setTextAreaSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "attach_with_ime", ruby_cocos2dx_ui_TextField_attachWithIME, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_string_length", ruby_cocos2dx_ui_TextField_getStringLength, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_auto_render_size", ruby_cocos2dx_ui_TextField_getAutoRenderSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_password_enabled", ruby_cocos2dx_ui_TextField_setPasswordEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_place_holder_color", ruby_cocos2dx_ui_TextField_getPlaceHolderColor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_password_style_text", ruby_cocos2dx_ui_TextField_getPasswordStyleText, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_max_length_enabled", ruby_cocos2dx_ui_TextField_setMaxLengthEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "password_enabled?", ruby_cocos2dx_ui_TextField_isPasswordEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_delete_backward", ruby_cocos2dx_ui_TextField_setDeleteBackward, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_font_size", ruby_cocos2dx_ui_TextField_setFontSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_place_holder", ruby_cocos2dx_ui_TextField_setPlaceHolder, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_place_holder_color", ruby_cocos2dx_ui_TextField_setPlaceHolderColor, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_text_horizontal_alignment", ruby_cocos2dx_ui_TextField_setTextHorizontalAlignment, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_text_color", ruby_cocos2dx_ui_TextField_setTextColor, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_max_length", ruby_cocos2dx_ui_TextField_getMaxLength, ARGS_NONE());
    mrb_define_method(mrb, rclass, "max_length_enabled?", ruby_cocos2dx_ui_TextField_isMaxLengthEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_detach_with_ime", ruby_cocos2dx_ui_TextField_setDetachWithIME, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_touch_area_enabled", ruby_cocos2dx_ui_TextField_setTouchAreaEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "hit_test", ruby_cocos2dx_ui_TextField_hitTest, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_max_length", ruby_cocos2dx_ui_TextField_setMaxLength, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_touch_size", ruby_cocos2dx_ui_TextField_setTouchSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_touch_size", ruby_cocos2dx_ui_TextField_getTouchSize, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_TextField_create_static, ARGS_REQ(0)|ARGS_OPT(3));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_TextField_createInstance_static, ARGS_NONE());
    struct RClass* renum_EventType = mrb_define_module_under(mrb, rclass, "EventType");
    ruby_cocos2dx_ui_TextField_EventType_enum_init(mrb, renum_EventType);
    mrb_define_class_method(mrb, renum_EventType, "ATTACH_WITH_IME", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "DETACH_WITH_IME", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "INSERT_TEXT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "DELETE_BACKWARD", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_TextBMFont_setFntFile(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextBMFont* cobj = static_cast<cocos2d::ui::TextBMFont*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextBMFont.setFntFile");
            if (!ok) { break; }
            cobj->setFntFile(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextBMFont#setFntFile");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextBMFont_getStringLength(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextBMFont* cobj = static_cast<cocos2d::ui::TextBMFont*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            ssize_t retval = cobj->getStringLength();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextBMFont#getStringLength");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextBMFont_setString(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextBMFont* cobj = static_cast<cocos2d::ui::TextBMFont*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextBMFont.setString");
            if (!ok) { break; }
            cobj->setString(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextBMFont#setString");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextBMFont_getString(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::TextBMFont* cobj = static_cast<cocos2d::ui::TextBMFont*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getString();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextBMFont#getString");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextBMFont_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::TextBMFont.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::TextBMFont.create");
            if (!ok) { break; }

            cocos2d::ui::TextBMFont* retval = cocos2d::ui::TextBMFont::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::TextBMFont>(mrb, "CCUI::TextBMFont", (cocos2d::ui::TextBMFont*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::TextBMFont* retval = cocos2d::ui::TextBMFont::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::TextBMFont>(mrb, "CCUI::TextBMFont", (cocos2d::ui::TextBMFont*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::TextBMFont#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextBMFont_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::TextBMFont::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::TextBMFont#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_TextBMFont_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::TextBMFont* cobj = new cocos2d::ui::TextBMFont();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::TextBMFont#TextBMFont");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_TextBMFont(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::TextBMFont).name();
    g_rubyType[typeName] = "CCUI::TextBMFont";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "TextBMFont", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_TextBMFont_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_fnt_file", ruby_cocos2dx_ui_TextBMFont_setFntFile, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_string_length", ruby_cocos2dx_ui_TextBMFont_getStringLength, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_string", ruby_cocos2dx_ui_TextBMFont_setString, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_string", ruby_cocos2dx_ui_TextBMFont_getString, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_TextBMFont_create_static, ARGS_REQ(0)|ARGS_OPT(2));
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_TextBMFont_createInstance_static, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_PageView_getCustomScrollThreshold(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getCustomScrollThreshold();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#getCustomScrollThreshold");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_getCurPageIndex(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            ssize_t retval = cobj->getCurPageIndex();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#getCurPageIndex");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_addWidgetToPage(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            cocos2d::ui::Widget* arg0;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[0], "CCUI::Widget", &arg0);
            if (!ok) { break; }
            ssize_t arg1;
            ok = rubyval_to_ssize(mrb, argv[1], &arg1, "CCUI::PageView.addWidgetToPage");
            if (!ok) { break; }
            bool arg2;
            ok = rubyval_to_boolean(mrb, argv[2], &arg2, "CCUI::PageView.addWidgetToPage");
            if (!ok) { break; }
            cobj->addWidgetToPage(arg0, arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#addWidgetToPage");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_isUsingCustomScrollThreshold(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isUsingCustomScrollThreshold();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#isUsingCustomScrollThreshold");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_getPage(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            ssize_t arg0;
            ok = rubyval_to_ssize(mrb, argv[0], &arg0, "CCUI::PageView.getPage");
            if (!ok) { break; }
            cocos2d::ui::Layout* retval = cobj->getPage(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Layout>(mrb, "CCUI::Layout", (cocos2d::ui::Layout*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#getPage");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_removePage(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Layout* arg0;
            ok = rubyval_to_object<cocos2d::ui::Layout>(mrb, argv[0], "CCUI::Layout", &arg0);
            if (!ok) { break; }
            cobj->removePage(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#removePage");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_addEventListener(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (cocos2d::Ref *, cocos2d::ui::PageView::EventType)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](cocos2d::Ref* larg0, cocos2d::ui::PageView::EventType larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "addEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->addEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#addEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_setUsingCustomScrollThreshold(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::PageView.setUsingCustomScrollThreshold");
            if (!ok) { break; }
            cobj->setUsingCustomScrollThreshold(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#setUsingCustomScrollThreshold");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_setCustomScrollThreshold(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::PageView.setCustomScrollThreshold");
            if (!ok) { break; }
            cobj->setCustomScrollThreshold(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#setCustomScrollThreshold");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_insertPage(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::ui::Layout* arg0;
            ok = rubyval_to_object<cocos2d::ui::Layout>(mrb, argv[0], "CCUI::Layout", &arg0);
            if (!ok) { break; }
            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::PageView.insertPage");
            if (!ok) { break; }
            cobj->insertPage(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#insertPage");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_scrollToPage(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            ssize_t arg0;
            ok = rubyval_to_ssize(mrb, argv[0], &arg0, "CCUI::PageView.scrollToPage");
            if (!ok) { break; }
            cobj->scrollToPage(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#scrollToPage");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_removePageAtIndex(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            ssize_t arg0;
            ok = rubyval_to_ssize(mrb, argv[0], &arg0, "CCUI::PageView.removePageAtIndex");
            if (!ok) { break; }
            cobj->removePageAtIndex(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#removePageAtIndex");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_getPages(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vector<cocos2d::ui::Layout *> retval = cobj->getPages();
            mrb_value ret;
            ret = ccvector_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#getPages");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_removeAllPages(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->removeAllPages();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#removeAllPages");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_addPage(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::PageView* cobj = static_cast<cocos2d::ui::PageView*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Layout* arg0;
            ok = rubyval_to_object<cocos2d::ui::Layout>(mrb, argv[0], "CCUI::Layout", &arg0);
            if (!ok) { break; }
            cobj->addPage(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#addPage");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::PageView* retval = cocos2d::ui::PageView::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::PageView>(mrb, "CCUI::PageView", (cocos2d::ui::PageView*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::PageView#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_createInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Ref* retval = cocos2d::ui::PageView::createInstance();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Ref>(mrb, "CC::Ref", (cocos2d::Ref*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::PageView#createInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_PageView_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::PageView* cobj = new cocos2d::ui::PageView();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::PageView#PageView");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_PageView_EventType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::PageView::EventType::TURNING);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "TURNING"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_PageView_TouchDirection_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::PageView::TouchDirection::LEFT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "LEFT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::PageView::TouchDirection::RIGHT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "RIGHT"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_PageView(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::PageView).name();
    g_rubyType[typeName] = "CCUI::PageView";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Layout");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "PageView", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_PageView_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_custom_scroll_threshold", ruby_cocos2dx_ui_PageView_getCustomScrollThreshold, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_cur_page_index", ruby_cocos2dx_ui_PageView_getCurPageIndex, ARGS_NONE());
    mrb_define_method(mrb, rclass, "add_widget_to_page", ruby_cocos2dx_ui_PageView_addWidgetToPage, ARGS_REQ(3));
    mrb_define_method(mrb, rclass, "using_custom_scroll_threshold?", ruby_cocos2dx_ui_PageView_isUsingCustomScrollThreshold, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_page", ruby_cocos2dx_ui_PageView_getPage, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "remove_page", ruby_cocos2dx_ui_PageView_removePage, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "add_event_listener", ruby_cocos2dx_ui_PageView_addEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_using_custom_scroll_threshold", ruby_cocos2dx_ui_PageView_setUsingCustomScrollThreshold, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_custom_scroll_threshold", ruby_cocos2dx_ui_PageView_setCustomScrollThreshold, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "insert_page", ruby_cocos2dx_ui_PageView_insertPage, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "scroll_to_page", ruby_cocos2dx_ui_PageView_scrollToPage, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "remove_page_at_index", ruby_cocos2dx_ui_PageView_removePageAtIndex, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_pages", ruby_cocos2dx_ui_PageView_getPages, ARGS_NONE());
    mrb_define_method(mrb, rclass, "remove_all_pages", ruby_cocos2dx_ui_PageView_removeAllPages, ARGS_NONE());
    mrb_define_method(mrb, rclass, "add_page", ruby_cocos2dx_ui_PageView_addPage, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_PageView_create_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create_instance", ruby_cocos2dx_ui_PageView_createInstance_static, ARGS_NONE());
    struct RClass* renum_EventType = mrb_define_module_under(mrb, rclass, "EventType");
    ruby_cocos2dx_ui_PageView_EventType_enum_init(mrb, renum_EventType);
    mrb_define_class_method(mrb, renum_EventType, "TURNING", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_TouchDirection = mrb_define_module_under(mrb, rclass, "TouchDirection");
    ruby_cocos2dx_ui_PageView_TouchDirection_enum_init(mrb, renum_TouchDirection);
    mrb_define_class_method(mrb, renum_TouchDirection, "LEFT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_TouchDirection, "RIGHT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_Helper_getSubStringOfUTF8String_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Helper.getSubStringOfUTF8String");
            if (!ok) { break; }

            unsigned long arg1;
            ok = rubyval_to_ulong(mrb, argv[1], &arg1, "CCUI::Helper.getSubStringOfUTF8String");
            if (!ok) { break; }

            unsigned long arg2;
            ok = rubyval_to_ulong(mrb, argv[2], &arg2, "CCUI::Helper.getSubStringOfUTF8String");
            if (!ok) { break; }

            std::string retval = cocos2d::ui::Helper::getSubStringOfUTF8String(arg0, arg1, arg2);
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Helper#getSubStringOfUTF8String");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Helper_changeLayoutSystemActiveState_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Helper.changeLayoutSystemActiveState");
            if (!ok) { break; }

            cocos2d::ui::Helper::changeLayoutSystemActiveState(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Helper#changeLayoutSystemActiveState");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Helper_seekActionWidgetByActionTag_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::ui::Widget* arg0;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[0], "CCUI::Widget", &arg0);
            if (!ok) { break; }

            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Helper.seekActionWidgetByActionTag");
            if (!ok) { break; }

            cocos2d::ui::Widget* retval = cocos2d::ui::Helper::seekActionWidgetByActionTag(arg0, arg1);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Helper#seekActionWidgetByActionTag");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Helper_seekWidgetByName_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::ui::Widget* arg0;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[0], "CCUI::Widget", &arg0);
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Helper.seekWidgetByName");
            if (!ok) { break; }

            cocos2d::ui::Widget* retval = cocos2d::ui::Helper::seekWidgetByName(arg0, arg1);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Helper#seekWidgetByName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Helper_seekWidgetByTag_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::ui::Widget* arg0;
            ok = rubyval_to_object<cocos2d::ui::Widget>(mrb, argv[0], "CCUI::Widget", &arg0);
            if (!ok) { break; }

            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::Helper.seekWidgetByTag");
            if (!ok) { break; }

            cocos2d::ui::Widget* retval = cocos2d::ui::Helper::seekWidgetByTag(arg0, arg1);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Widget>(mrb, "CCUI::Widget", (cocos2d::ui::Widget*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Helper#seekWidgetByTag");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Helper_restrictCapInsetRect_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }

            cocos2d::Size* arg1;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[1], "CC::Size", &arg1);
            if (!ok) { break; }

            cocos2d::Rect retval = cocos2d::ui::Helper::restrictCapInsetRect(*arg0, *arg1);
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Helper#restrictCapInsetRect");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Helper_doLayout_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Node* arg0;
            ok = rubyval_to_object<cocos2d::Node>(mrb, argv[0], "CC::Node", &arg0);
            if (!ok) { break; }

            cocos2d::ui::Helper::doLayout(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Helper#doLayout");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_ui_Helper(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::Helper).name();
    g_rubyType[typeName] = "CCUI::Helper";
    g_rubyDataType[typeName] = &ruby_cocos2dx_ui_Helper_type;

    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Helper", mrb->object_class);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_class_method(mrb, rclass, "get_sub_string_of_utf8_string", ruby_cocos2dx_ui_Helper_getSubStringOfUTF8String_static, ARGS_REQ(3));
    mrb_define_class_method(mrb, rclass, "change_layout_system_active_state", ruby_cocos2dx_ui_Helper_changeLayoutSystemActiveState_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "seek_action_widget_by_action_tag", ruby_cocos2dx_ui_Helper_seekActionWidgetByActionTag_static, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "seek_widget_by_name", ruby_cocos2dx_ui_Helper_seekWidgetByName_static, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "seek_widget_by_tag", ruby_cocos2dx_ui_Helper_seekWidgetByTag_static, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "restrict_cap_inset_rect", ruby_cocos2dx_ui_Helper_restrictCapInsetRect_static, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "do_layout", ruby_cocos2dx_ui_Helper_doLayout_static, ARGS_REQ(1));
}
mrb_value ruby_cocos2dx_ui_RichElement_init(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichElement* cobj = static_cast<cocos2d::ui::RichElement*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RichElement.init");
            if (!ok) { break; }
            cocos2d::Color3B* arg1;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[1], "CC::Color3B", &arg1);
            if (!ok) { break; }
            uint16_t arg2;
            ok = rubyval_to_uint16(mrb, argv[2], &arg2, "CCUI::RichElement.init");
            if (!ok) { break; }
            bool retval = cobj->init(arg0, *arg1, arg2);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichElement#init");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichElement_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::RichElement* cobj = new cocos2d::ui::RichElement();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichElement#RichElement");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_RichElement_Type_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RichElement::Type::TEXT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "TEXT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RichElement::Type::IMAGE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "IMAGE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::RichElement::Type::CUSTOM);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "CUSTOM"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_RichElement(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::RichElement).name();
    g_rubyType[typeName] = "CCUI::RichElement";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Ref");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "RichElement", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_RichElement_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "init", ruby_cocos2dx_ui_RichElement_init, ARGS_REQ(3));
    struct RClass* renum_Type = mrb_define_module_under(mrb, rclass, "Type");
    ruby_cocos2dx_ui_RichElement_Type_enum_init(mrb, renum_Type);
    mrb_define_class_method(mrb, renum_Type, "TEXT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Type, "IMAGE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Type, "CUSTOM", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_RichElementText_init(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichElementText* cobj = static_cast<cocos2d::ui::RichElementText*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 6) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RichElementText.init");
            if (!ok) { break; }
            cocos2d::Color3B* arg1;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[1], "CC::Color3B", &arg1);
            if (!ok) { break; }
            uint16_t arg2;
            ok = rubyval_to_uint16(mrb, argv[2], &arg2, "CCUI::RichElementText.init");
            if (!ok) { break; }
            std::string arg3;
            ok = rubyval_to_std_string(mrb, argv[3], &arg3, "CCUI::RichElementText.init");
            if (!ok) { break; }
            std::string arg4;
            ok = rubyval_to_std_string(mrb, argv[4], &arg4, "CCUI::RichElementText.init");
            if (!ok) { break; }
            double arg5;
            ok = rubyval_to_number(mrb, argv[5], (double*)&arg5, "CCUI::RichElementText.init");
            if (!ok) { break; }
            bool retval = cobj->init(arg0, *arg1, arg2, arg3, arg4, arg5);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichElementText#init");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichElementText_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 6) {
            std::map<std::string, mrb_value> callbacks;
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RichElementText.create");
            if (!ok) { break; }

            cocos2d::Color3B* arg1;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[1], "CC::Color3B", &arg1);
            if (!ok) { break; }

            uint16_t arg2;
            ok = rubyval_to_uint16(mrb, argv[2], &arg2, "CCUI::RichElementText.create");
            if (!ok) { break; }

            std::string arg3;
            ok = rubyval_to_std_string(mrb, argv[3], &arg3, "CCUI::RichElementText.create");
            if (!ok) { break; }

            std::string arg4;
            ok = rubyval_to_std_string(mrb, argv[4], &arg4, "CCUI::RichElementText.create");
            if (!ok) { break; }

            double arg5;
            ok = rubyval_to_number(mrb, argv[5], (double*)&arg5, "CCUI::RichElementText.create");
            if (!ok) { break; }

            cocos2d::ui::RichElementText* retval = cocos2d::ui::RichElementText::create(arg0, *arg1, arg2, arg3, arg4, arg5);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::RichElementText>(mrb, "CCUI::RichElementText", (cocos2d::ui::RichElementText*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::RichElementText#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichElementText_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::RichElementText* cobj = new cocos2d::ui::RichElementText();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichElementText#RichElementText");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_RichElementText(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::RichElementText).name();
    g_rubyType[typeName] = "CCUI::RichElementText";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "RichElement");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "RichElementText", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_RichElementText_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "init", ruby_cocos2dx_ui_RichElementText_init, ARGS_REQ(6));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_RichElementText_create_static, ARGS_REQ(6));
}
mrb_value ruby_cocos2dx_ui_RichElementImage_init(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichElementImage* cobj = static_cast<cocos2d::ui::RichElementImage*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 4) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RichElementImage.init");
            if (!ok) { break; }
            cocos2d::Color3B* arg1;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[1], "CC::Color3B", &arg1);
            if (!ok) { break; }
            uint16_t arg2;
            ok = rubyval_to_uint16(mrb, argv[2], &arg2, "CCUI::RichElementImage.init");
            if (!ok) { break; }
            std::string arg3;
            ok = rubyval_to_std_string(mrb, argv[3], &arg3, "CCUI::RichElementImage.init");
            if (!ok) { break; }
            bool retval = cobj->init(arg0, *arg1, arg2, arg3);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichElementImage#init");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichElementImage_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 4) {
            std::map<std::string, mrb_value> callbacks;
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RichElementImage.create");
            if (!ok) { break; }

            cocos2d::Color3B* arg1;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[1], "CC::Color3B", &arg1);
            if (!ok) { break; }

            uint16_t arg2;
            ok = rubyval_to_uint16(mrb, argv[2], &arg2, "CCUI::RichElementImage.create");
            if (!ok) { break; }

            std::string arg3;
            ok = rubyval_to_std_string(mrb, argv[3], &arg3, "CCUI::RichElementImage.create");
            if (!ok) { break; }

            cocos2d::ui::RichElementImage* retval = cocos2d::ui::RichElementImage::create(arg0, *arg1, arg2, arg3);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::RichElementImage>(mrb, "CCUI::RichElementImage", (cocos2d::ui::RichElementImage*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::RichElementImage#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichElementImage_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::RichElementImage* cobj = new cocos2d::ui::RichElementImage();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichElementImage#RichElementImage");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_RichElementImage(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::RichElementImage).name();
    g_rubyType[typeName] = "CCUI::RichElementImage";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "RichElement");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "RichElementImage", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_RichElementImage_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "init", ruby_cocos2dx_ui_RichElementImage_init, ARGS_REQ(4));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_RichElementImage_create_static, ARGS_REQ(4));
}
mrb_value ruby_cocos2dx_ui_RichElementCustomNode_init(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichElementCustomNode* cobj = static_cast<cocos2d::ui::RichElementCustomNode*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 4) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RichElementCustomNode.init");
            if (!ok) { break; }
            cocos2d::Color3B* arg1;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[1], "CC::Color3B", &arg1);
            if (!ok) { break; }
            uint16_t arg2;
            ok = rubyval_to_uint16(mrb, argv[2], &arg2, "CCUI::RichElementCustomNode.init");
            if (!ok) { break; }
            cocos2d::Node* arg3;
            ok = rubyval_to_object<cocos2d::Node>(mrb, argv[3], "CC::Node", &arg3);
            if (!ok) { break; }
            bool retval = cobj->init(arg0, *arg1, arg2, arg3);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichElementCustomNode#init");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichElementCustomNode_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 4) {
            std::map<std::string, mrb_value> callbacks;
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RichElementCustomNode.create");
            if (!ok) { break; }

            cocos2d::Color3B* arg1;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[1], "CC::Color3B", &arg1);
            if (!ok) { break; }

            uint16_t arg2;
            ok = rubyval_to_uint16(mrb, argv[2], &arg2, "CCUI::RichElementCustomNode.create");
            if (!ok) { break; }

            cocos2d::Node* arg3;
            ok = rubyval_to_object<cocos2d::Node>(mrb, argv[3], "CC::Node", &arg3);
            if (!ok) { break; }

            cocos2d::ui::RichElementCustomNode* retval = cocos2d::ui::RichElementCustomNode::create(arg0, *arg1, arg2, arg3);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::RichElementCustomNode>(mrb, "CCUI::RichElementCustomNode", (cocos2d::ui::RichElementCustomNode*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::RichElementCustomNode#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichElementCustomNode_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::RichElementCustomNode* cobj = new cocos2d::ui::RichElementCustomNode();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichElementCustomNode#RichElementCustomNode");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_RichElementCustomNode(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::RichElementCustomNode).name();
    g_rubyType[typeName] = "CCUI::RichElementCustomNode";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "RichElement");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "RichElementCustomNode", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_RichElementCustomNode_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "init", ruby_cocos2dx_ui_RichElementCustomNode_init, ARGS_REQ(4));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_RichElementCustomNode_create_static, ARGS_REQ(4));
}
mrb_value ruby_cocos2dx_ui_RichText_insertElement(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichText* cobj = static_cast<cocos2d::ui::RichText*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::ui::RichElement* arg0;
            ok = rubyval_to_object<cocos2d::ui::RichElement>(mrb, argv[0], "CCUI::RichElement", &arg0);
            if (!ok) { break; }
            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::RichText.insertElement");
            if (!ok) { break; }
            cobj->insertElement(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichText#insertElement");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichText_setAnchorPoint(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichText* cobj = static_cast<cocos2d::ui::RichText*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            cobj->setAnchorPoint(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichText#setAnchorPoint");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichText_pushBackElement(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichText* cobj = static_cast<cocos2d::ui::RichText*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::RichElement* arg0;
            ok = rubyval_to_object<cocos2d::ui::RichElement>(mrb, argv[0], "CCUI::RichElement", &arg0);
            if (!ok) { break; }
            cobj->pushBackElement(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichText#pushBackElement");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichText_ignoreContentAdaptWithSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichText* cobj = static_cast<cocos2d::ui::RichText*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::RichText.ignoreContentAdaptWithSize");
            if (!ok) { break; }
            cobj->ignoreContentAdaptWithSize(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichText#ignoreContentAdaptWithSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichText_setVerticalSpace(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichText* cobj = static_cast<cocos2d::ui::RichText*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::RichText.setVerticalSpace");
            if (!ok) { break; }
            cobj->setVerticalSpace(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichText#setVerticalSpace");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichText_formatText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichText* cobj = static_cast<cocos2d::ui::RichText*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->formatText();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichText#formatText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichText_removeElement(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::RichText* cobj = static_cast<cocos2d::ui::RichText*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::RichElement* arg0;
            ok = rubyval_to_object<cocos2d::ui::RichElement>(mrb, argv[0], "CCUI::RichElement", &arg0);
            if (!ok) { break; }
            cobj->removeElement(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::RichText.removeElement");
            if (!ok) { break; }
            cobj->removeElement(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichText#removeElement");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichText_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::RichText* retval = cocos2d::ui::RichText::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::RichText>(mrb, "CCUI::RichText", (cocos2d::ui::RichText*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::RichText#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RichText_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::RichText* cobj = new cocos2d::ui::RichText();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RichText#RichText");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_RichText(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::RichText).name();
    g_rubyType[typeName] = "CCUI::RichText";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "RichText", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_RichText_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "insert_element", ruby_cocos2dx_ui_RichText_insertElement, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_anchor_point", ruby_cocos2dx_ui_RichText_setAnchorPoint, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "push_back_element", ruby_cocos2dx_ui_RichText_pushBackElement, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "ignore_content_adapt_with_size", ruby_cocos2dx_ui_RichText_ignoreContentAdaptWithSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_vertical_space", ruby_cocos2dx_ui_RichText_setVerticalSpace, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "format_text", ruby_cocos2dx_ui_RichText_formatText, ARGS_NONE());
    mrb_define_method(mrb, rclass, "remove_element", ruby_cocos2dx_ui_RichText_removeElement, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_RichText_create_static, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_HBox_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }

            cocos2d::ui::HBox* retval = cocos2d::ui::HBox::create(*arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::HBox>(mrb, "CCUI::HBox", (cocos2d::ui::HBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::HBox* retval = cocos2d::ui::HBox::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::HBox>(mrb, "CCUI::HBox", (cocos2d::ui::HBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::HBox#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_HBox_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::HBox* cobj = new cocos2d::ui::HBox();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::HBox#HBox");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_HBox(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::HBox).name();
    g_rubyType[typeName] = "CCUI::HBox";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Layout");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "HBox", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_HBox_constructor, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_HBox_create_static, ARGS_REQ(0)|ARGS_OPT(1));
}
mrb_value ruby_cocos2dx_ui_VBox_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }

            cocos2d::ui::VBox* retval = cocos2d::ui::VBox::create(*arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::VBox>(mrb, "CCUI::VBox", (cocos2d::ui::VBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::VBox* retval = cocos2d::ui::VBox::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::VBox>(mrb, "CCUI::VBox", (cocos2d::ui::VBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::VBox#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_VBox_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::VBox* cobj = new cocos2d::ui::VBox();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::VBox#VBox");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_VBox(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::VBox).name();
    g_rubyType[typeName] = "CCUI::VBox";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Layout");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "VBox", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_VBox_constructor, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_VBox_create_static, ARGS_REQ(0)|ARGS_OPT(1));
}
mrb_value ruby_cocos2dx_ui_RelativeBox_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }

            cocos2d::ui::RelativeBox* retval = cocos2d::ui::RelativeBox::create(*arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::RelativeBox>(mrb, "CCUI::RelativeBox", (cocos2d::ui::RelativeBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::RelativeBox* retval = cocos2d::ui::RelativeBox::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::RelativeBox>(mrb, "CCUI::RelativeBox", (cocos2d::ui::RelativeBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::RelativeBox#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_RelativeBox_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::RelativeBox* cobj = new cocos2d::ui::RelativeBox();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::RelativeBox#RelativeBox");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_ui_RelativeBox(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::RelativeBox).name();
    g_rubyType[typeName] = "CCUI::RelativeBox";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Layout");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "RelativeBox", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_RelativeBox_constructor, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_RelativeBox_create_static, ARGS_REQ(0)|ARGS_OPT(1));
}
mrb_value ruby_cocos2dx_ui_Scale9Sprite_disableCascadeColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->disableCascadeColor();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#disableCascadeColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_updateWithSprite(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 6) {
            cocos2d::Sprite* arg0;
            ok = rubyval_to_object<cocos2d::Sprite>(mrb, argv[0], "CC::Sprite", &arg0);
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            bool arg2;
            ok = rubyval_to_boolean(mrb, argv[2], &arg2, "CCUI::Scale9Sprite.updateWithSprite");
            if (!ok) { break; }
            cocos2d::Vec2* arg3;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[3], "CC::Vec2", &arg3);
            if (!ok) { break; }
            cocos2d::Size* arg4;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[4], "CC::Size", &arg4);
            if (!ok) { break; }
            cocos2d::Rect* arg5;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[5], "CC::Rect", &arg5);
            if (!ok) { break; }
            bool retval = cobj->updateWithSprite(arg0, *arg1, arg2, *arg3, *arg4, *arg5);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 4) {
            cocos2d::Sprite* arg0;
            ok = rubyval_to_object<cocos2d::Sprite>(mrb, argv[0], "CC::Sprite", &arg0);
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            bool arg2;
            ok = rubyval_to_boolean(mrb, argv[2], &arg2, "CCUI::Scale9Sprite.updateWithSprite");
            if (!ok) { break; }
            cocos2d::Rect* arg3;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[3], "CC::Rect", &arg3);
            if (!ok) { break; }
            bool retval = cobj->updateWithSprite(arg0, *arg1, arg2, *arg3);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#updateWithSprite");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_isFlippedX(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isFlippedX();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#isFlippedX");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.setScale9Enabled");
            if (!ok) { break; }
            cobj->setScale9Enabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setFlippedY(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.setFlippedY");
            if (!ok) { break; }
            cobj->setFlippedY(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setFlippedY");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setFlippedX(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.setFlippedX");
            if (!ok) { break; }
            cobj->setFlippedX(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setFlippedX");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_resizableSpriteWithCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cocos2d::ui::Scale9Sprite* retval = cobj->resizableSpriteWithCapInsets(*arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#resizableSpriteWithCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_disableCascadeOpacity(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->disableCascadeOpacity();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#disableCascadeOpacity");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setState(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::Scale9Sprite::State arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::Scale9Sprite.setState");
            if (!ok) { break; }
            cobj->setState(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setState");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setInsetBottom(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::Scale9Sprite.setInsetBottom");
            if (!ok) { break; }
            cobj->setInsetBottom(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setInsetBottom");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_initWithSpriteFrameName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.initWithSpriteFrameName");
            if (!ok) { break; }
            bool retval = cobj->initWithSpriteFrameName(arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.initWithSpriteFrameName");
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            bool retval = cobj->initWithSpriteFrameName(arg0, *arg1);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#initWithSpriteFrameName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_getSprite(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Sprite* retval = cobj->getSprite();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Sprite>(mrb, "CC::Sprite", (cocos2d::Sprite*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#getSprite");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setInsetTop(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::Scale9Sprite.setInsetTop");
            if (!ok) { break; }
            cobj->setInsetTop(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setInsetTop");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_init(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 4) {
            cocos2d::Sprite* arg0;
            ok = rubyval_to_object<cocos2d::Sprite>(mrb, argv[0], "CC::Sprite", &arg0);
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            bool arg2;
            ok = rubyval_to_boolean(mrb, argv[2], &arg2, "CCUI::Scale9Sprite.init");
            if (!ok) { break; }
            cocos2d::Rect* arg3;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[3], "CC::Rect", &arg3);
            if (!ok) { break; }
            bool retval = cobj->init(arg0, *arg1, arg2, *arg3);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            bool retval = cobj->init();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            cocos2d::Sprite* arg0;
            ok = rubyval_to_object<cocos2d::Sprite>(mrb, argv[0], "CC::Sprite", &arg0);
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            cocos2d::Rect* arg2;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[2], "CC::Rect", &arg2);
            if (!ok) { break; }
            bool retval = cobj->init(arg0, *arg1, *arg2);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 6) {
            cocos2d::Sprite* arg0;
            ok = rubyval_to_object<cocos2d::Sprite>(mrb, argv[0], "CC::Sprite", &arg0);
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            bool arg2;
            ok = rubyval_to_boolean(mrb, argv[2], &arg2, "CCUI::Scale9Sprite.init");
            if (!ok) { break; }
            cocos2d::Vec2* arg3;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[3], "CC::Vec2", &arg3);
            if (!ok) { break; }
            cocos2d::Size* arg4;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[4], "CC::Size", &arg4);
            if (!ok) { break; }
            cocos2d::Rect* arg5;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[5], "CC::Rect", &arg5);
            if (!ok) { break; }
            bool retval = cobj->init(arg0, *arg1, arg2, *arg3, *arg4, *arg5);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#init");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setPreferredSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setPreferredSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setPreferredSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setSpriteFrame(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::SpriteFrame* arg0;
            ok = rubyval_to_object<cocos2d::SpriteFrame>(mrb, argv[0], "CC::SpriteFrame", &arg0);
            if (!ok) { break; }
            cobj->setSpriteFrame(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            cocos2d::SpriteFrame* arg0;
            ok = rubyval_to_object<cocos2d::SpriteFrame>(mrb, argv[0], "CC::SpriteFrame", &arg0);
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            cobj->setSpriteFrame(arg0, *arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setSpriteFrame");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_getInsetBottom(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getInsetBottom();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#getInsetBottom");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_getCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Rect retval = cobj->getCapInsets();
            cocos2d::Rect* retval_ptr = new cocos2d::Rect(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Rect>(mrb, "CC::Rect", (cocos2d::Rect*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#getCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_isScale9Enabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isScale9Enabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#isScale9Enabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_getInsetRight(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getInsetRight();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#getInsetRight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_getOriginalSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getOriginalSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#getOriginalSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_initWithFile(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.initWithFile");
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            bool retval = cobj->initWithFile(arg0, *arg1);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.initWithFile");
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            cocos2d::Rect* arg2;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[2], "CC::Rect", &arg2);
            if (!ok) { break; }
            bool retval = cobj->initWithFile(arg0, *arg1, *arg2);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Scale9Sprite.initWithFile");
            if (!ok) { break; }
            bool retval = cobj->initWithFile(*arg0, arg1);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.initWithFile");
            if (!ok) { break; }
            bool retval = cobj->initWithFile(arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#initWithFile");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_getInsetTop(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getInsetTop();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#getInsetTop");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setInsetLeft(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::Scale9Sprite.setInsetLeft");
            if (!ok) { break; }
            cobj->setInsetLeft(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setInsetLeft");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_initWithSpriteFrame(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::SpriteFrame* arg0;
            ok = rubyval_to_object<cocos2d::SpriteFrame>(mrb, argv[0], "CC::SpriteFrame", &arg0);
            if (!ok) { break; }
            bool retval = cobj->initWithSpriteFrame(arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            cocos2d::SpriteFrame* arg0;
            ok = rubyval_to_object<cocos2d::SpriteFrame>(mrb, argv[0], "CC::SpriteFrame", &arg0);
            if (!ok) { break; }
            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }
            bool retval = cobj->initWithSpriteFrame(arg0, *arg1);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#initWithSpriteFrame");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_getPreferredSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getPreferredSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#getPreferredSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setCapInsets(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }
            cobj->setCapInsets(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setCapInsets");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_isFlippedY(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isFlippedY();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#isFlippedY");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_getInsetLeft(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getInsetLeft();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#getInsetLeft");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_setInsetRight(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::Scale9Sprite* cobj = static_cast<cocos2d::ui::Scale9Sprite*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCUI::Scale9Sprite.setInsetRight");
            if (!ok) { break; }
            cobj->setInsetRight(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#setInsetRight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.create");
            if (!ok) { break; }

            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }

            cocos2d::Rect* arg2;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[2], "CC::Rect", &arg2);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::create(arg0, *arg1, *arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Rect* arg0;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[0], "CC::Rect", &arg0);
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::Scale9Sprite.create");
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::create(*arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.create");
            if (!ok) { break; }

            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::create(arg0, *arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.create");
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Scale9Sprite#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_createWithSpriteFrameName_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.createWithSpriteFrameName");
            if (!ok) { break; }

            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::createWithSpriteFrameName(arg0, *arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCUI::Scale9Sprite.createWithSpriteFrameName");
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::createWithSpriteFrameName(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Scale9Sprite#createWithSpriteFrameName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_createWithSpriteFrame_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::SpriteFrame* arg0;
            ok = rubyval_to_object<cocos2d::SpriteFrame>(mrb, argv[0], "CC::SpriteFrame", &arg0);
            if (!ok) { break; }

            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::createWithSpriteFrame(arg0, *arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::SpriteFrame* arg0;
            ok = rubyval_to_object<cocos2d::SpriteFrame>(mrb, argv[0], "CC::SpriteFrame", &arg0);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* retval = cocos2d::ui::Scale9Sprite::createWithSpriteFrame(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::Scale9Sprite>(mrb, "CCUI::Scale9Sprite", (cocos2d::ui::Scale9Sprite*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::Scale9Sprite#createWithSpriteFrame");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_Scale9Sprite_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::Scale9Sprite* cobj = new cocos2d::ui::Scale9Sprite();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::Scale9Sprite#Scale9Sprite");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_Scale9Sprite_State_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Scale9Sprite::State::NORMAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NORMAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::Scale9Sprite::State::GRAY);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "GRAY"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_Scale9Sprite(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::Scale9Sprite).name();
    g_rubyType[typeName] = "CCUI::Scale9Sprite";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Node");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Scale9Sprite", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_Scale9Sprite_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "disable_cascade_color", ruby_cocos2dx_ui_Scale9Sprite_disableCascadeColor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "update_with_sprite", ruby_cocos2dx_ui_Scale9Sprite_updateWithSprite, ARGS_REQ(4)|ARGS_OPT(2));
    mrb_define_method(mrb, rclass, "flipped_x?", ruby_cocos2dx_ui_Scale9Sprite_isFlippedX, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_scale9_enabled", ruby_cocos2dx_ui_Scale9Sprite_setScale9Enabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_flipped_y", ruby_cocos2dx_ui_Scale9Sprite_setFlippedY, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_flipped_x", ruby_cocos2dx_ui_Scale9Sprite_setFlippedX, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "resizable_sprite_with_cap_insets", ruby_cocos2dx_ui_Scale9Sprite_resizableSpriteWithCapInsets, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "disable_cascade_opacity", ruby_cocos2dx_ui_Scale9Sprite_disableCascadeOpacity, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_state", ruby_cocos2dx_ui_Scale9Sprite_setState, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_inset_bottom", ruby_cocos2dx_ui_Scale9Sprite_setInsetBottom, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "init_with_sprite_frame_name", ruby_cocos2dx_ui_Scale9Sprite_initWithSpriteFrameName, ARGS_REQ(1)|ARGS_OPT(1));
    mrb_define_method(mrb, rclass, "get_sprite", ruby_cocos2dx_ui_Scale9Sprite_getSprite, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_inset_top", ruby_cocos2dx_ui_Scale9Sprite_setInsetTop, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "init", ruby_cocos2dx_ui_Scale9Sprite_init, ARGS_REQ(0)|ARGS_OPT(6));
    mrb_define_method(mrb, rclass, "set_preferred_size", ruby_cocos2dx_ui_Scale9Sprite_setPreferredSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_sprite_frame", ruby_cocos2dx_ui_Scale9Sprite_setSpriteFrame, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "get_inset_bottom", ruby_cocos2dx_ui_Scale9Sprite_getInsetBottom, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_cap_insets", ruby_cocos2dx_ui_Scale9Sprite_getCapInsets, ARGS_NONE());
    mrb_define_method(mrb, rclass, "scale9_enabled?", ruby_cocos2dx_ui_Scale9Sprite_isScale9Enabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_inset_right", ruby_cocos2dx_ui_Scale9Sprite_getInsetRight, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_original_size", ruby_cocos2dx_ui_Scale9Sprite_getOriginalSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "init_with_file", ruby_cocos2dx_ui_Scale9Sprite_initWithFile, ARGS_REQ(1)|ARGS_OPT(2));
    mrb_define_method(mrb, rclass, "get_inset_top", ruby_cocos2dx_ui_Scale9Sprite_getInsetTop, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_inset_left", ruby_cocos2dx_ui_Scale9Sprite_setInsetLeft, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "init_with_sprite_frame", ruby_cocos2dx_ui_Scale9Sprite_initWithSpriteFrame, ARGS_REQ(1)|ARGS_OPT(1));
    mrb_define_method(mrb, rclass, "get_preferred_size", ruby_cocos2dx_ui_Scale9Sprite_getPreferredSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_cap_insets", ruby_cocos2dx_ui_Scale9Sprite_setCapInsets, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "flipped_y?", ruby_cocos2dx_ui_Scale9Sprite_isFlippedY, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_inset_left", ruby_cocos2dx_ui_Scale9Sprite_getInsetLeft, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_inset_right", ruby_cocos2dx_ui_Scale9Sprite_setInsetRight, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_Scale9Sprite_create_static, ARGS_REQ(0)|ARGS_OPT(3));
    mrb_define_class_method(mrb, rclass, "create_with_sprite_frame_name", ruby_cocos2dx_ui_Scale9Sprite_createWithSpriteFrameName_static, ARGS_REQ(1)|ARGS_OPT(1));
    mrb_define_class_method(mrb, rclass, "create_with_sprite_frame", ruby_cocos2dx_ui_Scale9Sprite_createWithSpriteFrame_static, ARGS_REQ(1)|ARGS_OPT(1));
    struct RClass* renum_State = mrb_define_module_under(mrb, rclass, "State");
    ruby_cocos2dx_ui_Scale9Sprite_State_enum_init(mrb, renum_State);
    mrb_define_class_method(mrb, renum_State, "NORMAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_State, "GRAY", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_ui_EditBox_keyboardDidShow(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::IMEKeyboardNotificationInfo arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR IMEKeyboardNotificationInfo
		ok = false;
            if (!ok) { break; }
            cobj->keyboardDidShow(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#keyboardDidShow");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_getScriptEditBoxHandler(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getScriptEditBoxHandler();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#getScriptEditBoxHandler");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_getText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            const char* retval = cobj->getText();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, (const char*)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#getText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_keyboardDidHide(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::IMEKeyboardNotificationInfo arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR IMEKeyboardNotificationInfo
		ok = false;
            if (!ok) { break; }
            cobj->keyboardDidHide(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#keyboardDidHide");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setPlaceholderFontName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok = rubyval_to_std_string(mrb, argv[0], &arg0_tmp, "CCUI::EditBox:setPlaceholderFontName"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cobj->setPlaceholderFontName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setPlaceholderFontName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_getPlaceHolder(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            const char* retval = cobj->getPlaceHolder();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, (const char*)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#getPlaceHolder");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setFontName(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok = rubyval_to_std_string(mrb, argv[0], &arg0_tmp, "CCUI::EditBox:setFontName"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cobj->setFontName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setFontName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_registerScriptEditBoxHandler(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::EditBox.registerScriptEditBoxHandler");
            if (!ok) { break; }
            cobj->registerScriptEditBoxHandler(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#registerScriptEditBoxHandler");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setPlaceholderFontSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::EditBox.setPlaceholderFontSize");
            if (!ok) { break; }
            cobj->setPlaceholderFontSize(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setPlaceholderFontSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setInputMode(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::EditBox::InputMode arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::EditBox.setInputMode");
            if (!ok) { break; }
            cobj->setInputMode(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setInputMode");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_unregisterScriptEditBoxHandler(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->unregisterScriptEditBoxHandler();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#unregisterScriptEditBoxHandler");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_keyboardWillShow(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::IMEKeyboardNotificationInfo arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR IMEKeyboardNotificationInfo
		ok = false;
            if (!ok) { break; }
            cobj->keyboardWillShow(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#keyboardWillShow");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setPlaceholderFontColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color3B* arg0;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[0], "CC::Color3B", &arg0);
            if (!ok) { break; }
            cobj->setPlaceholderFontColor(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setPlaceholderFontColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setFontColor(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Color3B* arg0;
            ok = rubyval_to_object<cocos2d::Color3B>(mrb, argv[0], "CC::Color3B", &arg0);
            if (!ok) { break; }
            cobj->setFontColor(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setFontColor");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_keyboardWillHide(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::IMEKeyboardNotificationInfo arg0;
            #pragma warning NO CONVERSION TO NATIVE FOR IMEKeyboardNotificationInfo
		ok = false;
            if (!ok) { break; }
            cobj->keyboardWillHide(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#keyboardWillHide");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_touchDownAction(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::Ref* arg0;
            ok = rubyval_to_object<cocos2d::Ref>(mrb, argv[0], "CC::Ref", &arg0);
            if (!ok) { break; }
            cocos2d::ui::Widget::TouchEventType arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::EditBox.touchDownAction");
            if (!ok) { break; }
            cobj->touchDownAction(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#touchDownAction");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setPlaceholderFont(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok = rubyval_to_std_string(mrb, argv[0], &arg0_tmp, "CCUI::EditBox:setPlaceholderFont"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::EditBox.setPlaceholderFont");
            if (!ok) { break; }
            cobj->setPlaceholderFont(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setPlaceholderFont");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setFontSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::EditBox.setFontSize");
            if (!ok) { break; }
            cobj->setFontSize(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setFontSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_initWithSizeAndBackgroundSprite(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cocos2d::ui::Scale9Sprite* arg1;
            ok = rubyval_to_object<cocos2d::ui::Scale9Sprite>(mrb, argv[1], "CCUI::Scale9Sprite", &arg1);
            if (!ok) { break; }
            bool retval = cobj->initWithSizeAndBackgroundSprite(*arg0, arg1);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::EditBox.initWithSizeAndBackgroundSprite");
            if (!ok) { break; }
            bool retval = cobj->initWithSizeAndBackgroundSprite(*arg0, arg1);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::EditBox.initWithSizeAndBackgroundSprite");
            if (!ok) { break; }
            cocos2d::ui::Widget::TextureResType arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::EditBox.initWithSizeAndBackgroundSprite");
            if (!ok) { break; }
            bool retval = cobj->initWithSizeAndBackgroundSprite(*arg0, arg1, arg2);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#initWithSizeAndBackgroundSprite");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setPlaceHolder(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok = rubyval_to_std_string(mrb, argv[0], &arg0_tmp, "CCUI::EditBox:setPlaceHolder"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cobj->setPlaceHolder(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setPlaceHolder");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setReturnType(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::EditBox::KeyboardReturnType arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::EditBox.setReturnType");
            if (!ok) { break; }
            cobj->setReturnType(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setReturnType");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setInputFlag(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ui::EditBox::InputFlag arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::EditBox.setInputFlag");
            if (!ok) { break; }
            cobj->setInputFlag(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setInputFlag");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_getMaxLength(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getMaxLength();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#getMaxLength");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setText(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            const char* arg0;
            std::string arg0_tmp; ok = rubyval_to_std_string(mrb, argv[0], &arg0_tmp, "CCUI::EditBox:setText"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            cobj->setText(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setText");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setMaxLength(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCUI::EditBox.setMaxLength");
            if (!ok) { break; }
            cobj->setMaxLength(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setMaxLength");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_setFont(mrb_state* mrb, mrb_value self)
{
    cocos2d::ui::EditBox* cobj = static_cast<cocos2d::ui::EditBox*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            const char* arg0;
            std::string arg0_tmp; ok = rubyval_to_std_string(mrb, argv[0], &arg0_tmp, "CCUI::EditBox:setFont"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CCUI::EditBox.setFont");
            if (!ok) { break; }
            cobj->setFont(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#setFont");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::EditBox.create");
            if (!ok) { break; }

            cocos2d::ui::EditBox* retval = cocos2d::ui::EditBox::create(*arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::EditBox>(mrb, "CCUI::EditBox", (cocos2d::ui::EditBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCUI::EditBox.create");
            if (!ok) { break; }

            cocos2d::ui::Widget::TextureResType arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCUI::EditBox.create");
            if (!ok) { break; }

            cocos2d::ui::EditBox* retval = cocos2d::ui::EditBox::create(*arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::EditBox>(mrb, "CCUI::EditBox", (cocos2d::ui::EditBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* arg1;
            ok = rubyval_to_object<cocos2d::ui::Scale9Sprite>(mrb, argv[1], "CCUI::Scale9Sprite", &arg1);
            if (!ok) { break; }

            cocos2d::ui::EditBox* retval = cocos2d::ui::EditBox::create(*arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::EditBox>(mrb, "CCUI::EditBox", (cocos2d::ui::EditBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* arg1;
            ok = rubyval_to_object<cocos2d::ui::Scale9Sprite>(mrb, argv[1], "CCUI::Scale9Sprite", &arg1);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* arg2;
            ok = rubyval_to_object<cocos2d::ui::Scale9Sprite>(mrb, argv[2], "CCUI::Scale9Sprite", &arg2);
            if (!ok) { break; }

            cocos2d::ui::EditBox* retval = cocos2d::ui::EditBox::create(*arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::EditBox>(mrb, "CCUI::EditBox", (cocos2d::ui::EditBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 4) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* arg1;
            ok = rubyval_to_object<cocos2d::ui::Scale9Sprite>(mrb, argv[1], "CCUI::Scale9Sprite", &arg1);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* arg2;
            ok = rubyval_to_object<cocos2d::ui::Scale9Sprite>(mrb, argv[2], "CCUI::Scale9Sprite", &arg2);
            if (!ok) { break; }

            cocos2d::ui::Scale9Sprite* arg3;
            ok = rubyval_to_object<cocos2d::ui::Scale9Sprite>(mrb, argv[3], "CCUI::Scale9Sprite", &arg3);
            if (!ok) { break; }

            cocos2d::ui::EditBox* retval = cocos2d::ui::EditBox::create(*arg0, arg1, arg2, arg3);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::ui::EditBox>(mrb, "CCUI::EditBox", (cocos2d::ui::EditBox*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::ui::EditBox#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_ui_EditBox_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ui::EditBox* cobj = new cocos2d::ui::EditBox();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::ui::EditBox#EditBox");

    return mrb_nil_value();
}


void ruby_cocos2dx_ui_EditBox_InputFlag_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputFlag::PASSWORD);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PASSWORD"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputFlag::SENSITIVE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SENSITIVE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputFlag::INITIAL_CAPS_WORD);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "INITIAL_CAPS_WORD"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputFlag::INITIAL_CAPS_SENTENCE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "INITIAL_CAPS_SENTENCE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputFlag::INTIAL_CAPS_ALL_CHARACTERS);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "INTIAL_CAPS_ALL_CHARACTERS"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_EditBox_InputMode_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputMode::ANY);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ANY"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputMode::EMAIL_ADDRESS);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "EMAIL_ADDRESS"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputMode::NUMERIC);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "NUMERIC"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputMode::PHONE_NUMBER);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PHONE_NUMBER"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputMode::URL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "URL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputMode::DECIMAL);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "DECIMAL"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::InputMode::SINGLE_LINE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SINGLE_LINE"), ev);
    } while (0);

}

void ruby_cocos2dx_ui_EditBox_KeyboardReturnType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::KeyboardReturnType::DEFAULT);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "DEFAULT"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::KeyboardReturnType::DONE);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "DONE"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::KeyboardReturnType::SEND);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SEND"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::KeyboardReturnType::SEARCH);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "SEARCH"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::ui::EditBox::KeyboardReturnType::GO);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "GO"), ev);
    } while (0);

}

void ruby_register_cocos2dx_ui_EditBox(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::ui::EditBox).name();
    g_rubyType[typeName] = "CCUI::EditBox";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "EditBox", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_ui_EditBox_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "keyboard_did_show", ruby_cocos2dx_ui_EditBox_keyboardDidShow, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_script_edit_box_handler", ruby_cocos2dx_ui_EditBox_getScriptEditBoxHandler, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_text", ruby_cocos2dx_ui_EditBox_getText, ARGS_NONE());
    mrb_define_method(mrb, rclass, "keyboard_did_hide", ruby_cocos2dx_ui_EditBox_keyboardDidHide, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_placeholder_font_name", ruby_cocos2dx_ui_EditBox_setPlaceholderFontName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_place_holder", ruby_cocos2dx_ui_EditBox_getPlaceHolder, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_font_name", ruby_cocos2dx_ui_EditBox_setFontName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "register_script_edit_box_handler", ruby_cocos2dx_ui_EditBox_registerScriptEditBoxHandler, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_placeholder_font_size", ruby_cocos2dx_ui_EditBox_setPlaceholderFontSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_input_mode", ruby_cocos2dx_ui_EditBox_setInputMode, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "unregister_script_edit_box_handler", ruby_cocos2dx_ui_EditBox_unregisterScriptEditBoxHandler, ARGS_NONE());
    mrb_define_method(mrb, rclass, "keyboard_will_show", ruby_cocos2dx_ui_EditBox_keyboardWillShow, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_placeholder_font_color", ruby_cocos2dx_ui_EditBox_setPlaceholderFontColor, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_font_color", ruby_cocos2dx_ui_EditBox_setFontColor, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "keyboard_will_hide", ruby_cocos2dx_ui_EditBox_keyboardWillHide, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "touch_down_action", ruby_cocos2dx_ui_EditBox_touchDownAction, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_placeholder_font", ruby_cocos2dx_ui_EditBox_setPlaceholderFont, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_font_size", ruby_cocos2dx_ui_EditBox_setFontSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "init_with_size_and_background_sprite", ruby_cocos2dx_ui_EditBox_initWithSizeAndBackgroundSprite, ARGS_REQ(2)|ARGS_OPT(1));
    mrb_define_method(mrb, rclass, "set_place_holder", ruby_cocos2dx_ui_EditBox_setPlaceHolder, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_return_type", ruby_cocos2dx_ui_EditBox_setReturnType, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_input_flag", ruby_cocos2dx_ui_EditBox_setInputFlag, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_max_length", ruby_cocos2dx_ui_EditBox_getMaxLength, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_text", ruby_cocos2dx_ui_EditBox_setText, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_max_length", ruby_cocos2dx_ui_EditBox_setMaxLength, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_font", ruby_cocos2dx_ui_EditBox_setFont, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_ui_EditBox_create_static, ARGS_REQ(2)|ARGS_OPT(2));
    struct RClass* renum_InputFlag = mrb_define_module_under(mrb, rclass, "InputFlag");
    ruby_cocos2dx_ui_EditBox_InputFlag_enum_init(mrb, renum_InputFlag);
    mrb_define_class_method(mrb, renum_InputFlag, "PASSWORD", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputFlag, "SENSITIVE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputFlag, "INITIAL_CAPS_WORD", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputFlag, "INITIAL_CAPS_SENTENCE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputFlag, "INTIAL_CAPS_ALL_CHARACTERS", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_InputMode = mrb_define_module_under(mrb, rclass, "InputMode");
    ruby_cocos2dx_ui_EditBox_InputMode_enum_init(mrb, renum_InputMode);
    mrb_define_class_method(mrb, renum_InputMode, "ANY", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputMode, "EMAIL_ADDRESS", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputMode, "NUMERIC", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputMode, "PHONE_NUMBER", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputMode, "URL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputMode, "DECIMAL", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_InputMode, "SINGLE_LINE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    struct RClass* renum_KeyboardReturnType = mrb_define_module_under(mrb, rclass, "KeyboardReturnType");
    ruby_cocos2dx_ui_EditBox_KeyboardReturnType_enum_init(mrb, renum_KeyboardReturnType);
    mrb_define_class_method(mrb, renum_KeyboardReturnType, "DEFAULT", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_KeyboardReturnType, "DONE", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_KeyboardReturnType, "SEND", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_KeyboardReturnType, "SEARCH", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_KeyboardReturnType, "GO", ruby_cocos2dx_ui_constant_get, ARGS_NONE());
}
void register_all_cocos2dx_ui_enums(mrb_state* mrb)
{
}

void register_all_cocos2dx_ui(mrb_state* mrb)
{
	struct RClass* rmodule = mrb_define_module(mrb, "CCUI");

	ruby_register_cocos2dx_ui_Widget(mrb, rmodule);
	ruby_register_cocos2dx_ui_Layout(mrb, rmodule);
	ruby_register_cocos2dx_ui_RelativeBox(mrb, rmodule);
	ruby_register_cocos2dx_ui_CheckBox(mrb, rmodule);
	ruby_register_cocos2dx_ui_TextAtlas(mrb, rmodule);
	ruby_register_cocos2dx_ui_TextBMFont(mrb, rmodule);
	ruby_register_cocos2dx_ui_LoadingBar(mrb, rmodule);
	ruby_register_cocos2dx_ui_TextField(mrb, rmodule);
	ruby_register_cocos2dx_ui_Scale9Sprite(mrb, rmodule);
	ruby_register_cocos2dx_ui_VBox(mrb, rmodule);
	ruby_register_cocos2dx_ui_RichElement(mrb, rmodule);
	ruby_register_cocos2dx_ui_RichElementCustomNode(mrb, rmodule);
	ruby_register_cocos2dx_ui_Slider(mrb, rmodule);
	ruby_register_cocos2dx_ui_ScrollView(mrb, rmodule);
	ruby_register_cocos2dx_ui_ListView(mrb, rmodule);
	ruby_register_cocos2dx_ui_Button(mrb, rmodule);
	ruby_register_cocos2dx_ui_LayoutParameter(mrb, rmodule);
	ruby_register_cocos2dx_ui_LinearLayoutParameter(mrb, rmodule);
	ruby_register_cocos2dx_ui_ImageView(mrb, rmodule);
	ruby_register_cocos2dx_ui_HBox(mrb, rmodule);
	ruby_register_cocos2dx_ui_RichElementText(mrb, rmodule);
	ruby_register_cocos2dx_ui_PageView(mrb, rmodule);
	ruby_register_cocos2dx_ui_Helper(mrb, rmodule);
	ruby_register_cocos2dx_ui_EditBox(mrb, rmodule);
	ruby_register_cocos2dx_ui_Text(mrb, rmodule);
	ruby_register_cocos2dx_ui_RichText(mrb, rmodule);
	ruby_register_cocos2dx_ui_RichElementImage(mrb, rmodule);
	ruby_register_cocos2dx_ui_RelativeLayoutParameter(mrb, rmodule);

    register_all_cocos2dx_ui_enums(mrb);
}

