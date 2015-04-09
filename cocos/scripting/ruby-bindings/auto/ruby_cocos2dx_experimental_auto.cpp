#include "ruby_cocos2dx_experimental_auto.hpp"
#include "ruby_cocos2dx_experimental_auto_data_types.h"
#include "CCFastTMXLayer.h"
#include "CCFastTMXTiledMap.h"
#include "RubyBasicConversions.h"

mrb_value ruby_cocos2dx_experimental_constant_get(mrb_state* mrb, mrb_value self)
{
    RClass *c = mrb_class_ptr(self);
    return mrb_mod_cv_get(mrb, c, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_experimental_global_constant_get(mrb_state* mrb, mrb_value self)
{
    return mrb_gv_get(mrb, mrb->c->ci->mid);
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getPositionAt(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            cocos2d::Vec2 retval = cobj->getPositionAt(*arg0);
            cocos2d::Vec2* retval_ptr = new cocos2d::Vec2(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Vec2>(mrb, "CC::Vec2", (cocos2d::Vec2*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getPositionAt");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setLayerOrientation(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::TMXLayer.setLayerOrientation");
            if (!ok) { break; }
            cobj->setLayerOrientation(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setLayerOrientation");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getLayerSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getLayerSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getLayerSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setMapTileSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setMapTileSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setMapTileSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getLayerOrientation(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getLayerOrientation();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getLayerOrientation");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setProperties(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ValueMap arg0;
            ok = rubyval_to_ccvaluemap(mrb, argv[0], &arg0, "CCExp::TMXLayer.setProperties");
            if (!ok) { break; }
            cobj->setProperties(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setProperties");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setLayerName(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::TMXLayer.setLayerName");
            if (!ok) { break; }
            cobj->setLayerName(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setLayerName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_removeTileAt(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            cobj->removeTileAt(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#removeTileAt");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getProperties(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ValueMap retval = cobj->getProperties();
            mrb_value ret;
            ret = ccvaluemap_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            cocos2d::ValueMap retval = cobj->getProperties();
            mrb_value ret;
            ret = ccvaluemap_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getProperties");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setupTiles(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cobj->setupTiles();
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setupTiles");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setupTileSprite(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            cocos2d::Sprite* arg0;
            ok = rubyval_to_object<cocos2d::Sprite>(mrb, argv[0], "CC::Sprite", &arg0);
            if (!ok) { break; }
            cocos2d::Vec2* arg1;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[1], "CC::Vec2", &arg1);
            if (!ok) { break; }
            int arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCExp::TMXLayer.setupTileSprite");
            if (!ok) { break; }
            cobj->setupTileSprite(arg0, *arg1, arg2);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setupTileSprite");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setTileGID(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::TMXLayer.setTileGID");
            if (!ok) { break; }
            cocos2d::Vec2* arg1;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[1], "CC::Vec2", &arg1);
            if (!ok) { break; }
            cocos2d::TMXTileFlags_ arg2;
            ok = rubyval_to_int32(mrb, argv[2], (int*)&arg2, "CCExp::TMXLayer.setTileGID");
            if (!ok) { break; }
            cobj->setTileGID(arg0, *arg1, arg2);
            return self;
        }
    } while (0);
    do {
        if (argc == 2) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::TMXLayer.setTileGID");
            if (!ok) { break; }
            cocos2d::Vec2* arg1;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[1], "CC::Vec2", &arg1);
            if (!ok) { break; }
            cobj->setTileGID(arg0, *arg1);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setTileGID");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getMapTileSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getMapTileSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getMapTileSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getProperty(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::TMXLayer.getProperty");
            if (!ok) { break; }
            cocos2d::Value retval = cobj->getProperty(arg0);
            mrb_value ret;
            ret = ccvalue_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getProperty");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setLayerSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setLayerSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setLayerSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getLayerName(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            std::string retval = cobj->getLayerName();
            mrb_value ret;
            ret = mrb_str_new_cstr(mrb, retval.c_str());
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getLayerName");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_setTileSet(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::TMXTilesetInfo* arg0;
            ok = rubyval_to_object<cocos2d::TMXTilesetInfo>(mrb, argv[0], "CC::TMXTilesetInfo", &arg0);
            if (!ok) { break; }
            cobj->setTileSet(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#setTileSet");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getTileSet(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::TMXTilesetInfo* retval = cobj->getTileSet();
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::TMXTilesetInfo>(mrb, "CC::TMXTilesetInfo", (cocos2d::TMXTilesetInfo*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getTileSet");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_getTileAt(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXLayer* cobj = static_cast<cocos2d::experimental::TMXLayer*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vec2* arg0;
            ok = rubyval_to_object<cocos2d::Vec2>(mrb, argv[0], "CC::Vec2", &arg0);
            if (!ok) { break; }
            cocos2d::Sprite* retval = cobj->getTileAt(*arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Sprite>(mrb, "CC::Sprite", (cocos2d::Sprite*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#getTileAt");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 3) {
            std::map<std::string, mrb_value> callbacks;
            cocos2d::TMXTilesetInfo* arg0;
            ok = rubyval_to_object<cocos2d::TMXTilesetInfo>(mrb, argv[0], "CC::TMXTilesetInfo", &arg0);
            if (!ok) { break; }

            cocos2d::TMXLayerInfo* arg1;
            ok = rubyval_to_object<cocos2d::TMXLayerInfo>(mrb, argv[1], "CC::TMXLayerInfo", &arg1);
            if (!ok) { break; }

            cocos2d::TMXMapInfo* arg2;
            ok = rubyval_to_object<cocos2d::TMXMapInfo>(mrb, argv[2], "CC::TMXMapInfo", &arg2);
            if (!ok) { break; }

            cocos2d::experimental::TMXLayer* retval = cocos2d::experimental::TMXLayer::create(arg0, arg1, arg2);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::experimental::TMXLayer>(mrb, "CCExp::TMXLayer", (cocos2d::experimental::TMXLayer*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::TMXLayer#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXLayer_constructor(mrb_state* mrb, mrb_value self)
{

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::experimental::TMXLayer* cobj = new cocos2d::experimental::TMXLayer();
            DATA_TYPE(self) = &ruby_cocos2dx_Ref_type;
            DATA_PTR(self) = cobj;
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXLayer#TMXLayer");

    return mrb_nil_value();
}


void ruby_cocos2dx_experimental_TMXLayer_constants_init(mrb_state* mrb, struct RClass* rclass)
{
    do {
        mrb_value ret;
        ret = mrb_fixnum_value((mrb_int)cocos2d::experimental::TMXLayer::FAST_TMX_ORIENTATION_ORTHO);
        mrb_mod_cv_set(mrb, rclass, mrb_intern_cstr(mrb, "FAST_TMX_ORIENTATION_ORTHO"), ret);
    } while (0);

    do {
        mrb_value ret;
        ret = mrb_fixnum_value((mrb_int)cocos2d::experimental::TMXLayer::FAST_TMX_ORIENTATION_HEX);
        mrb_mod_cv_set(mrb, rclass, mrb_intern_cstr(mrb, "FAST_TMX_ORIENTATION_HEX"), ret);
    } while (0);

    do {
        mrb_value ret;
        ret = mrb_fixnum_value((mrb_int)cocos2d::experimental::TMXLayer::FAST_TMX_ORIENTATION_ISO);
        mrb_mod_cv_set(mrb, rclass, mrb_intern_cstr(mrb, "FAST_TMX_ORIENTATION_ISO"), ret);
    } while (0);

}

void ruby_register_cocos2dx_experimental_TMXLayer(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::experimental::TMXLayer).name();
    g_rubyType[typeName] = "CCExp::TMXLayer";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Node");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "TMXLayer", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "initialize", ruby_cocos2dx_experimental_TMXLayer_constructor, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_position_at", ruby_cocos2dx_experimental_TMXLayer_getPositionAt, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_layer_orientation", ruby_cocos2dx_experimental_TMXLayer_setLayerOrientation, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_layer_size", ruby_cocos2dx_experimental_TMXLayer_getLayerSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_map_tile_size", ruby_cocos2dx_experimental_TMXLayer_setMapTileSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_layer_orientation", ruby_cocos2dx_experimental_TMXLayer_getLayerOrientation, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_properties", ruby_cocos2dx_experimental_TMXLayer_setProperties, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_layer_name", ruby_cocos2dx_experimental_TMXLayer_setLayerName, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "remove_tile_at", ruby_cocos2dx_experimental_TMXLayer_removeTileAt, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_properties", ruby_cocos2dx_experimental_TMXLayer_getProperties, ARGS_NONE());
    mrb_define_method(mrb, rclass, "setup_tiles", ruby_cocos2dx_experimental_TMXLayer_setupTiles, ARGS_NONE());
    mrb_define_method(mrb, rclass, "setup_tile_sprite", ruby_cocos2dx_experimental_TMXLayer_setupTileSprite, ARGS_REQ(3));
    mrb_define_method(mrb, rclass, "set_tile_gid", ruby_cocos2dx_experimental_TMXLayer_setTileGID, ARGS_REQ(2)|ARGS_OPT(1));
    mrb_define_method(mrb, rclass, "get_map_tile_size", ruby_cocos2dx_experimental_TMXLayer_getMapTileSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_property", ruby_cocos2dx_experimental_TMXLayer_getProperty, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_layer_size", ruby_cocos2dx_experimental_TMXLayer_setLayerSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_layer_name", ruby_cocos2dx_experimental_TMXLayer_getLayerName, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_tile_set", ruby_cocos2dx_experimental_TMXLayer_setTileSet, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_tile_set", ruby_cocos2dx_experimental_TMXLayer_getTileSet, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_tile_at", ruby_cocos2dx_experimental_TMXLayer_getTileAt, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_experimental_TMXLayer_create_static, ARGS_REQ(3));
    ruby_cocos2dx_experimental_TMXLayer_constants_init(mrb, rclass);
    mrb_define_class_method(mrb, rclass, "FAST_TMX_ORIENTATION_ORTHO", ruby_cocos2dx_experimental_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "FAST_TMX_ORIENTATION_HEX", ruby_cocos2dx_experimental_constant_get, ARGS_NONE());
    mrb_define_class_method(mrb, rclass, "FAST_TMX_ORIENTATION_ISO", ruby_cocos2dx_experimental_constant_get, ARGS_NONE());
}
mrb_value ruby_cocos2dx_experimental_TMXTiledMap_setObjectGroups(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Vector<cocos2d::TMXObjectGroup *> arg0;
            ok = rubyval_to_ccvector(mrb, argv[0], &arg0, "CCExp::TMXTiledMap.setObjectGroups");
            if (!ok) { break; }
            cobj->setObjectGroups(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#setObjectGroups");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getProperty(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::TMXTiledMap.getProperty");
            if (!ok) { break; }
            cocos2d::Value retval = cobj->getProperty(arg0);
            mrb_value ret;
            ret = ccvalue_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getProperty");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_setMapSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setMapSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#setMapSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getObjectGroup(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::TMXTiledMap.getObjectGroup");
            if (!ok) { break; }
            cocos2d::TMXObjectGroup* retval = cobj->getObjectGroup(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::TMXObjectGroup>(mrb, "CC::TMXObjectGroup", (cocos2d::TMXObjectGroup*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getObjectGroup");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getObjectGroups(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Vector<cocos2d::TMXObjectGroup *> retval = cobj->getObjectGroups();
            mrb_value ret;
            ret = ccvector_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);
    do {
        if (argc == 0) {
            cocos2d::Vector<cocos2d::TMXObjectGroup *> retval = cobj->getObjectGroups();
            mrb_value ret;
            ret = ccvector_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getObjectGroups");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getTileSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getTileSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getTileSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getMapSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::Size retval = cobj->getMapSize();
            cocos2d::Size* retval_ptr = new cocos2d::Size(retval);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::Size>(mrb, "CC::Size", (cocos2d::Size*)retval_ptr, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getMapSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getProperties(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            cocos2d::ValueMap retval = cobj->getProperties();
            mrb_value ret;
            ret = ccvaluemap_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getProperties");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::TMXTiledMap.getPropertiesForGID");
            if (!ok) { break; }
            cocos2d::Value retval = cobj->getPropertiesForGID(arg0);
            mrb_value ret;
            ret = ccvalue_to_rubyval(mrb, retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getPropertiesForGID");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_setTileSize(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::Size* arg0;
            ok = rubyval_to_object<cocos2d::Size>(mrb, argv[0], "CC::Size", &arg0);
            if (!ok) { break; }
            cobj->setTileSize(*arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#setTileSize");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_setProperties(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            cocos2d::ValueMap arg0;
            ok = rubyval_to_ccvaluemap(mrb, argv[0], &arg0, "CCExp::TMXTiledMap.setProperties");
            if (!ok) { break; }
            cobj->setProperties(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#setProperties");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getLayer(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::TMXTiledMap.getLayer");
            if (!ok) { break; }
            cocos2d::experimental::TMXLayer* retval = cobj->getLayer(arg0);
            mrb_value ret;
            ret = object_to_rubyval<cocos2d::experimental::TMXLayer>(mrb, "CCExp::TMXLayer", (cocos2d::experimental::TMXLayer*)retval, nullptr);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getLayer");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_getMapOrientation(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    do {
        if (argc == 0) {
            int retval = cobj->getMapOrientation();
            mrb_value ret;
            ret = mrb_fixnum_value((mrb_int)retval);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#getMapOrientation");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_setMapOrientation(mrb_state* mrb, mrb_value self)
{
    cocos2d::experimental::TMXTiledMap* cobj = static_cast<cocos2d::experimental::TMXTiledMap*>(mrb_get_datatype(mrb, self, &ruby_cocos2dx_Ref_type));

    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            int arg0;
            ok = rubyval_to_int32(mrb, argv[0], (int*)&arg0, "CCExp::TMXTiledMap.setMapOrientation");
            if (!ok) { break; }
            cobj->setMapOrientation(arg0);
            return self;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : cocos2d::experimental::TMXTiledMap#setMapOrientation");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_create_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 1) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::TMXTiledMap.create");
            if (!ok) { break; }

            cocos2d::experimental::TMXTiledMap* retval = cocos2d::experimental::TMXTiledMap::create(arg0);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::experimental::TMXTiledMap>(mrb, "CCExp::TMXTiledMap", (cocos2d::experimental::TMXTiledMap*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::TMXTiledMap#create");

    return mrb_nil_value();
}

mrb_value ruby_cocos2dx_experimental_TMXTiledMap_createWithXML_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    bool ok = true;
    do {
        if (argc == 2) {
            std::map<std::string, mrb_value> callbacks;
            std::string arg0;
            ok = rubyval_to_std_string(mrb, argv[0], &arg0, "CCExp::TMXTiledMap.createWithXML");
            if (!ok) { break; }

            std::string arg1;
            ok = rubyval_to_std_string(mrb, argv[1], &arg1, "CCExp::TMXTiledMap.createWithXML");
            if (!ok) { break; }

            cocos2d::experimental::TMXTiledMap* retval = cocos2d::experimental::TMXTiledMap::createWithXML(arg0, arg1);
            mrb_value ret;
            RClass* rclass = mrb_class_ptr(self);
            ret = object_to_rubyval<cocos2d::experimental::TMXTiledMap>(mrb, "CCExp::TMXTiledMap", (cocos2d::experimental::TMXTiledMap*)retval, rclass);
            mrb_funcall(mrb, ret, "initialize", 0);
            return ret;
        }
    } while (0);

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : cocos2d::experimental::TMXTiledMap#createWithXML");

    return mrb_nil_value();
}

void ruby_register_cocos2dx_experimental_TMXTiledMap(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(cocos2d::experimental::TMXTiledMap).name();
    g_rubyType[typeName] = "CCExp::TMXTiledMap";
    g_rubyDataType[typeName] = &ruby_cocos2dx_Ref_type;

    struct RClass* p_rmodule = mrb->object_class;
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "CC");
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "Node");
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "TMXTiledMap", p_rclass);
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

    mrb_define_method(mrb, rclass, "set_object_groups", ruby_cocos2dx_experimental_TMXTiledMap_setObjectGroups, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_property", ruby_cocos2dx_experimental_TMXTiledMap_getProperty, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_map_size", ruby_cocos2dx_experimental_TMXTiledMap_setMapSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_object_group", ruby_cocos2dx_experimental_TMXTiledMap_getObjectGroup, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_object_groups", ruby_cocos2dx_experimental_TMXTiledMap_getObjectGroups, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_tile_size", ruby_cocos2dx_experimental_TMXTiledMap_getTileSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_map_size", ruby_cocos2dx_experimental_TMXTiledMap_getMapSize, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_properties", ruby_cocos2dx_experimental_TMXTiledMap_getProperties, ARGS_NONE());
    mrb_define_method(mrb, rclass, "get_properties_for_gid", ruby_cocos2dx_experimental_TMXTiledMap_getPropertiesForGID, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_tile_size", ruby_cocos2dx_experimental_TMXTiledMap_setTileSize, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "set_properties", ruby_cocos2dx_experimental_TMXTiledMap_setProperties, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_layer", ruby_cocos2dx_experimental_TMXTiledMap_getLayer, ARGS_REQ(1));
    mrb_define_method(mrb, rclass, "get_map_orientation", ruby_cocos2dx_experimental_TMXTiledMap_getMapOrientation, ARGS_NONE());
    mrb_define_method(mrb, rclass, "set_map_orientation", ruby_cocos2dx_experimental_TMXTiledMap_setMapOrientation, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create", ruby_cocos2dx_experimental_TMXTiledMap_create_static, ARGS_REQ(1));
    mrb_define_class_method(mrb, rclass, "create_with_xml", ruby_cocos2dx_experimental_TMXTiledMap_createWithXML_static, ARGS_REQ(2));
}
void register_all_cocos2dx_experimental_enums(mrb_state* mrb)
{
}

void register_all_cocos2dx_experimental(mrb_state* mrb)
{
	struct RClass* rmodule = mrb_define_module(mrb, "CCExp");

	ruby_register_cocos2dx_experimental_TMXTiledMap(mrb, rmodule);
	ruby_register_cocos2dx_experimental_TMXLayer(mrb, rmodule);

    register_all_cocos2dx_experimental_enums(mrb);
}

