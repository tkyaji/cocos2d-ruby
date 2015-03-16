LOCAL_PATH := $(call my-dir)
#
#include $(CLEAR_VARS)
#
#LOCAL_MODULE := cocos2d_ruby_android_static
#
#LOCAL_MODULE_FILENAME := librubycocos2dandroid
#
#LOCAL_SRC_FILES := ../manual/platform/android/CCRubyJavaBridge.cpp \
#                   ../manual/platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxRubyJavaBridge.cpp
#
#LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../.. \
#                    $(LOCAL_PATH)/../manual \
#                    $(LOCAL_PATH)/../../../../external/ruby/mruby \
#                    $(LOCAL_PATH)/../manual/platform/android \
#                    $(LOCAL_PATH)/../manual/platform/android/jni
#
#LOCAL_EXPORT_LDLIBS := -lGLESv2 \
#                       -llog \
#                       -lz \
#                       -landroid
#
#include $(BUILD_STATIC_LIBRARY)
#
#==============================================================

include $(CLEAR_VARS)

LOCAL_MODULE    := cocos2d_ruby_static

LOCAL_MODULE_FILENAME := librubycocos2d

LOCAL_SRC_FILES := ../manual/RubyEngine.cpp \
          ../manual/RubyBasicConversions.cpp \
          ../manual/ruby_global_manual.cpp \
          ../auto/ruby_cocos2dx_3d_auto.cpp \
          ../auto/ruby_cocos2dx_audioengine_auto.cpp \
          ../auto/ruby_cocos2dx_auto.cpp \
          ../auto/ruby_cocos2dx_experimental_auto.cpp \
          ../auto/ruby_cocos2dx_experimental_video_auto.cpp \
          ../auto/ruby_cocos2dx_spine_auto.cpp \
          ../auto/ruby_cocos2dx_ui_auto.cpp \
          ../../../../external/ruby/mruby/src/array.c \
          ../../../../external/ruby/mruby/src/backtrace.c \
          ../../../../external/ruby/mruby/src/class.c \
          ../../../../external/ruby/mruby/src/codegen.c \
          ../../../../external/ruby/mruby/src/compar.c \
          ../../../../external/ruby/mruby/src/crc.c \
          ../../../../external/ruby/mruby/src/debug.c \
          ../../../../external/ruby/mruby/src/dump.c \
          ../../../../external/ruby/mruby/src/enum.c \
          ../../../../external/ruby/mruby/src/error.c \
          ../../../../external/ruby/mruby/src/etc.c \
          ../../../../external/ruby/mruby/src/gc.c \
          ../../../../external/ruby/mruby/src/hash.c \
          ../../../../external/ruby/mruby/src/init.c \
          ../../../../external/ruby/mruby/src/kernel.c \
          ../../../../external/ruby/mruby/src/load.c \
          ../../../../external/ruby/mruby/src/numeric.c \
          ../../../../external/ruby/mruby/src/object.c \
          ../../../../external/ruby/mruby/src/y.tab.c \
          ../../../../external/ruby/mruby/src/pool.c \
          ../../../../external/ruby/mruby/src/print.c \
          ../../../../external/ruby/mruby/src/proc.c \
          ../../../../external/ruby/mruby/src/range.c \
          ../../../../external/ruby/mruby/src/state.c \
          ../../../../external/ruby/mruby/src/string.c \
          ../../../../external/ruby/mruby/src/symbol.c \
          ../../../../external/ruby/mruby/src/variable.c \
          ../../../../external/ruby/mruby/src/version.c \
          ../../../../external/ruby/mruby/src/vm.c \
          ../../../../external/ruby/mruby/src/fmt_fp.c \
          ../../../../external/ruby/mruby/mrblib/mrblib.c \
          ../../../../external/ruby/mruby/mrbgems/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-array-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-array-ext/src/array.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-enum-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-enum-lazy/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-enumerator/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-fiber/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-fiber/src/fiber.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-hash-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-hash-ext/src/hash-ext.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-kernel-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-kernel-ext/src/kernel.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-math/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-math/src/math.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-numeric-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-numeric-ext/src/numeric_ext.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-object-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-object-ext/src/object.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-objectspace/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-objectspace/src/mruby_objectspace.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-print/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-print/src/print.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-proc-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-proc-ext/src \
          ../../../../external/ruby/mruby/mrbgems/mruby-proc-ext/src/proc.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-random/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-random/src/mt19937ar.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-random/src/random.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-range-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-range-ext/src \
          ../../../../external/ruby/mruby/mrbgems/mruby-range-ext/src/range.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-sprintf/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-sprintf/src/kernel.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-sprintf/src/sprintf.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-string-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-string-ext/src/string.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-string-utf8/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-string-utf8/src/string.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-struct/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-struct/src/struct.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-symbol-ext/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-symbol-ext/src/symbol.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-time/gem_init.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-time/src/time.c \
          ../../../../external/ruby/mruby/mrbgems/mruby-toplevel-ext/gem_init.c \
          ../../../../external/xxtea/xxtea.cpp \

#3d
#LOCAL_SRC_FILES += ../manual/3d/lua_cocos2dx_3d_manual.cpp \
#                   ../auto/lua_cocos2dx_3d_auto.cpp
#
#cocosdenshion
#LOCAL_SRC_FILES += ../manual/cocosdenshion/lua_cocos2dx_cocosdenshion_manual.cpp \
#                   ../auto/lua_cocos2dx_cocosdenshion_auto.cpp
#
#network
#LOCAL_SRC_FILES += ../manual/network/lua_cocos2dx_network_manual.cpp \
#                   ../manual/network/lua_extensions.c \
#                   ../manual/network/Lua_web_socket.cpp \
#                   ../manual/network/lua_xml_http_request.cpp \
#                   ../../../../external/lua/luasocket/auxiliar.c \
#                   ../../../../external/lua/luasocket/buffer.c \
#                   ../../../../external/lua/luasocket/except.c \
#                   ../../../../external/lua/luasocket/inet.c \
#                   ../../../../external/lua/luasocket/io.c \
#                   ../../../../external/lua/luasocket/luasocket.c \
#                   ../../../../external/lua/luasocket/luasocket_scripts.c \
#                   ../../../../external/lua/luasocket/mime.c \
#                   ../../../../external/lua/luasocket/options.c \
#                   ../../../../external/lua/luasocket/select.c \
#                   ../../../../external/lua/luasocket/serial.c \
#                   ../../../../external/lua/luasocket/tcp.c \
#                   ../../../../external/lua/luasocket/timeout.c \
#                   ../../../../external/lua/luasocket/udp.c \
#                   ../../../../external/lua/luasocket/unix.c \
#                   ../../../../external/lua/luasocket/usocket.c
#
#cocosbuilder
#LOCAL_SRC_FILES += ../manual/cocosbuilder/lua_cocos2dx_cocosbuilder_manual.cpp \
#                   ../manual/cocosbuilder/CCBProxy.cpp \
#                   ../auto/lua_cocos2dx_cocosbuilder_auto.cpp
#
#cocostudio
#LOCAL_SRC_FILES += ../manual/cocostudio/lua_cocos2dx_coco_studio_manual.cpp \
#                   ../manual/cocostudio/CustomGUIReader.cpp \
#                   ../manual/cocostudio/lua_cocos2dx_csloader_manual.cpp \
#                   ../auto/lua_cocos2dx_csloader_auto.cpp \
#                   ../auto/lua_cocos2dx_studio_auto.cpp
#
#spine
#LOCAL_SRC_FILES += ../manual/spine/lua_cocos2dx_spine_manual.cpp \
#                   ../manual/spine/LuaSkeletonAnimation.cpp \
#                   ../auto/lua_cocos2dx_spine_auto.cpp
#
#ui
#LOCAL_SRC_FILES += ../manual/ui/lua_cocos2dx_experimental_video_manual.cpp \
#                   ../manual/ui/lua_cocos2dx_ui_manual.cpp \
#                   ../auto/lua_cocos2dx_experimental_video_auto.cpp \
#                   ../auto/lua_cocos2dx_ui_auto.cpp
#
#quick
#LOCAL_SRC_FILES += ../../../../external/lua/quick/lua_cocos2dx_quick_manual.cpp \
#                   ../../../../external/lua/quick/LuaEventNode.cpp \
#                   ../../../../external/lua/quick/LuaNodeManager.cpp \
#                   ../../../../external/lua/quick/LuaTouchEventManager.cpp \
#                   ../../../../external/lua/quick/LuaTouchTargetNode.cpp
#
#extension
#LOCAL_SRC_FILES += ../manual/extension/lua_cocos2dx_extension_manual.cpp \
#                   ../auto/lua_cocos2dx_extension_auto.cpp \
#
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../../external/ruby/mruby \
                    $(LOCAL_PATH)/../../../../external/ruby/mruby/include \
                    $(LOCAL_PATH)/../../../../external/ruby/mruby/src \
                    $(LOCAL_PATH)/../../../2d \
                    $(LOCAL_PATH)/../../../3d \
                    $(LOCAL_PATH)/../../../network \
                    $(LOCAL_PATH)/../../../editor-support/cocosbuilder \
                    $(LOCAL_PATH)/../../../editor-support/cocostudio \
                    $(LOCAL_PATH)/../../../editor-support/cocostudio/ActionTimeline \
                    $(LOCAL_PATH)/../../../editor-support/spine \
                    $(LOCAL_PATH)/../../../ui \
                    $(LOCAL_PATH)/../../../../extensions \
                    $(LOCAL_PATH)/../auto \
                    $(LOCAL_PATH)/../manual \
                    $(LOCAL_PATH)/../manual/cocos2d \
                    $(LOCAL_PATH)/../manual/3d \
                    $(LOCAL_PATH)/../manual/cocosdenshion \
                    $(LOCAL_PATH)/../manual/audioengine \
                    $(LOCAL_PATH)/../manual/network \
                    $(LOCAL_PATH)/../manual/extension \
                    $(LOCAL_PATH)/../manual/cocostudio \
                    $(LOCAL_PATH)/../manual/cocosbuilder \
                    $(LOCAL_PATH)/../manual/spine \
                    $(LOCAL_PATH)/../manual/ui \
                    $(LOCAL_PATH)/../../../../external/xxtea \
                    $(LOCAL_PATH)/../../../.. \

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../../../external/ruby/mruby \
                           $(LOCAL_PATH)/../../../../external/ruby/mruby/include \
                           $(LOCAL_PATH)/../../../../external/ruby/mruby/src \
                           $(LOCAL_PATH)/../auto \
                           $(LOCAL_PATH)/../manual \
                           $(LOCAL_PATH)/../manual/cocos2d \
                           $(LOCAL_PATH)/../manual/3d \
                           $(LOCAL_PATH)/../manual/cocosdenshion \
                           $(LOCAL_PATH)/../manual/audioengine \
                           $(LOCAL_PATH)/../manual/network \
                           $(LOCAL_PATH)/../manual/cocosbuilder \
                           $(LOCAL_PATH)/../manual/cocostudio \
                           $(LOCAL_PATH)/../manual/spine \
                           $(LOCAL_PATH)/../manual/extension \
                           $(LOCAL_PATH)/../manual/ui \
                           $(LOCAL_PATH)/../../../..

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2d_ruby_android_static

LOCAL_STATIC_LIBRARIES := cocos2dx_static

include $(BUILD_STATIC_LIBRARY)

$(call import-module,.)
