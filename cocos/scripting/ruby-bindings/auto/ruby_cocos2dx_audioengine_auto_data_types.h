#include "cocos2d.h"
#include "mruby.h"
#include "mruby/data.h"
#include "AudioEngine.h"

static void ruby_cocos2dx_audioengine_AudioProfile_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CCExp::AudioProfile)");
#endif

    cocos2d::experimental::AudioProfile* self = static_cast<cocos2d::experimental::AudioProfile*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_audioengine_AudioProfile_type = {"CCExp::AudioProfile", ruby_cocos2dx_audioengine_AudioProfile_finalize};


static void ruby_cocos2dx_audioengine_AudioEngine_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CCExp::AudioEngine)");
#endif

}

static struct mrb_data_type ruby_cocos2dx_audioengine_AudioEngine_type = {"CCExp::AudioEngine", ruby_cocos2dx_audioengine_AudioEngine_finalize};

