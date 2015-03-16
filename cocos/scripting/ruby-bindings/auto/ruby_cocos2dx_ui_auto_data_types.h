#include "cocos2d.h"
#include "mruby.h"
#include "mruby/data.h"
#include "CocosGUI.h"

static void ruby_cocos2dx_ui_Helper_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CCUI::Helper)");
#endif

}

static struct mrb_data_type ruby_cocos2dx_ui_Helper_type = {"CCUI::Helper", ruby_cocos2dx_ui_Helper_finalize};

