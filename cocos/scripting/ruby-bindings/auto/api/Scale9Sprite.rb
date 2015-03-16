
--------------------------------
-- @module Scale9Sprite
-- @extend Node
-- @parent_module CCUI

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] disableCascadeColor 
-- @param self
        
--------------------------------
-- @overload self, CC::Sprite, rect_table, bool, vec2_table, size_table, rect_table         
-- @overload self, CC::Sprite, rect_table, bool, rect_table         
-- @function [parent=#Scale9Sprite] updateWithSprite
-- @param self
-- @param #CC::Sprite sprite
-- @param #rect_table rect
-- @param #bool rotated
-- @param #vec2_table offset
-- @param #size_table originalSize
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- Returns the flag which indicates whether the widget is flipped horizontally or not.<br>
-- It only flips the texture of the widget, and not the texture of the widget's children.<br>
-- Also, flipping the texture doesn't alter the anchorPoint.<br>
-- If you want to flip the anchorPoint too, and/or to flip the children too use:<br>
-- widget->setScaleX(sprite->getScaleX() * -1);<br>
-- return true if the widget is flipped horizontally, false otherwise.
-- @function [parent=#Scale9Sprite] isFlippedX 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setScale9Enabled 
-- @param self
-- @param #bool enabled
        
--------------------------------
-- Sets whether the widget should be flipped vertically or not.<br>
-- param bFlippedY true if the widget should be flipped vertically, false otherwise.
-- @function [parent=#Scale9Sprite] setFlippedY 
-- @param self
-- @param #bool flippedY
        
--------------------------------
-- Sets whether the widget should be flipped horizontally or not.<br>
-- param bFlippedX true if the widget should be flipped horizontally, false otherwise.
-- @function [parent=#Scale9Sprite] setFlippedX 
-- @param self
-- @param #bool flippedX
        
--------------------------------
-- Creates and returns a new sprite object with the specified cap insets.<br>
-- You use this method to add cap insets to a sprite or to change the existing<br>
-- cap insets of a sprite. In both cases, you get back a new image and the<br>
-- original sprite remains untouched.<br>
-- param capInsets The values to use for the cap insets.
-- @function [parent=#Scale9Sprite] resizableSpriteWithCapInsets 
-- @param self
-- @param #rect_table capInsets
-- @return Scale9Sprite#Scale9Sprite ret (return value: CCUI::Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] disableCascadeOpacity 
-- @param self
        
--------------------------------
-- since v3.4
-- @function [parent=#Scale9Sprite] setState 
-- @param self
-- @param #int state
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setInsetBottom 
-- @param self
-- @param #float bottomInset
        
--------------------------------
-- @overload self, string         
-- @overload self, string, rect_table         
-- @function [parent=#Scale9Sprite] initWithSpriteFrameName
-- @param self
-- @param #string spriteFrameName
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getSprite 
-- @param self
-- @return Sprite#Sprite ret (return value: CC::Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setInsetTop 
-- @param self
-- @param #float topInset
        
--------------------------------
-- @overload self, CC::Sprite, rect_table, bool, rect_table         
-- @overload self         
-- @overload self, CC::Sprite, rect_table, rect_table         
-- @overload self, CC::Sprite, rect_table, bool, vec2_table, size_table, rect_table         
-- @function [parent=#Scale9Sprite] init
-- @param self
-- @param #CC::Sprite sprite
-- @param #rect_table rect
-- @param #bool rotated
-- @param #vec2_table offset
-- @param #size_table originalSize
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setPreferredSize 
-- @param self
-- @param #size_table size
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setSpriteFrame 
-- @param self
-- @param #CC::SpriteFrame spriteFrame
-- @param #rect_table capInsets
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getInsetBottom 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getCapInsets 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] isScale9Enabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getInsetRight 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getOriginalSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- @overload self, string, rect_table         
-- @overload self, string, rect_table, rect_table         
-- @overload self, rect_table, string         
-- @overload self, string         
-- @function [parent=#Scale9Sprite] initWithFile
-- @param self
-- @param #string file
-- @param #rect_table rect
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getInsetTop 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setInsetLeft 
-- @param self
-- @param #float leftInset
        
--------------------------------
-- @overload self, CC::SpriteFrame         
-- @overload self, CC::SpriteFrame, rect_table         
-- @function [parent=#Scale9Sprite] initWithSpriteFrame
-- @param self
-- @param #CC::SpriteFrame spriteFrame
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getPreferredSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setCapInsets 
-- @param self
-- @param #rect_table rect
        
--------------------------------
-- Return the flag which indicates whether the widget is flipped vertically or not.<br>
-- It only flips the texture of the widget, and not the texture of the widget's children.<br>
-- Also, flipping the texture doesn't alter the anchorPoint.<br>
-- If you want to flip the anchorPoint too, and/or to flip the children too use:<br>
-- widget->setScaleY(widget->getScaleY() * -1);<br>
-- return true if the widget is flipped vertically, flase otherwise.
-- @function [parent=#Scale9Sprite] isFlippedY 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getInsetLeft 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setInsetRight 
-- @param self
-- @param #float rightInset
        
--------------------------------
-- @overload self, string, rect_table, rect_table         
-- @overload self         
-- @overload self, rect_table, string         
-- @overload self, string, rect_table         
-- @overload self, string         
-- @function [parent=#Scale9Sprite] create
-- @param self
-- @param #string file
-- @param #rect_table rect
-- @param #rect_table capInsets
-- @return Scale9Sprite#Scale9Sprite ret (return value: CCUI::Scale9Sprite)

--------------------------------
-- @overload self, string, rect_table         
-- @overload self, string         
-- @function [parent=#Scale9Sprite] createWithSpriteFrameName
-- @param self
-- @param #string spriteFrameName
-- @param #rect_table capInsets
-- @return Scale9Sprite#Scale9Sprite ret (return value: CCUI::Scale9Sprite)

--------------------------------
-- @overload self, CC::SpriteFrame, rect_table         
-- @overload self, CC::SpriteFrame         
-- @function [parent=#Scale9Sprite] createWithSpriteFrame
-- @param self
-- @param #CC::SpriteFrame spriteFrame
-- @param #rect_table capInsets
-- @return Scale9Sprite#Scale9Sprite ret (return value: CCUI::Scale9Sprite)

--------------------------------
-- js ctor
-- @function [parent=#Scale9Sprite] Scale9Sprite 
-- @param self
        
return nil
