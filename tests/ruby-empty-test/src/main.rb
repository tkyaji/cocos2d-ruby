require "HelloWorld"

def main
  # size define
  resources = {
    small: {
      size: {w: 480, h: 320},
      directory: "res/iphone"
    },
    medium: {
      size: {w: 1024, h: 768},
      directory: "res/ipad"
    },
    large: {
      size: {w: 2048, h: 1536},
      directory: "res/ipadhd"
    }
  }
  design_resolution_size = resources[:small][:size]

  director = CC::Director.get_instance
  glview = director.get_open_glview
  if ! glview
    glview = CC::GLViewImpl.create("Ruby Empty Test")
    director.set_open_glview(glview)
  end

  glview.set_design_resolution_size(design_resolution_size[:w], design_resolution_size[:h], ResolutionPolicy.NO_BORDER)

  frame_size = glview.get_frame_size
  ssize = resources[:small][:size]
  msize = resources[:medium][:size]

  target_res = resources[:small]
  if frame_size.height > msize[:h]
    target_res = resources[:large]
  elsif frame_size.height > ssize[:h]
    target_res = resources[:medium]
  end
  target_size = target_res[:size]
  director.set_content_scale_factor([target_size[:h] / design_resolution_size[:h], target_size[:w] / design_resolution_size[:w]].min)

  futils = CC::FileUtils.get_instance
  futils.add_search_path(target_res[:directory])

  director.set_display_stats(true)
  director.set_animation_interval(1.0 / 60)

  scene = HelloWorld.scene
  director.run_with_scene(scene)
end

main
