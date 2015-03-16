set(cocos_root ${Cocos2d-X_SOURCE_DIR})

if(WINDOWS)
  add_definitions(-DLUASOCKET_INET_ATON -DLUASOCKET_INET_PTON)
endif()

include_directories(
  ${cocos_root}/external/ruby/mruby
  ${cocos_root}/external/ruby
  ${cocos_root}/external/xxtea
  ${cocos_root}/external
  ${cocos_root}/cocos
  ${cocos_root}/cocos/ui
  ${cocos_root}/cocos/2d
  ${cocos_root}/cocos/3d
  ${cocos_root}/cocos/editor-support/spine
  ${cocos_root}/cocos/editor-support/cocostudio
  ${cocos_root}/cocos/editor-support/cocostudio/ActionTimeline
  ${cocos_root}/cocos/editor-support/cocosbuilder
  ${cocos_root}/cocos/editor-support
  ${cocos_root}/cocos/platform
  ${cocos_root}/cocos/audio/include
  manual
  manual/extension
  manual/cocostudio
  manual/ui
  manual/cocos2d
  auto
)

file(GLOB ruby_cocos2d_source_files
    "${cocos_root}/external/ruby/mruby/src/*.c"
    "${cocos_root}/external/xxtea/xxtea.cpp"
    )

list(APPEND ruby_cocos2d_source_files
        ${cocos_root}/external/ruby/mruby/mrbgems/gem_init.c
        ${cocos_root}/external/ruby/mruby/mrbgems/mruby-print/gem_init.c
        ${cocos_root}/external/ruby/mruby/mrbgems/mruby-print/src/print.c
        ${cocos_root}/external/ruby/mruby/mrblib/mrblib.c
	)

if(UNIX)
    # because we have -std=c99
    add_definitions(-D_POSIX_C_SOURCE=200809L)
    if(LINUX)
        add_definitions(-D_BSD_SOURCE)
    endif()
    if(APPLE)
        add_definitions(-D_DARWIN_C_SOURCE)
    endif()
endif()

set(ruby_bindings_manual_files
    manual/CCLuaBridge.cpp
    manual/RubyEngine.cpp
    manual/ruby_global_manual.cpp
    )

set(ruby_bindings_auto_files
    auto/ruby_cocos2dx_auto.cpp
    )

set(ruby_bindings_files ${ruby_cocos2d_source_files} ${ruby_bindings_manual_files} ${ruby_bindings_auto_files})

add_library(rubycocos2d ${ruby_bindings_files})
target_link_libraries(rubycocos2d cocos2d)
set_target_properties(rubycocos2d
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
)
