#include "cocos2d.h"
#include "mruby.h"
#include "mruby/data.h"
#include "cocos2d.h"
#include "CCProtectedNode.h"
#include "CCAsyncTaskPool.h"

static void ruby_cocos2dx_Vec2_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Vec2)");
#endif

    cocos2d::Vec2* self = static_cast<cocos2d::Vec2*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Vec2_type = {"CC::Vec2", ruby_cocos2dx_Vec2_finalize};


static void ruby_cocos2dx_Vec3_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Vec3)");
#endif

    cocos2d::Vec3* self = static_cast<cocos2d::Vec3*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Vec3_type = {"CC::Vec3", ruby_cocos2dx_Vec3_finalize};


static void ruby_cocos2dx_Vec4_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Vec4)");
#endif

    cocos2d::Vec4* self = static_cast<cocos2d::Vec4*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Vec4_type = {"CC::Vec4", ruby_cocos2dx_Vec4_finalize};


static void ruby_cocos2dx_Size_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Size)");
#endif

    cocos2d::Size* self = static_cast<cocos2d::Size*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Size_type = {"CC::Size", ruby_cocos2dx_Size_finalize};


static void ruby_cocos2dx_Rect_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Rect)");
#endif

    cocos2d::Rect* self = static_cast<cocos2d::Rect*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Rect_type = {"CC::Rect", ruby_cocos2dx_Rect_finalize};


static void ruby_cocos2dx_Color3B_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Color3B)");
#endif

    cocos2d::Color3B* self = static_cast<cocos2d::Color3B*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Color3B_type = {"CC::Color3B", ruby_cocos2dx_Color3B_finalize};


static void ruby_cocos2dx_Color4B_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Color4B)");
#endif

    cocos2d::Color4B* self = static_cast<cocos2d::Color4B*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Color4B_type = {"CC::Color4B", ruby_cocos2dx_Color4B_finalize};


static void ruby_cocos2dx_Color4F_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Color4F)");
#endif

    cocos2d::Color4F* self = static_cast<cocos2d::Color4F*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Color4F_type = {"CC::Color4F", ruby_cocos2dx_Color4F_finalize};


static void ruby_cocos2dx_AnimationFrameData_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::AnimationFrameData)");
#endif

    cocos2d::AnimationFrameData* self = static_cast<cocos2d::AnimationFrameData*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_AnimationFrameData_type = {"CC::AnimationFrameData", ruby_cocos2dx_AnimationFrameData_finalize};


static void ruby_cocos2dx_FileUtils_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::FileUtils)");
#endif

}

static struct mrb_data_type ruby_cocos2dx_FileUtils_type = {"CC::FileUtils", ruby_cocos2dx_FileUtils_finalize};


static void ruby_cocos2dx_UserDefault_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::UserDefault)");
#endif

}

static struct mrb_data_type ruby_cocos2dx_UserDefault_type = {"CC::UserDefault", ruby_cocos2dx_UserDefault_finalize};


static void ruby_cocos2dx_TransitionEaseScene_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::TransitionEaseScene)");
#endif

}

static struct mrb_data_type ruby_cocos2dx_TransitionEaseScene_type = {"CC::TransitionEaseScene", ruby_cocos2dx_TransitionEaseScene_finalize};


static void ruby_cocos2dx_Device_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Device)");
#endif

}

static struct mrb_data_type ruby_cocos2dx_Device_type = {"CC::Device", ruby_cocos2dx_Device_finalize};


static void ruby_cocos2dx_Application_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Application)");
#endif

}

static struct mrb_data_type ruby_cocos2dx_Application_type = {"CC::Application", ruby_cocos2dx_Application_finalize};


static void ruby_cocos2dx_NodeData_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::NodeData)");
#endif

    cocos2d::NodeData* self = static_cast<cocos2d::NodeData*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_NodeData_type = {"CC::NodeData", ruby_cocos2dx_NodeData_finalize};


static void ruby_cocos2dx_NodeDatas_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::NodeDatas)");
#endif

    cocos2d::NodeDatas* self = static_cast<cocos2d::NodeDatas*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_NodeDatas_type = {"CC::NodeDatas", ruby_cocos2dx_NodeDatas_finalize};


static void ruby_cocos2dx_Animation3DData_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Animation3DData)");
#endif

    cocos2d::Animation3DData* self = static_cast<cocos2d::Animation3DData*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Animation3DData_type = {"CC::Animation3DData", ruby_cocos2dx_Animation3DData_finalize};


static void ruby_cocos2dx_Sprite3DData_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::Sprite3DCache::Sprite3DData)");
#endif

    cocos2d::Sprite3DCache::Sprite3DData* self = static_cast<cocos2d::Sprite3DCache::Sprite3DData*>(ptr);
    delete self;
}

static struct mrb_data_type ruby_cocos2dx_Sprite3DData_type = {"CC::Sprite3DCache::Sprite3DData", ruby_cocos2dx_Sprite3DData_finalize};


static void ruby_cocos2dx_AsyncTaskPool_finalize(mrb_state *mrb, void *ptr)
{
#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (CC::AsyncTaskPool)");
#endif

}

static struct mrb_data_type ruby_cocos2dx_AsyncTaskPool_type = {"CC::AsyncTaskPool", ruby_cocos2dx_AsyncTaskPool_finalize};

