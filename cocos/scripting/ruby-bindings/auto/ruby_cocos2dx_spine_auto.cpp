#include "ruby_cocos2dx_spine_auto.hpp"
#include "ruby_cocos2dx_spine_auto_data_types.h"
#include "spine-cocos2dx.h"
#include "RubyBasicConversions.h"

mrb_value ruby_cocos2dx_spine_constant_get(mrb_state* mrb, mrb_value self)
{
    RClass *c = mrb_class_ptr(self);
    return mrb_mod_cv_get(mrb, c, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_spine_global_constant_get(mrb_state* mrb, mrb_value self)
{
    return mrb_gv_get(mrb, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_setTimeScale(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "SP::SkeletonRenderer.setTimeScale");
            if (!ok) { break; }
            cobj->setTimeScale(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#setTimeScale");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_isOpacityModifyRGB(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isOpacityModifyRGB();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#isOpacityModifyRGB");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_setDebugSlotsEnabled(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "SP::SkeletonRenderer.setDebugSlotsEnabled");
            if (!ok) { break; }
            cobj->setDebugSlotsEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#setDebugSlotsEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_getDebugSlotsEnabled(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->getDebugSlotsEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#getDebugSlotsEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_setBonesToSetupPose(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->setBonesToSetupPose();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#setBonesToSetupPose");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_setSlotsToSetupPose(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->setSlotsToSetupPose();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#setSlotsToSetupPose");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_setSkin(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "SP::SkeletonRenderer.setSkin");
            if (!ok) { break; }
            bool retval = cobj->setSkin(arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#setSkin");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_setToSetupPose(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->setToSetupPose();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#setToSetupPose");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_setOpacityModifyRGB(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "SP::SkeletonRenderer.setOpacityModifyRGB");
            if (!ok) { break; }
            cobj->setOpacityModifyRGB(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#setOpacityModifyRGB");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_setDebugBonesEnabled(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "SP::SkeletonRenderer.setDebugBonesEnabled");
            if (!ok) { break; }
            cobj->setDebugBonesEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#setDebugBonesEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_getSkeleton(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            spSkeleton* retval = cobj->getSkeleton();
            mrb_value ret;
            ret = object_to_rubyval<spSkeleton>(mrb, "spSkeleton", (spSkeleton*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#getSkeleton");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_getDebugBonesEnabled(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->getDebugBonesEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#getDebugBonesEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_getTimeScale(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonRenderer* cobj = static_cast<spine::SkeletonRenderer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getTimeScale();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonRenderer#getTimeScale");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonRenderer_createWithFile_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "SP::SkeletonRenderer.createWithFile");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "SP::SkeletonRenderer.createWithFile");
            if (!ok) { break; }

            spine::SkeletonRenderer* retval = spine::SkeletonRenderer::createWithFile(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<spine::SkeletonRenderer>(mrb, "SP::SkeletonRenderer", (spine::SkeletonRenderer*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "SP::SkeletonRenderer.createWithFile");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "SP::SkeletonRenderer.createWithFile");
            if (!ok) { break; }

            double arg2;
            ok = rubyval_to_number(mrb, argv[2], (double*)&arg2, "SP::SkeletonRenderer.createWithFile");
            if (!ok) { break; }

            spine::SkeletonRenderer* retval = spine::SkeletonRenderer::createWithFile(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<spine::SkeletonRenderer>(mrb, "SP::SkeletonRenderer", (spine::SkeletonRenderer*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "SP::SkeletonRenderer.createWithFile");
            if (!ok) { break; }

            spAtlas* arg1;
            ok = rubyval_to_object<spAtlas>(mrb, argv[1], "spAtlas", &arg1);
            if (!ok) { break; }

            spine::SkeletonRenderer* retval = spine::SkeletonRenderer::createWithFile(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<spine::SkeletonRenderer>(mrb, "SP::SkeletonRenderer", (spine::SkeletonRenderer*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "SP::SkeletonRenderer.createWithFile");
            if (!ok) { break; }

            spAtlas* arg1;
            ok = rubyval_to_object<spAtlas>(mrb, argv[1], "spAtlas", &arg1);
            if (!ok) { break; }

            double arg2;
            ok = rubyval_to_number(mrb, argv[2], (double*)&arg2, "SP::SkeletonRenderer.createWithFile");
            if (!ok) { break; }

            spine::SkeletonRenderer* retval = spine::SkeletonRenderer::createWithFile(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<spine::SkeletonRenderer>(mrb, "SP::SkeletonRenderer", (spine::SkeletonRenderer*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : spine::SkeletonRenderer#createWithFile");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_spine_SkeletonRenderer(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(spine::SkeletonRenderer).name();
    g_rubyType[typeName] = "SP::SkeletonRenderer";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Node");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "SkeletonRenderer", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "set_time_scale", ruby_cocos2dx_spine_SkeletonRenderer_setTimeScale, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "opacity_modify_rgb?", ruby_cocos2dx_spine_SkeletonRenderer_isOpacityModifyRGB, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_debug_slots_enabled", ruby_cocos2dx_spine_SkeletonRenderer_setDebugSlotsEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_debug_slots_enabled", ruby_cocos2dx_spine_SkeletonRenderer_getDebugSlotsEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_bones_to_setup_pose", ruby_cocos2dx_spine_SkeletonRenderer_setBonesToSetupPose, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_slots_to_setup_pose", ruby_cocos2dx_spine_SkeletonRenderer_setSlotsToSetupPose, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_skin", ruby_cocos2dx_spine_SkeletonRenderer_setSkin, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_to_setup_pose", ruby_cocos2dx_spine_SkeletonRenderer_setToSetupPose, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_opacity_modify_rgb", ruby_cocos2dx_spine_SkeletonRenderer_setOpacityModifyRGB, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_debug_bones_enabled", ruby_cocos2dx_spine_SkeletonRenderer_setDebugBonesEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_skeleton", ruby_cocos2dx_spine_SkeletonRenderer_getSkeleton, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_debug_bones_enabled", ruby_cocos2dx_spine_SkeletonRenderer_getDebugBonesEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_time_scale", ruby_cocos2dx_spine_SkeletonRenderer_getTimeScale, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create_with_file", ruby_cocos2dx_spine_SkeletonRenderer_createWithFile_static, ARGS_REQ(2)|ARGS_OPT(1));
}
mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setStartListener(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (int)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](const int larg0) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "setStartListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 1, ruby_arg0);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "setStartListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->setStartListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setStartListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setTrackEventListener(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            spTrackEntry* arg0;
            ok = rubyval_to_object<spTrackEntry>(mrb, argv[0], "spTrackEntry", &arg0);
            if (!ok) { break; }
            std::function<void (int, spEvent *)> arg1;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg1 = [mrb, self, idx](const int larg0, spEvent* larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
			        mrb_value ruby_arg1;
			        #pragma warning NO CONVERSION FROM NATIVE FOR spEvent*;
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "setTrackEventListener->arg1"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "setTrackEventListener->arg1"), argv[1]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->setTrackEventListener(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setTrackEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            spTrackEntry* arg0;
            ok = rubyval_to_object<spTrackEntry>(mrb, argv[0], "spTrackEntry", &arg0);
            if (!ok) { break; }
            std::function<void (int, int)> arg1;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg1 = [mrb, self, idx](const int larg0, const int larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "setTrackCompleteListener->arg1"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "setTrackCompleteListener->arg1"), argv[1]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->setTrackCompleteListener(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setTrackCompleteListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setTrackStartListener(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            spTrackEntry* arg0;
            ok = rubyval_to_object<spTrackEntry>(mrb, argv[0], "spTrackEntry", &arg0);
            if (!ok) { break; }
            std::function<void (int)> arg1;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg1 = [mrb, self, idx](const int larg0) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "setTrackStartListener->arg1"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 1, ruby_arg0);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "setTrackStartListener->arg1"), argv[1]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->setTrackStartListener(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setTrackStartListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setCompleteListener(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (int, int)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](const int larg0, const int larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
			        mrb_value ruby_arg1;
			        ruby_arg1 = mrb_fixnum_value((mrb_int)larg1);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "setCompleteListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "setCompleteListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->setCompleteListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setCompleteListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setTrackEndListener(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            spTrackEntry* arg0;
            ok = rubyval_to_object<spTrackEntry>(mrb, argv[0], "spTrackEntry", &arg0);
            if (!ok) { break; }
            std::function<void (int)> arg1;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg1 = [mrb, self, idx](const int larg0) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "setTrackEndListener->arg1"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 1, ruby_arg0);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "setTrackEndListener->arg1"), argv[1]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->setTrackEndListener(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setTrackEndListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setEventListener(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (int, spEvent *)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](const int larg0, spEvent* larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
			        mrb_value ruby_arg1;
			        #pragma warning NO CONVERSION FROM NATIVE FOR spEvent*;
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "setEventListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "setEventListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->setEventListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setEventListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setMix(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "SP::SkeletonAnimation.setMix");
            if (!ok) { break; }
            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "SP::SkeletonAnimation.setMix");
            if (!ok) { break; }
            double arg2;
            ok = rubyval_to_number(mrb, argv[2], (double*)&arg2, "SP::SkeletonAnimation.setMix");
            if (!ok) { break; }
            cobj->setMix(arg0, arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setMix");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_setEndListener(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::function<void (int)> arg0;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = -1;
			    arg0 = [mrb, self, idx](const int larg0) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = mrb_fixnum_value((mrb_int)larg0);
			        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "setEndListener->arg0"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 1, ruby_arg0);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
			    if (!mrb_hash_p(hash)) {
			        hash = mrb_hash_new(mrb);
			    }
			    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "setEndListener->arg0"), argv[0]);
			    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
			    break;
			} while(0);
            cobj->setEndListener(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#setEndListener");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_clearTracks(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->clearTracks();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#clearTracks");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_spine_SkeletonAnimation_clearTrack(mrb_state* mrb, mrb_value self)
{
    spine::SkeletonAnimation* cobj = static_cast<spine::SkeletonAnimation*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 0) {
            cobj->clearTrack();
            return self;
        }
    } while (0);
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "SP::SkeletonAnimation.clearTrack");
            if (!ok) { break; }
            cobj->clearTrack(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : spine::SkeletonAnimation#clearTrack");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_spine_SkeletonAnimation(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(spine::SkeletonAnimation).name();
    g_rubyType[typeName] = "SP::SkeletonAnimation";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "SP");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "SkeletonRenderer");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "SkeletonAnimation", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "set_start_listener", ruby_cocos2dx_spine_SkeletonAnimation_setStartListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_track_event_listener", ruby_cocos2dx_spine_SkeletonAnimation_setTrackEventListener, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_track_complete_listener", ruby_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_track_start_listener", ruby_cocos2dx_spine_SkeletonAnimation_setTrackStartListener, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_complete_listener", ruby_cocos2dx_spine_SkeletonAnimation_setCompleteListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_track_end_listener", ruby_cocos2dx_spine_SkeletonAnimation_setTrackEndListener, ARGS_REQ(2));
    mrb_define_method(mrb, rclass, "set_event_listener", ruby_cocos2dx_spine_SkeletonAnimation_setEventListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_mix", ruby_cocos2dx_spine_SkeletonAnimation_setMix, ARGS_REQ(3));
    mrb_define_method(mrb, rclass, "set_end_listener", ruby_cocos2dx_spine_SkeletonAnimation_setEndListener, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "clear_tracks", ruby_cocos2dx_spine_SkeletonAnimation_clearTracks, ARGS_NONE());
    mrb_define_method(mrb, rclass, "clear_track", ruby_cocos2dx_spine_SkeletonAnimation_clearTrack, ARGS_REQ(1));
}
void register_all_cocos2dx_spine_enums(mrb_state* mrb)
{
}

void register_all_cocos2dx_spine(mrb_state* mrb)
{
	struct RClass* rmodule = mrb_define_module(mrb, "SP");

	ruby_register_cocos2dx_spine_SkeletonRenderer(mrb, rmodule);
	ruby_register_cocos2dx_spine_SkeletonAnimation(mrb, rmodule);

    register_all_cocos2dx_spine_enums(mrb);
}

