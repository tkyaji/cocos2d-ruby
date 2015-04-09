#include "ruby_cocos2dx_audioengine_auto.hpp"
#include "ruby_cocos2dx_audioengine_auto_data_types.h"
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_MAC || CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
#include "AudioEngine.h"
#include "RubyBasicConversions.h"

mrb_value ruby_cocos2dx_audioengine_constant_get(mrb_state* mrb, mrb_value self)
{
    RClass *c = mrb_class_ptr(self);
    return mrb_mod_cv_get(mrb, c, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_audioengine_global_constant_get(mrb_state* mrb, mrb_value self)
{
    return mrb_gv_get(mrb, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_audioengine_AudioProfile_property_name_get(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::AudioProfile* cobj = static_cast<cocos2d::experimental::AudioProfile*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_audioengine_AudioProfile_type));

    mrb_value ret;
    ret = mrb_str_new_cstr(mrb, cobj->name.c_str());
    return ret;
}

mrb_value ruby_cocos2dx_audioengine_AudioProfile_property_name_set(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::AudioProfile* cobj = static_cast<cocos2d::experimental::AudioProfile*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_audioengine_AudioProfile_type));

    mrb_value argv;
    mrb_get_args(mrb, "o", &argv);

    bool ok = true;
    std::string val;
    ok = rubyval_to_std_string(mrb, argv, &val, "CCExp::AudioProfile.name");
    if (! ok) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "convert to native failed : AudioProfile#name");
    }
    cobj->name = val;

    return self;
}

mrb_value ruby_cocos2dx_audioengine_AudioProfile_property_maxInstances_get(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::AudioProfile* cobj = static_cast<cocos2d::experimental::AudioProfile*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_audioengine_AudioProfile_type));

    mrb_value ret;
    ret = mrb_fixnum_value((mrb_int)cobj->maxInstances);
    return ret;
}

mrb_value ruby_cocos2dx_audioengine_AudioProfile_property_maxInstances_set(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::AudioProfile* cobj = static_cast<cocos2d::experimental::AudioProfile*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_audioengine_AudioProfile_type));

    mrb_value argv;
    mrb_get_args(mrb, "o", &argv);

    bool ok = true;
    unsigned int val;
    ok = rubyval_to_uint32(mrb, argv, &val, "CCExp::AudioProfile.maxInstances");
    if (! ok) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "convert to native failed : AudioProfile#maxInstances");
    }
    cobj->maxInstances = val;

    return self;
}

mrb_value ruby_cocos2dx_audioengine_AudioProfile_property_minDelay_get(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::AudioProfile* cobj = static_cast<cocos2d::experimental::AudioProfile*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_audioengine_AudioProfile_type));

    mrb_value ret;
    ret = mrb_float_value(mrb, (mrb_float)cobj->minDelay);
    return ret;
}

mrb_value ruby_cocos2dx_audioengine_AudioProfile_property_minDelay_set(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::AudioProfile* cobj = static_cast<cocos2d::experimental::AudioProfile*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_audioengine_AudioProfile_type));

    mrb_value argv;
    mrb_get_args(mrb, "o", &argv);

    bool ok = true;
    double val;
    ok = rubyval_to_number(mrb, argv, &val, "CCExp::AudioProfile.minDelay");
    if (! ok) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "convert to native failed : AudioProfile#minDelay");
    }
    cobj->minDelay = val;

    return self;
}

mrb_value ruby_cocos2dx_audioengine_AudioProfile_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::experimental::AudioProfile* cobj = new cocos2d::experimental::AudioProfile();
            DATA_TYPE(self) = &ruby_cocos2dx_audioengine_AudioProfile_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::AudioProfile#AudioProfile");

    return mrb_nil_value();
}


void ruby_register_cocos2dx_audioengine_AudioProfile(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::experimental::AudioProfile).name();
    g_rubyType[typeName] = "CCExp::AudioProfile";
    g_rubyDataType[typeName] = &ruby_cocos2dx_audioengine_AudioProfile_type;

    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "AudioProfile", mrb->object_class);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_audioengine_AudioProfile_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "name", ruby_cocos2dx_audioengine_AudioProfile_property_name_get, ARGS_NONE());
    mrb_define_method(mrb, rclass, "name=", ruby_cocos2dx_audioengine_AudioProfile_property_name_set, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "max_instances", ruby_cocos2dx_audioengine_AudioProfile_property_maxInstances_get, ARGS_NONE());
    mrb_define_method(mrb, rclass, "max_instances=", ruby_cocos2dx_audioengine_AudioProfile_property_maxInstances_set, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "min_delay", ruby_cocos2dx_audioengine_AudioProfile_property_minDelay_get, ARGS_NONE());
    mrb_define_method(mrb, rclass, "min_delay=", ruby_cocos2dx_audioengine_AudioProfile_property_minDelay_set, ARGS_REQ(1));
}
mrb_value ruby_cocos2dx_audioengine_AudioEngine_lazyInit_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cocos2d::experimental::AudioEngine::lazyInit();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#lazyInit");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_setCurrentTime_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.setCurrentTime");
            if (!ok) { break; }

            double arg1;
            ok = rubyval_to_number(mrb, argv[1], (double*)&arg1, "CCExp::AudioEngine.setCurrentTime");
            if (!ok) { break; }

            bool retval = cocos2d::experimental::AudioEngine::setCurrentTime(arg0, arg1);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#setCurrentTime");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_getVolume_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.getVolume");
            if (!ok) { break; }

            double retval = cocos2d::experimental::AudioEngine::getVolume(arg0);
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#getVolume");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_uncache_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::AudioEngine.uncache");
            if (!ok) { break; }

            cocos2d::experimental::AudioEngine::uncache(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#uncache");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_resumeAll_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::experimental::AudioEngine::resumeAll();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#resumeAll");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_stopAll_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::experimental::AudioEngine::stopAll();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#stopAll");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_pause_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.pause");
            if (!ok) { break; }

            cocos2d::experimental::AudioEngine::pause(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#pause");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_end_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::experimental::AudioEngine::end();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#end");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_getMaxAudioInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cocos2d::experimental::AudioEngine::getMaxAudioInstance();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#getMaxAudioInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_getCurrentTime_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.getCurrentTime");
            if (!ok) { break; }

            double retval = cocos2d::experimental::AudioEngine::getCurrentTime(arg0);
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#getCurrentTime");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_setMaxAudioInstance_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.setMaxAudioInstance");
            if (!ok) { break; }

            bool retval = cocos2d::experimental::AudioEngine::setMaxAudioInstance(arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#setMaxAudioInstance");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_isLoop_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.isLoop");
            if (!ok) { break; }

            bool retval = cocos2d::experimental::AudioEngine::isLoop(arg0);
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#isLoop");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_pauseAll_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::experimental::AudioEngine::pauseAll();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#pauseAll");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_uncacheAll_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::experimental::AudioEngine::uncacheAll();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#uncacheAll");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_setVolume_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.setVolume");
            if (!ok) { break; }

            double arg1;
            ok = rubyval_to_number(mrb, argv[1], (double*)&arg1, "CCExp::AudioEngine.setVolume");
            if (!ok) { break; }

            cocos2d::experimental::AudioEngine::setVolume(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#setVolume");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_play2d_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            int retval = cocos2d::experimental::AudioEngine::play2d(arg0);
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            int retval = cocos2d::experimental::AudioEngine::play2d(arg0, arg1);
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            double arg2;
            ok = rubyval_to_number(mrb, argv[2], (double*)&arg2, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            int retval = cocos2d::experimental::AudioEngine::play2d(arg0, arg1, arg2);
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 4) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            double arg2;
            ok = rubyval_to_number(mrb, argv[2], (double*)&arg2, "CCExp::AudioEngine.play2d");
            if (!ok) { break; }

            const cocos2d::experimental::AudioProfile* arg3;
            ok = rubyval_to_object<const cocos2d::experimental::AudioProfile>(mrb, argv[3], "CCExp::AudioProfile", &arg3);
            if (!ok) { break; }

            int retval = cocos2d::experimental::AudioEngine::play2d(arg0, arg1, arg2, arg3);
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#play2d");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_getState_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.getState");
            if (!ok) { break; }

            int retval = (int)cocos2d::experimental::AudioEngine::getState(arg0);
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#getState");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_resume_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.resume");
            if (!ok) { break; }

            cocos2d::experimental::AudioEngine::resume(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#resume");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_stop_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.stop");
            if (!ok) { break; }

            cocos2d::experimental::AudioEngine::stop(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#stop");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_getDuration_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.getDuration");
            if (!ok) { break; }

            double retval = cocos2d::experimental::AudioEngine::getDuration(arg0);
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#getDuration");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_setLoop_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.setLoop");
            if (!ok) { break; }

            bool arg1;
            ok = rubyval_to_boolean(mrb, argv[1], &arg1, "CCExp::AudioEngine.setLoop");
            if (!ok) { break; }

            cocos2d::experimental::AudioEngine::setLoop(arg0, arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#setLoop");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_getDefaultProfile_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::experimental::AudioProfile* retval = cocos2d::experimental::AudioEngine::getDefaultProfile();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::experimental::AudioProfile>(mrb, "CCExp::AudioProfile", (cocos2d::experimental::AudioProfile*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#getDefaultProfile");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_audioengine_AudioEngine_getProfile_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::AudioEngine.getProfile");
            if (!ok) { break; }

            cocos2d::experimental::AudioProfile* retval = cocos2d::experimental::AudioEngine::getProfile(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::experimental::AudioProfile>(mrb, "CCExp::AudioProfile", (cocos2d::experimental::AudioProfile*)retval, nullptr);
            return ret;
        }
    } while (0);
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::AudioEngine.getProfile");
            if (!ok) { break; }

            cocos2d::experimental::AudioProfile* retval = cocos2d::experimental::AudioEngine::getProfile(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::experimental::AudioProfile>(mrb, "CCExp::AudioProfile", (cocos2d::experimental::AudioProfile*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::AudioEngine#getProfile");

    return mrb_nil_value();
}

void ruby_cocos2dx_audioengine_AudioEngine_constants_init(mrb_state* mrb, struct RClass* rclass)
{
    do {
        mrb_value ret;
        ret = mrb_fixnum_value((mrb_int)cocos2d::experimental::AudioEngine::INVALID_AUDIO_ID);
        mrb_mod_cv_set(mrb, rclass, mrb_intern_cstr(mrb, "INVALID_AUDIO_ID"), ret);
    } while (0);

    do {
        mrb_value ret;
        ret = mrb_float_value(mrb, (mrb_float)cocos2d::experimental::AudioEngine::TIME_UNKNOWN);
        mrb_mod_cv_set(mrb, rclass, mrb_intern_cstr(mrb, "TIME_UNKNOWN"), ret);
    } while (0);

}

void ruby_cocos2dx_audioengine_AudioEngine_AudioState_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::experimental::AudioEngine::AudioState::ERROR);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "ERROR"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::experimental::AudioEngine::AudioState::INITIALZING);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "INITIALZING"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::experimental::AudioEngine::AudioState::PLAYING);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PLAYING"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::experimental::AudioEngine::AudioState::PAUSED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PAUSED"), ev);
    } while (0);

}

void ruby_register_cocos2dx_audioengine_AudioEngine(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::experimental::AudioEngine).name();
    g_rubyType[typeName] = "CCExp::AudioEngine";
    g_rubyDataType[typeName] = &ruby_cocos2dx_audioengine_AudioEngine_type;

    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "AudioEngine", mrb->object_class);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_class_method(mrb, rclass, "lazy_init", ruby_cocos2dx_audioengine_AudioEngine_lazyInit_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "set_current_time", ruby_cocos2dx_audioengine_AudioEngine_setCurrentTime_static, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "get_volume", ruby_cocos2dx_audioengine_AudioEngine_getVolume_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "uncache", ruby_cocos2dx_audioengine_AudioEngine_uncache_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "resume_all", ruby_cocos2dx_audioengine_AudioEngine_resumeAll_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "stop_all", ruby_cocos2dx_audioengine_AudioEngine_stopAll_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "pause", ruby_cocos2dx_audioengine_AudioEngine_pause_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "end", ruby_cocos2dx_audioengine_AudioEngine_end_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "get_max_audio_instance", ruby_cocos2dx_audioengine_AudioEngine_getMaxAudioInstance_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "get_current_time", ruby_cocos2dx_audioengine_AudioEngine_getCurrentTime_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "set_max_audio_instance", ruby_cocos2dx_audioengine_AudioEngine_setMaxAudioInstance_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "loop?", ruby_cocos2dx_audioengine_AudioEngine_isLoop_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "pause_all", ruby_cocos2dx_audioengine_AudioEngine_pauseAll_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "uncache_all", ruby_cocos2dx_audioengine_AudioEngine_uncacheAll_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "set_volume", ruby_cocos2dx_audioengine_AudioEngine_setVolume_static, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "play2d", ruby_cocos2dx_audioengine_AudioEngine_play2d_static, ARGS_REQ(4));
    mrb_define_class_method(mrb, rclass, "get_state", ruby_cocos2dx_audioengine_AudioEngine_getState_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "resume", ruby_cocos2dx_audioengine_AudioEngine_resume_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "stop", ruby_cocos2dx_audioengine_AudioEngine_stop_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "get_duration", ruby_cocos2dx_audioengine_AudioEngine_getDuration_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "set_loop", ruby_cocos2dx_audioengine_AudioEngine_setLoop_static, ARGS_REQ(2));
    mrb_define_class_method(mrb, rclass, "get_default_profile", ruby_cocos2dx_audioengine_AudioEngine_getDefaultProfile_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "get_profile", ruby_cocos2dx_audioengine_AudioEngine_getProfile_static, ARGS_REQ(1));
    ruby_cocos2dx_audioengine_AudioEngine_constants_init(mrb, rclass);
    mrb_define_class_method(mrb, rclass, "INVALID_AUDIO_ID", ruby_cocos2dx_audioengine_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "TIME_UNKNOWN", ruby_cocos2dx_audioengine_constant_get, ARGS_NONE());
    struct RClass* renum_AudioState = mrb_define_module_under(mrb, rclass, "AudioState");
    ruby_cocos2dx_audioengine_AudioEngine_AudioState_enum_init(mrb, renum_AudioState);
    mrb_define_class_method(mrb, renum_AudioState, "ERROR", ruby_cocos2dx_audioengine_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_AudioState, "INITIALZING", ruby_cocos2dx_audioengine_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_AudioState, "PLAYING", ruby_cocos2dx_audioengine_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_AudioState, "PAUSED", ruby_cocos2dx_audioengine_constant_get, ARGS_NONE());
}
void register_all_cocos2dx_audioengine_enums(mrb_state* mrb)
{
}

void register_all_cocos2dx_audioengine(mrb_state* mrb)
{
	struct RClass* rmodule = mrb_define_module(mrb, "CCExp");

	ruby_register_cocos2dx_audioengine_AudioProfile(mrb, rmodule);
	ruby_register_cocos2dx_audioengine_AudioEngine(mrb, rmodule);

    register_all_cocos2dx_audioengine_enums(mrb);
}

#endif
