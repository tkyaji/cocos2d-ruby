class HelloWorld < CC::Layer
  include CC

  TITLE_FONT_SIZE = 20;

  def self.scene
    # 'scene' is an autorelease object
    scene = Scene.create

    # 'layer' is an autorelease object
    layer = HelloWorld.create

    #add layer as a child to scene
    scene.add_child(layer)

    # return the scene
    return scene
  end

  def initialize
    init
  end

  def init

    director = Director.get_instance
    visible_size = director.get_visible_size
    visible_vec2 = Vec2.new(visible_size.width, visible_size.height)
    origin = director.get_visible_origin

    # 1. add a menu item with "X" image, which is clicked to quit the program
    #    you may modify it.

    # add a "close" icon to exit the progress. it's an autorelease object
    close_item = MenuItemImage.create("CloseNormal.png", "CloseSelected.png", Proc.new {|sender|
      p "Exit button clicked"
    })
    content_size = close_item.get_content_size
    content_vec2 = Vec2.new(content_size.width, content_size.height)
    close_item.set_position(origin + visible_vec2 - content_vec2 / 2)

    # create menu, it's an autorelease object
    menu = Menu.create(close_item)
    menu.set_position(Vec2.ZERO)
    self.add_child(menu, 1)

    # 2. add your codes below...

    # add a label shows "Hello World"
    # create and initialize a label

    label = Label::create_with_system_font("Hello World", "Arial", TITLE_FONT_SIZE)
    # position the label on the center of the screen
    label.set_position(origin.x + visible_size.width / 2, origin.y + visible_size.height - label.get_content_size.height)

    # add the label as a child to this layer
    self.add_child(label, 1)

    # add "HelloWorld" splash screen"
    sprite = Sprite.create("HelloWorld.png")

    # position the sprite on the center of the screen

    tmp_size = visible_size / 2
    sprite.set_position(Vec2.new(tmp_size.width, tmp_size.height) + origin)

    # add the sprite as a child to this layer
    self.add_child(sprite)
  end
end
