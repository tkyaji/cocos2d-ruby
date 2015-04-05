#include "ruby_cocos2dx_3d_auto.hpp"
#include "ruby_cocos2dx_3d_auto_data_types.h"
#include "cocos2d.h"
#include "RubyBasicConversions.h"

mrb_value ruby_cocos2dx_3d_constant_get(mrb_state* mrb, mrb_value self)
{
    RClass *c = mrb_class_ptr(self);
    return mrb_mod_cv_get(mrb, c, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_3d_global_constant_get(mrb_state* mrb, mrb_value self)
{
    return mrb_gv_get(mrb, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_3d_Skeleton3D_getBoneByName(mrb_state* mrb, mrb_value self)
{
    cocos2d::Skeleton3D* cobj = static_cast<cocos2d::Skeleton3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Skeleton3D.getBoneByName");
            if (!ok) { break; }
            cocos2d::Bone3D* retval = cobj->getBoneByName(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Bone3D>(mrb, "CC::Bone3D", (cocos2d::Bone3D*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Skeleton3D#getBoneByName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Skeleton3D_getRootBone(mrb_state* mrb, mrb_value self)
{
    cocos2d::Skeleton3D* cobj = static_cast<cocos2d::Skeleton3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CC::Skeleton3D.getRootBone");
            if (!ok) { break; }
            cocos2d::Bone3D* retval = cobj->getRootBone(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Bone3D>(mrb, "CC::Bone3D", (cocos2d::Bone3D*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Skeleton3D#getRootBone");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Skeleton3D_updateBoneMatrix(mrb_state* mrb, mrb_value self)
{
    cocos2d::Skeleton3D* cobj = static_cast<cocos2d::Skeleton3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->updateBoneMatrix();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Skeleton3D#updateBoneMatrix");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Skeleton3D_getBoneByIndex(mrb_state* mrb, mrb_value self)
{
    cocos2d::Skeleton3D* cobj = static_cast<cocos2d::Skeleton3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            unsigned int arg0;
            ok = rubyval_to_uint32(mrb, argv[0], &arg0, "CC::Skeleton3D.getBoneByIndex");
            if (!ok) { break; }
            cocos2d::Bone3D* retval = cobj->getBoneByIndex(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Bone3D>(mrb, "CC::Bone3D", (cocos2d::Bone3D*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Skeleton3D#getBoneByIndex");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Skeleton3D_getRootCount(mrb_state* mrb, mrb_value self)
{
    cocos2d::Skeleton3D* cobj = static_cast<cocos2d::Skeleton3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            ssize_t retval = cobj->getRootCount();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Skeleton3D#getRootCount");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Skeleton3D_getBoneIndex(mrb_state* mrb, mrb_value self)
{
    cocos2d::Skeleton3D* cobj = static_cast<cocos2d::Skeleton3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Bone3D* arg0;
            ok = rubyval_to_object<cocos2d::Bone3D>(mrb, argv[0], "CC::Bone3D", &arg0);
            if (!ok) { break; }
            int retval = cobj->getBoneIndex(arg0);
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Skeleton3D#getBoneIndex");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Skeleton3D_getBoneCount(mrb_state* mrb, mrb_value self)
{
    cocos2d::Skeleton3D* cobj = static_cast<cocos2d::Skeleton3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            ssize_t retval = cobj->getBoneCount();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Skeleton3D#getBoneCount");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_3d_Skeleton3D(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::Skeleton3D).name();
    g_rubyType[typeName] = "CC::Skeleton3D";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Ref");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Skeleton3D", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "get_bone_by_name", ruby_cocos2dx_3d_Skeleton3D_getBoneByName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_root_bone", ruby_cocos2dx_3d_Skeleton3D_getRootBone, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "update_bone_matrix", ruby_cocos2dx_3d_Skeleton3D_updateBoneMatrix, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_bone_by_index", ruby_cocos2dx_3d_Skeleton3D_getBoneByIndex, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_root_count", ruby_cocos2dx_3d_Skeleton3D_getRootCount, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_bone_index", ruby_cocos2dx_3d_Skeleton3D_getBoneIndex, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_bone_count", ruby_cocos2dx_3d_Skeleton3D_getBoneCount, ARGS_NONE());
}
mrb_value ruby_cocos2dx_3d_Sprite3D_isForceDepthWrite(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isForceDepthWrite();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#isForceDepthWrite");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_setCullFaceEnabled(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CC::Sprite3D.setCullFaceEnabled");
            if (!ok) { break; }
            cobj->setCullFaceEnabled(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#setCullFaceEnabled");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_setTexture(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Texture2D* arg0;
            ok = rubyval_to_object<cocos2d::Texture2D>(mrb, argv[0], "CC::Texture2D", &arg0);
            if (!ok) { break; }
            cobj->setTexture(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Sprite3D.setTexture");
            if (!ok) { break; }
            cobj->setTexture(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#setTexture");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_getLightMask(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            unsigned int retval = cobj->getLightMask();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#getLightMask");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_removeAllAttachNode(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->removeAllAttachNode();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#removeAllAttachNode");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_getMesh(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Mesh* retval = cobj->getMesh();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Mesh>(mrb, "CC::Mesh", (cocos2d::Mesh*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#getMesh");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_setCullFace(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            unsigned int arg0;
            ok = rubyval_to_uint32(mrb, argv[0], &arg0, "CC::Sprite3D.setCullFace");
            if (!ok) { break; }
            cobj->setCullFace(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#setCullFace");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_setLightMask(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            unsigned int arg0;
            ok = rubyval_to_uint32(mrb, argv[0], &arg0, "CC::Sprite3D.setLightMask");
            if (!ok) { break; }
            cobj->setLightMask(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#setLightMask");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_getBlendFunc(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::BlendFunc retval = cobj->getBlendFunc();
            cocos2d::BlendFunc* retval_ptr = new cocos2d::BlendFunc(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::BlendFunc>(mrb, "CC::BlendFunc", (cocos2d::BlendFunc*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#getBlendFunc");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_getMeshCount(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            ssize_t retval = cobj->getMeshCount();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#getMeshCount");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_removeAttachNode(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Sprite3D.removeAttachNode");
            if (!ok) { break; }
            cobj->removeAttachNode(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#removeAttachNode");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_getSkeleton(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Skeleton3D* retval = cobj->getSkeleton();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Skeleton3D>(mrb, "CC::Skeleton3D", (cocos2d::Skeleton3D*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#getSkeleton");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_getMeshByIndex(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CC::Sprite3D.getMeshByIndex");
            if (!ok) { break; }
            cocos2d::Mesh* retval = cobj->getMeshByIndex(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Mesh>(mrb, "CC::Mesh", (cocos2d::Mesh*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#getMeshByIndex");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_setForceDepthWrite(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CC::Sprite3D.setForceDepthWrite");
            if (!ok) { break; }
            cobj->setForceDepthWrite(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#setForceDepthWrite");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_getMeshByName(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Sprite3D.getMeshByName");
            if (!ok) { break; }
            cocos2d::Mesh* retval = cobj->getMeshByName(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Mesh>(mrb, "CC::Mesh", (cocos2d::Mesh*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#getMeshByName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_getAttachNode(mrb_state* mrb, mrb_value self)
{
    cocos2d::Sprite3D* cobj = static_cast<cocos2d::Sprite3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Sprite3D.getAttachNode");
            if (!ok) { break; }
            cocos2d::AttachNode* retval = cobj->getAttachNode(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::AttachNode>(mrb, "CC::AttachNode", (cocos2d::AttachNode*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Sprite3D#getAttachNode");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Sprite3D.create");
            if (!ok) { break; }

            cocos2d::Sprite3D* retval = cocos2d::Sprite3D::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Sprite3D>(mrb, "CC::Sprite3D", (cocos2d::Sprite3D*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Sprite3D* retval = cocos2d::Sprite3D::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Sprite3D>(mrb, "CC::Sprite3D", (cocos2d::Sprite3D*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Sprite3D.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CC::Sprite3D.create");
            if (!ok) { break; }

            cocos2d::Sprite3D* retval = cocos2d::Sprite3D::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Sprite3D>(mrb, "CC::Sprite3D", (cocos2d::Sprite3D*)retval, rclass);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::Sprite3D#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Sprite3D_createAsync_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 4) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Sprite3D.createAsync");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CC::Sprite3D.createAsync");
            if (!ok) { break; }

            std::function<void (cocos2d::Sprite3D *, void *)> arg2;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = g_rubyValue_index;
			    arg2 = [mrb, self, idx](cocos2d::Sprite3D* larg0, void* larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Sprite3D>(mrb, "CC::Sprite3D", (cocos2d::Sprite3D*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        #pragma warning NO CONVERSION FROM NATIVE FOR void*;
			        mrb_value _self = g_rubyValue[idx];
			        mrb_value hash = mrb_iv_get(mrb, _self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "createAsync->arg2"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    callbacks["createAsync->arg2"] = argv[2];
			    break;
			} while(0);
            if (!ok) { break; }

            void* arg3;
            #pragma warning NO CONVERSION TO NATIVE FOR void*
		ok = false;
            if (!ok) { break; }

            cocos2d::Sprite3D::createAsync(arg0, arg1, arg2, arg3);
            return self;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Sprite3D.createAsync");
            if (!ok) { break; }

            std::function<void (cocos2d::Sprite3D *, void *)> arg1;
            do {
			    // Lambda binding for ruby.
			    unsigned long idx = g_rubyValue_index;
			    arg1 = [mrb, self, idx](cocos2d::Sprite3D* larg0, void* larg1) -> void {
			        mrb_value ruby_arg0;
			        ruby_arg0 = object_to_rubyval<cocos2d::Sprite3D>(mrb, "CC::Sprite3D", (cocos2d::Sprite3D*)larg0, nullptr);
			        mrb_value ruby_arg1;
			        #pragma warning NO CONVERSION FROM NATIVE FOR void*;
			        mrb_value _self = g_rubyValue[idx];
			        mrb_value hash = mrb_iv_get(mrb, _self, mrb_intern_cstr(mrb, "__callback_hash"));
			        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "createAsync->arg1"));
			        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 2, ruby_arg0, ruby_arg1);
			        if (mrb_exception_p(mrb_ret)) {
			            mrb_exc_raise(mrb, mrb_ret);
			        }
			    };
			    callbacks["createAsync->arg1"] = argv[1];
			    break;
			} while(0);
            if (!ok) { break; }

            void* arg2;
            #pragma warning NO CONVERSION TO NATIVE FOR void*
		ok = false;
            if (!ok) { break; }

            cocos2d::Sprite3D::createAsync(arg0, arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::Sprite3D#createAsync");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_3d_Sprite3D(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::Sprite3D).name();
    g_rubyType[typeName] = "CC::Sprite3D";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Node");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Sprite3D", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "force_depth_write?", ruby_cocos2dx_3d_Sprite3D_isForceDepthWrite, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_cull_face_enabled", ruby_cocos2dx_3d_Sprite3D_setCullFaceEnabled, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_texture", ruby_cocos2dx_3d_Sprite3D_setTexture, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_light_mask", ruby_cocos2dx_3d_Sprite3D_getLightMask, ARGS_NONE());
    mrb_define_method(mrb, rclass, "remove_all_attach_node", ruby_cocos2dx_3d_Sprite3D_removeAllAttachNode, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_mesh", ruby_cocos2dx_3d_Sprite3D_getMesh, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_cull_face", ruby_cocos2dx_3d_Sprite3D_setCullFace, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_light_mask", ruby_cocos2dx_3d_Sprite3D_setLightMask, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_blend_func", ruby_cocos2dx_3d_Sprite3D_getBlendFunc, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_mesh_count", ruby_cocos2dx_3d_Sprite3D_getMeshCount, ARGS_NONE());
    mrb_define_method(mrb, rclass, "remove_attach_node", ruby_cocos2dx_3d_Sprite3D_removeAttachNode, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_skeleton", ruby_cocos2dx_3d_Sprite3D_getSkeleton, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_mesh_by_index", ruby_cocos2dx_3d_Sprite3D_getMeshByIndex, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_force_depth_write", ruby_cocos2dx_3d_Sprite3D_setForceDepthWrite, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_mesh_by_name", ruby_cocos2dx_3d_Sprite3D_getMeshByName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_attach_node", ruby_cocos2dx_3d_Sprite3D_getAttachNode, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_3d_Sprite3D_create_static, ARGS_REQ(0)|ARGS_OPT(2));
    mrb_define_class_method(mrb, rclass, "create_async", ruby_cocos2dx_3d_Sprite3D_createAsync_static, ARGS_REQ(3)|ARGS_OPT(1));
}
mrb_value ruby_cocos2dx_3d_Mesh_setTexture(mrb_state* mrb, mrb_value self)
{
    cocos2d::Mesh* cobj = static_cast<cocos2d::Mesh*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Texture2D* arg0;
            ok = rubyval_to_object<cocos2d::Texture2D>(mrb, argv[0], "CC::Texture2D", &arg0);
            if (!ok) { break; }
            cobj->setTexture(arg0);
            return self;
        }
    } while (0);
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Mesh.setTexture");
            if (!ok) { break; }
            cobj->setTexture(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Mesh#setTexture");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Mesh_getTexture(mrb_state* mrb, mrb_value self)
{
    cocos2d::Mesh* cobj = static_cast<cocos2d::Mesh*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Texture2D* retval = cobj->getTexture();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Texture2D>(mrb, "CC::Texture2D", (cocos2d::Texture2D*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Mesh#getTexture");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Mesh_getName(mrb_state* mrb, mrb_value self)
{
    cocos2d::Mesh* cobj = static_cast<cocos2d::Mesh*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Mesh#getName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Mesh_setBlendFunc(mrb_state* mrb, mrb_value self)
{
    cocos2d::Mesh* cobj = static_cast<cocos2d::Mesh*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::BlendFunc* arg0;
            ok = rubyval_to_object<cocos2d::BlendFunc>(mrb, argv[0], "CC::BlendFunc", &arg0);
            if (!ok) { break; }
            cobj->setBlendFunc(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Mesh#setBlendFunc");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Mesh_getBlendFunc(mrb_state* mrb, mrb_value self)
{
    cocos2d::Mesh* cobj = static_cast<cocos2d::Mesh*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::BlendFunc retval = cobj->getBlendFunc();
            cocos2d::BlendFunc* retval_ptr = new cocos2d::BlendFunc(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::BlendFunc>(mrb, "CC::BlendFunc", (cocos2d::BlendFunc*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Mesh#getBlendFunc");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Mesh_isVisible(mrb_state* mrb, mrb_value self)
{
    cocos2d::Mesh* cobj = static_cast<cocos2d::Mesh*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            bool retval = cobj->isVisible();
            mrb_value ret;
            ret = mrb_bool_value((mrb_bool)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Mesh#isVisible");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Mesh_setVisible(mrb_state* mrb, mrb_value self)
{
    cocos2d::Mesh* cobj = static_cast<cocos2d::Mesh*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            bool arg0;
            ok = rubyval_to_boolean(mrb, argv[0], &arg0, "CC::Mesh.setVisible");
            if (!ok) { break; }
            cobj->setVisible(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Mesh#setVisible");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_3d_Mesh(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::Mesh).name();
    g_rubyType[typeName] = "CC::Mesh";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Ref");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Mesh", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "set_texture", ruby_cocos2dx_3d_Mesh_setTexture, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_texture", ruby_cocos2dx_3d_Mesh_getTexture, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_name", ruby_cocos2dx_3d_Mesh_getName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_blend_func", ruby_cocos2dx_3d_Mesh_setBlendFunc, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_blend_func", ruby_cocos2dx_3d_Mesh_getBlendFunc, ARGS_NONE());
    mrb_define_method(mrb, rclass, "visible?", ruby_cocos2dx_3d_Mesh_isVisible, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_visible", ruby_cocos2dx_3d_Mesh_setVisible, ARGS_REQ(1));
}
mrb_value ruby_cocos2dx_3d_Animation3D_getDuration(mrb_state* mrb, mrb_value self)
{
    cocos2d::Animation3D* cobj = static_cast<cocos2d::Animation3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getDuration();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Animation3D#getDuration");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animation3D_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Animation3D.create");
            if (!ok) { break; }

            cocos2d::Animation3D* retval = cocos2d::Animation3D::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Animation3D>(mrb, "CC::Animation3D", (cocos2d::Animation3D*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::Animation3D.create");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CC::Animation3D.create");
            if (!ok) { break; }

            cocos2d::Animation3D* retval = cocos2d::Animation3D::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Animation3D>(mrb, "CC::Animation3D", (cocos2d::Animation3D*)retval, rclass);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::Animation3D#create");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_3d_Animation3D(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::Animation3D).name();
    g_rubyType[typeName] = "CC::Animation3D";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Ref");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Animation3D", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "get_duration", ruby_cocos2dx_3d_Animation3D_getDuration, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_3d_Animation3D_create_static, ARGS_REQ(2));
}
mrb_value ruby_cocos2dx_3d_Animate3D_getSpeed(mrb_state* mrb, mrb_value self)
{
    cocos2d::Animate3D* cobj = static_cast<cocos2d::Animate3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getSpeed();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Animate3D#getSpeed");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animate3D_setWeight(mrb_state* mrb, mrb_value self)
{
    cocos2d::Animate3D* cobj = static_cast<cocos2d::Animate3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CC::Animate3D.setWeight");
            if (!ok) { break; }
            cobj->setWeight(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Animate3D#setWeight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animate3D_getOriginInterval(mrb_state* mrb, mrb_value self)
{
    cocos2d::Animate3D* cobj = static_cast<cocos2d::Animate3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getOriginInterval();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Animate3D#getOriginInterval");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animate3D_setSpeed(mrb_state* mrb, mrb_value self)
{
    cocos2d::Animate3D* cobj = static_cast<cocos2d::Animate3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CC::Animate3D.setSpeed");
            if (!ok) { break; }
            cobj->setSpeed(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Animate3D#setSpeed");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animate3D_setOriginInterval(mrb_state* mrb, mrb_value self)
{
    cocos2d::Animate3D* cobj = static_cast<cocos2d::Animate3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            double arg0;
            ok = rubyval_to_number(mrb, argv[0], (double*)&arg0, "CC::Animate3D.setOriginInterval");
            if (!ok) { break; }
            cobj->setOriginInterval(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Animate3D#setOriginInterval");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animate3D_getWeight(mrb_state* mrb, mrb_value self)
{
    cocos2d::Animate3D* cobj = static_cast<cocos2d::Animate3D*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cobj->getWeight();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::Animate3D#getWeight");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animate3D_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Animation3D* arg0;
            ok = rubyval_to_object<cocos2d::Animation3D>(mrb, argv[0], "CC::Animation3D", &arg0);
            if (!ok) { break; }

            double arg1;
            ok = rubyval_to_number(mrb, argv[1], (double*)&arg1, "CC::Animate3D.create");
            if (!ok) { break; }

            double arg2;
            ok = rubyval_to_number(mrb, argv[2], (double*)&arg2, "CC::Animate3D.create");
            if (!ok) { break; }

            cocos2d::Animate3D* retval = cocos2d::Animate3D::create(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Animate3D>(mrb, "CC::Animate3D", (cocos2d::Animate3D*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Animation3D* arg0;
            ok = rubyval_to_object<cocos2d::Animation3D>(mrb, argv[0], "CC::Animation3D", &arg0);
            if (!ok) { break; }

            cocos2d::Animate3D* retval = cocos2d::Animate3D::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Animate3D>(mrb, "CC::Animate3D", (cocos2d::Animate3D*)retval, rclass);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::Animate3D#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animate3D_getTransitionTime_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            double retval = cocos2d::Animate3D::getTransitionTime();
            mrb_value ret;
            ret = mrb_float_value(mrb, (mrb_float)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::Animate3D#getTransitionTime");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_Animate3D_createWithFrames_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Animation3D* arg0;
            ok = rubyval_to_object<cocos2d::Animation3D>(mrb, argv[0], "CC::Animation3D", &arg0);
            if (!ok) { break; }

            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CC::Animate3D.createWithFrames");
            if (!ok) { break; }

            int arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CC::Animate3D.createWithFrames");
            if (!ok) { break; }

            cocos2d::Animate3D* retval = cocos2d::Animate3D::createWithFrames(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Animate3D>(mrb, "CC::Animate3D", (cocos2d::Animate3D*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 4) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Animation3D* arg0;
            ok = rubyval_to_object<cocos2d::Animation3D>(mrb, argv[0], "CC::Animation3D", &arg0);
            if (!ok) { break; }

            int arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CC::Animate3D.createWithFrames");
            if (!ok) { break; }

            int arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CC::Animate3D.createWithFrames");
            if (!ok) { break; }

            double arg3;
            ok = rubyval_to_number(mrb, argv[3], (double*)&arg3, "CC::Animate3D.createWithFrames");
            if (!ok) { break; }

            cocos2d::Animate3D* retval = cocos2d::Animate3D::createWithFrames(arg0, arg1, arg2, arg3);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::Animate3D>(mrb, "CC::Animate3D", (cocos2d::Animate3D*)retval, rclass);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::Animate3D#createWithFrames");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_3d_Animate3D(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::Animate3D).name();
    g_rubyType[typeName] = "CC::Animate3D";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "ActionInterval");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "Animate3D", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "get_speed", ruby_cocos2dx_3d_Animate3D_getSpeed, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_weight", ruby_cocos2dx_3d_Animate3D_setWeight, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_origin_interval", ruby_cocos2dx_3d_Animate3D_getOriginInterval, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_speed", ruby_cocos2dx_3d_Animate3D_setSpeed, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_origin_interval", ruby_cocos2dx_3d_Animate3D_setOriginInterval, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_weight", ruby_cocos2dx_3d_Animate3D_getWeight, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_3d_Animate3D_create_static, ARGS_REQ(1)|ARGS_OPT(2));
    mrb_define_class_method(mrb, rclass, "get_transition_time", ruby_cocos2dx_3d_Animate3D_getTransitionTime_static, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "create_with_frames", ruby_cocos2dx_3d_Animate3D_createWithFrames_static, ARGS_REQ(4));
}
mrb_value ruby_cocos2dx_3d_AttachNode_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Bone3D* arg0;
            ok = rubyval_to_object<cocos2d::Bone3D>(mrb, argv[0], "CC::Bone3D", &arg0);
            if (!ok) { break; }

            cocos2d::AttachNode* retval = cocos2d::AttachNode::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::AttachNode>(mrb, "CC::AttachNode", (cocos2d::AttachNode*)retval, rclass);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::AttachNode#create");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_3d_AttachNode(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::AttachNode).name();
    g_rubyType[typeName] = "CC::AttachNode";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Node");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "AttachNode", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_3d_AttachNode_create_static, ARGS_REQ(1));
}
mrb_value ruby_cocos2dx_3d_BillBoard_getMode(mrb_state* mrb, mrb_value self)
{
    cocos2d::BillBoard* cobj = static_cast<cocos2d::BillBoard*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = (int)cobj->getMode();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::BillBoard#getMode");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_BillBoard_visit(mrb_state* mrb, mrb_value self)
{
    cocos2d::BillBoard* cobj = static_cast<cocos2d::BillBoard*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            cocos2d::Renderer* arg0;
            ok = rubyval_to_object<cocos2d::Renderer>(mrb, argv[0], "CC::Renderer", &arg0);
            if (!ok) { break; }
            cocos2d::Mat4* arg1;
            ok = rubyval_to_object<cocos2d::Mat4>(mrb, argv[1], "CC::Mat4", &arg1);
            if (!ok) { break; }
            unsigned int arg2;
            ok = rubyval_to_uint32(mrb, argv[2], &arg2, "CC::BillBoard.visit");
            if (!ok) { break; }
            cobj->visit(arg0, *arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::BillBoard#visit");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_BillBoard_setMode(mrb_state* mrb, mrb_value self)
{
    cocos2d::BillBoard* cobj = static_cast<cocos2d::BillBoard*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::BillBoard::Mode arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CC::BillBoard.setMode");
            if (!ok) { break; }
            cobj->setMode(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::BillBoard#setMode");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_BillBoard_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::BillBoard.create");
            if (!ok) { break; }

            cocos2d::BillBoard* retval = cocos2d::BillBoard::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::BillBoard>(mrb, "CC::BillBoard", (cocos2d::BillBoard*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::BillBoard.create");
            if (!ok) { break; }

            cocos2d::BillBoard::Mode arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CC::BillBoard.create");
            if (!ok) { break; }

            cocos2d::BillBoard* retval = cocos2d::BillBoard::create(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::BillBoard>(mrb, "CC::BillBoard", (cocos2d::BillBoard*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::BillBoard* retval = cocos2d::BillBoard::create();
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::BillBoard>(mrb, "CC::BillBoard", (cocos2d::BillBoard*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::BillBoard::Mode arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CC::BillBoard.create");
            if (!ok) { break; }

            cocos2d::BillBoard* retval = cocos2d::BillBoard::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::BillBoard>(mrb, "CC::BillBoard", (cocos2d::BillBoard*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::BillBoard.create");
            if (!ok) { break; }

            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }

            cocos2d::BillBoard* retval = cocos2d::BillBoard::create(arg0, *arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::BillBoard>(mrb, "CC::BillBoard", (cocos2d::BillBoard*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CC::BillBoard.create");
            if (!ok) { break; }

            cocos2d::Rect* arg1;
            ok = rubyval_to_object<cocos2d::Rect>(mrb, argv[1], "CC::Rect", &arg1);
            if (!ok) { break; }

            cocos2d::BillBoard::Mode arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CC::BillBoard.create");
            if (!ok) { break; }

            cocos2d::BillBoard* retval = cocos2d::BillBoard::create(arg0, *arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::BillBoard>(mrb, "CC::BillBoard", (cocos2d::BillBoard*)retval, rclass);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::BillBoard#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_3d_BillBoard_createWithTexture_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Texture2D* arg0;
            ok = rubyval_to_object<cocos2d::Texture2D>(mrb, argv[0], "CC::Texture2D", &arg0);
            if (!ok) { break; }

            cocos2d::BillBoard* retval = cocos2d::BillBoard::createWithTexture(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::BillBoard>(mrb, "CC::BillBoard", (cocos2d::BillBoard*)retval, rclass);
            return ret;
        }
    } while (0);
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::Texture2D* arg0;
            ok = rubyval_to_object<cocos2d::Texture2D>(mrb, argv[0], "CC::Texture2D", &arg0);
            if (!ok) { break; }

            cocos2d::BillBoard::Mode arg1;
            ok = rubyval_to_int32(mrb, argv[1], (int*)&arg1, "CC::BillBoard.createWithTexture");
            if (!ok) { break; }

            cocos2d::BillBoard* retval = cocos2d::BillBoard::createWithTexture(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::BillBoard>(mrb, "CC::BillBoard", (cocos2d::BillBoard*)retval, rclass);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::BillBoard#createWithTexture");

    return mrb_nil_value();
}

void ruby_cocos2dx_3d_BillBoard_Mode_enum_init(mrb_state* mrb, struct RClass* renum)
{
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::BillBoard::Mode::VIEW_POINT_ORIENTED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "VIEW_POINT_ORIENTED"), ev);
    } while (0);

    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)cocos2d::BillBoard::Mode::VIEW_PLANE_ORIENTED);
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "VIEW_PLANE_ORIENTED"), ev);
    } while (0);

}

void ruby_register_cocos2dx_3d_BillBoard(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::BillBoard).name();
    g_rubyType[typeName] = "CC::BillBoard";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Sprite");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "BillBoard", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "get_mode", ruby_cocos2dx_3d_BillBoard_getMode, ARGS_NONE());
    mrb_define_method(mrb, rclass, "visit", ruby_cocos2dx_3d_BillBoard_visit, ARGS_REQ(3));
    mrb_define_method(mrb, rclass, "set_mode", ruby_cocos2dx_3d_BillBoard_setMode, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_3d_BillBoard_create_static, ARGS_REQ(0)|ARGS_OPT(3));
    mrb_define_class_method(mrb, rclass, "create_with_texture", ruby_cocos2dx_3d_BillBoard_createWithTexture_static, ARGS_REQ(2));
    struct RClass* renum_Mode = mrb_define_module_under(mrb, rclass, "Mode");
    ruby_cocos2dx_3d_BillBoard_Mode_enum_init(mrb, renum_Mode);
    mrb_define_class_method(mrb, renum_Mode, "VIEW_POINT_ORIENTED", ruby_cocos2dx_3d_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, renum_Mode, "VIEW_PLANE_ORIENTED", ruby_cocos2dx_3d_constant_get, ARGS_NONE());
}
void register_all_cocos2dx_3d_enums(mrb_state* mrb)
{
}

void register_all_cocos2dx_3d(mrb_state* mrb)
{
	struct RClass* rmodule = mrb_define_module(mrb, "CC");

	ruby_register_cocos2dx_3d_Animate3D(mrb, rmodule);
	ruby_register_cocos2dx_3d_Sprite3D(mrb, rmodule);
	ruby_register_cocos2dx_3d_AttachNode(mrb, rmodule);
	ruby_register_cocos2dx_3d_BillBoard(mrb, rmodule);
	ruby_register_cocos2dx_3d_Animation3D(mrb, rmodule);
	ruby_register_cocos2dx_3d_Skeleton3D(mrb, rmodule);
	ruby_register_cocos2dx_3d_Mesh(mrb, rmodule);

    register_all_cocos2dx_3d_enums(mrb);
}

