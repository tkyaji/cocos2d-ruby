#include "ruby_cocos2dx_experimental_video_auto.hpp"
#include "ruby_cocos2dx_experimental_video_auto_data_types.h"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#include "UIVideoPlayer.h"
#include "RubyBasicConversions.h"

mrb_value ruby_cocos2dx_experimental_video_constant_get(mrb_state* mrb, mrb_value self)
{
    RClass *c = mrb_class_ptr(self);
    return mrb_mod_cv_get(mrb, c, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_experimental_video_global_constant_get(mrb_state* mrb, mrb_value self)
{
    return mrb_gv_get(mrb, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_getFileName(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getFileName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#getFileName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_getURL(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getURL();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#getURL");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_play(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->play();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#play");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_pause(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->pause();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#pause");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_setKeepAspectRatioEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCExp::VideoPlayer.setKeepAspectRatioEnabled");
            if (!ok) { break; }
            cobj->setKeepAspectRatioEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#setKeepAspectRatioEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_resume(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->resume();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#resume");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_stop(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->stop();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#stop");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_setFullScreenEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CCExp::VideoPlayer.setFullScreenEnabled");
            if (!ok) { break; }
            cobj->setFullScreenEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#setFullScreenEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_setFileName(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::VideoPlayer.setFileName");
            if (!ok) { break; }
            cobj->setFileName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#setFileName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_setURL(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::VideoPlayer.setURL");
            if (!ok) { break; }
            cobj->setURL(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#setURL");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_isKeepAspectRatioEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isKeepAspectRatioEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#isKeepAspectRatioEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_onPlayEvent(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::VideoPlayer.onPlayEvent");
            if (!ok) { break; }
            cobj->onPlayEvent(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#onPlayEvent");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_isFullScreenEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isFullScreenEnabled();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#isFullScreenEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_isPlaying(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isPlaying();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#isPlaying");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_seekTo(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::ui::VideoPlayer* cobj = static_cast<cocos2d::experimental::ui::VideoPlayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CCExp::VideoPlayer.seekTo");
            if (!ok) { break; }
            cobj->seekTo(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::ui::VideoPlayer#seekTo");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_video_VideoPlayer_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::experimental::ui::VideoPlayer* retval = cocos2d::experimental::ui::VideoPlayer::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::experimental::ui::VideoPlayer>(mrb, "CCExp::VideoPlayer", (cocos2d::experimental::ui::VideoPlayer*)retval, rclass);
            if (callbacks.size() > 0) {
                mrb_value hash = mrb_iv_get(mrb, ret, mrb_intern_cstr(mrb, "__callback_hash"));
                if (!mrb_hash_p(hash)) {
                    hash = mrb_hash_new(mrb);
                }
                for (auto elm : callbacks) {
                    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, elm.first.c_str()), elm.second);
                    mrb_iv_set(mrb, ret, mrb_intern_cstr(mrb, "__callback_hash"), hash);
                }
            }
            g_rubyValue.push_back(ret);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::ui::VideoPlayer#create");

    return mrb_nil_value();
}

void ruby_cocos2dx_experimental_video_VideoPlayer_EventType_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::experimental::ui::VideoPlayer::EventType::PLAYING);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PLAYING"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::experimental::ui::VideoPlayer::EventType::PAUSED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "PAUSED"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::experimental::ui::VideoPlayer::EventType::STOPPED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "STOPPED"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::experimental::ui::VideoPlayer::EventType::COMPLETED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "COMPLETED"), ev);
    } while (0);

}

void ruby_register_cocos2dx_experimental_video_VideoPlayer(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::experimental::ui::VideoPlayer).name();
    g_rubyType[typeName] = "CCExp::VideoPlayer";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CCUI");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Widget");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "VideoPlayer", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "get_file_name", ruby_cocos2dx_experimental_video_VideoPlayer_getFileName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_url", ruby_cocos2dx_experimental_video_VideoPlayer_getURL, ARGS_NONE());
    mrb_define_method(mrb, rclass, "play", ruby_cocos2dx_experimental_video_VideoPlayer_play, ARGS_NONE());
    mrb_define_method(mrb, rclass, "pause", ruby_cocos2dx_experimental_video_VideoPlayer_pause, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_keep_aspect_ratio_enabled", ruby_cocos2dx_experimental_video_VideoPlayer_setKeepAspectRatioEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "resume", ruby_cocos2dx_experimental_video_VideoPlayer_resume, ARGS_NONE());
    mrb_define_method(mrb, rclass, "stop", ruby_cocos2dx_experimental_video_VideoPlayer_stop, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_full_screen_enabled", ruby_cocos2dx_experimental_video_VideoPlayer_setFullScreenEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_file_name", ruby_cocos2dx_experimental_video_VideoPlayer_setFileName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_url", ruby_cocos2dx_experimental_video_VideoPlayer_setURL, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "keep_aspect_ratio_enabled?", ruby_cocos2dx_experimental_video_VideoPlayer_isKeepAspectRatioEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "on_play_event", ruby_cocos2dx_experimental_video_VideoPlayer_onPlayEvent, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "full_screen_enabled?", ruby_cocos2dx_experimental_video_VideoPlayer_isFullScreenEnabled, ARGS_NONE());
    mrb_define_method(mrb, rclass, "playing?", ruby_cocos2dx_experimental_video_VideoPlayer_isPlaying, ARGS_NONE());
    mrb_define_method(mrb, rclass, "seek_to", ruby_cocos2dx_experimental_video_VideoPlayer_seekTo, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_experimental_video_VideoPlayer_create_static, ARGS_NONE());
    struct RClass* renum_EventType = mrb_define_module_under(mrb, rclass, "EventType");
    ruby_cocos2dx_experimental_video_VideoPlayer_EventType_enum_init(mrb, renum_EventType);
    mrb_define_class_method(mrb, renum_EventType, "PLAYING", ruby_cocos2dx_experimental_video_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "PAUSED", ruby_cocos2dx_experimental_video_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "STOPPED", ruby_cocos2dx_experimental_video_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_EventType, "COMPLETED", ruby_cocos2dx_experimental_video_constant_get, ARGS_NONE());
}
void register_all_cocos2dx_experimental_video_enums(mrb_state* mrb)
{
}

void register_all_cocos2dx_experimental_video(mrb_state* mrb)
{
	struct RClass* rmodule = mrb_define_module(mrb, "CCExp");

	ruby_register_cocos2dx_experimental_video_VideoPlayer(mrb, rmodule);

    register_all_cocos2dx_experimental_video_enums(mrb);
}

#endif
