
--------------------------------
-- @module Sprite
-- @extend Node,TextureProtocol
-- @parent_module CC

--------------------------------
-- @overload self, CC::SpriteFrame         
-- @overload self, string         
-- @function [parent=#Sprite] setSpriteFrame
-- @param self
-- @param #string spriteFrameName

--------------------------------
-- @overload self, CC::Texture2D         
-- @overload self, string         
-- @function [parent=#Sprite] setTexture
-- @param self
-- @param #string filename

--------------------------------
--  returns the Texture2D object used by the sprite 
-- @function [parent=#Sprite] getTexture 
-- @param self
-- @return Texture2D#Texture2D ret (return value: CC::Texture2D)
        
--------------------------------
-- Sets whether the sprite should be flipped vertically or not.<br>
-- param flippedY true if the sprite should be flipped vertically, false otherwise.
-- @function [parent=#Sprite] setFlippedY 
-- @param self
-- @param #bool flippedY
        
--------------------------------
-- Sets whether the sprite should be flipped horizontally or not.<br>
-- param flippedX true if the sprite should be flipped horizontally, false otherwise.
-- @function [parent=#Sprite] setFlippedX 
-- @param self
-- @param #bool flippedX
        
--------------------------------
-- Returns the batch node object if this sprite is rendered by SpriteBatchNode<br>
-- return The SpriteBatchNode object if this sprite is rendered by SpriteBatchNode,<br>
-- nullptr if the sprite isn't used batch node.
-- @function [parent=#Sprite] getBatchNode 
-- @param self
-- @return SpriteBatchNode#SpriteBatchNode ret (return value: CC::SpriteBatchNode)
        
--------------------------------
-- Gets the offset position of the sprite. Calculated automatically by editors like Zwoptex.
-- @function [parent=#Sprite] getOffsetPosition 
-- @param self
-- @return vec2_table#vec2_table ret (return value: vec2_table)
        
--------------------------------
-- 
-- @function [parent=#Sprite] removeAllChildrenWithCleanup 
-- @param self
-- @param #bool cleanup
        
--------------------------------
-- Updates the quad according the rotation, position, scale values.
-- @function [parent=#Sprite] updateTransform 
-- @param self
        
--------------------------------
-- @overload self, rect_table, bool, size_table         
-- @overload self, rect_table         
-- @function [parent=#Sprite] setTextureRect
-- @param self
-- @param #rect_table rect
-- @param #bool rotated
-- @param #size_table untrimmedSize

--------------------------------
-- Returns whether or not a SpriteFrame is being displayed
-- @function [parent=#Sprite] isFrameDisplayed 
-- @param self
-- @param #CC::SpriteFrame frame
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Returns the index used on the TextureAtlas.
-- @function [parent=#Sprite] getAtlasIndex 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- Sets the batch node to sprite<br>
-- warning This method is not recommended for game developers. Sample code for using batch node<br>
-- code<br>
-- SpriteBatchNode *batch = SpriteBatchNode::create("Images/grossini_dance_atlas.png", 15);<br>
-- Sprite *sprite = Sprite::createWithTexture(batch->getTexture(), Rect(0, 0, 57, 57));<br>
-- batch->addChild(sprite);<br>
-- layer->addChild(batch);<br>
-- endcode
-- @function [parent=#Sprite] setBatchNode 
-- @param self
-- @param #CC::SpriteBatchNode spriteBatchNode
        
--------------------------------
-- js  NA<br>
-- lua NA
-- @function [parent=#Sprite] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: CC::BlendFunc)
        
--------------------------------
-- / @{/ @name Animation methods<br>
-- Changes the display frame with animation name and index.<br>
-- The animation name will be get from the AnimationCache
-- @function [parent=#Sprite] setDisplayFrameWithAnimationName 
-- @param self
-- @param #string animationName
-- @param #int frameIndex
        
--------------------------------
-- Sets the weak reference of the TextureAtlas when the sprite is rendered using via SpriteBatchNode
-- @function [parent=#Sprite] setTextureAtlas 
-- @param self
-- @param #CC::TextureAtlas textureAtlas
        
--------------------------------
-- Returns the current displayed frame.
-- @function [parent=#Sprite] getSpriteFrame 
-- @param self
-- @return SpriteFrame#SpriteFrame ret (return value: CC::SpriteFrame)
        
--------------------------------
-- Whether or not the Sprite needs to be updated in the Atlas.<br>
-- return true if the sprite needs to be updated in the Atlas, false otherwise.
-- @function [parent=#Sprite] isDirty 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Sets the index used on the TextureAtlas.<br>
-- warning Don't modify this value unless you know what you are doing
-- @function [parent=#Sprite] setAtlasIndex 
-- @param self
-- @param #int atlasIndex
        
--------------------------------
-- Makes the Sprite to be updated in the Atlas.
-- @function [parent=#Sprite] setDirty 
-- @param self
-- @param #bool dirty
        
--------------------------------
-- Returns whether or not the texture rectangle is rotated.
-- @function [parent=#Sprite] isTextureRectRotated 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Returns the rect of the Sprite in points
-- @function [parent=#Sprite] getTextureRect 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- / @{/ @name Functions inherited from TextureProtocol<br>
-- code<br>
-- When this function bound into js or lua,the parameter will be changed<br>
-- In js: var setBlendFunc(var src, var dst)<br>
-- In lua: local setBlendFunc(local src, local dst)<br>
-- endcode
-- @function [parent=#Sprite] setBlendFunc 
-- @param self
-- @param #CC::BlendFunc blendFunc
        
--------------------------------
-- Gets the weak reference of the TextureAtlas when the sprite is rendered using via SpriteBatchNode
-- @function [parent=#Sprite] getTextureAtlas 
-- @param self
-- @return TextureAtlas#TextureAtlas ret (return value: CC::TextureAtlas)
        
--------------------------------
-- Returns the flag which indicates whether the sprite is flipped horizontally or not.<br>
-- It only flips the texture of the sprite, and not the texture of the sprite's children.<br>
-- Also, flipping the texture doesn't alter the anchorPoint.<br>
-- If you want to flip the anchorPoint too, and/or to flip the children too use:<br>
-- sprite->setScaleX(sprite->getScaleX() * -1);<br>
-- return true if the sprite is flipped horizontally, false otherwise.
-- @function [parent=#Sprite] isFlippedX 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Return the flag which indicates whether the sprite is flipped vertically or not.<br>
-- It only flips the texture of the sprite, and not the texture of the sprite's children.<br>
-- Also, flipping the texture doesn't alter the anchorPoint.<br>
-- If you want to flip the anchorPoint too, and/or to flip the children too use:<br>
-- sprite->setScaleY(sprite->getScaleY() * -1);<br>
-- return true if the sprite is flipped vertically, false otherwise.
-- @function [parent=#Sprite] isFlippedY 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Sets the vertex rect.<br>
-- It will be called internally by setTextureRect.<br>
-- Useful if you want to create 2x images from SD images in Retina Display.<br>
-- Do not call it manually. Use setTextureRect instead.
-- @function [parent=#Sprite] setVertexRect 
-- @param self
-- @param #rect_table rect
        
--------------------------------
-- @overload self, string         
-- @overload self         
-- @overload self, string, rect_table         
-- @function [parent=#Sprite] create
-- @param self
-- @param #string filename
-- @param #rect_table rect
-- @return Sprite#Sprite ret (return value: CC::Sprite)

--------------------------------
-- @overload self, CC::Texture2D, rect_table, bool         
-- @overload self, CC::Texture2D         
-- @function [parent=#Sprite] createWithTexture
-- @param self
-- @param #CC::Texture2D texture
-- @param #rect_table rect
-- @param #bool rotated
-- @return Sprite#Sprite ret (return value: CC::Sprite)

--------------------------------
-- Creates a sprite with an sprite frame name.<br>
-- A SpriteFrame will be fetched from the SpriteFrameCache by spriteFrameName param.<br>
-- If the SpriteFrame doesn't exist it will raise an exception.<br>
-- param   spriteFrameName A null terminated string which indicates the sprite frame name.<br>
-- return  An autoreleased sprite object
-- @function [parent=#Sprite] createWithSpriteFrameName 
-- @param self
-- @param #string spriteFrameName
-- @return Sprite#Sprite ret (return value: CC::Sprite)
        
--------------------------------
-- Creates a sprite with an sprite frame.<br>
-- param   spriteFrame    A sprite frame which involves a texture and a rect<br>
-- return  An autoreleased sprite object
-- @function [parent=#Sprite] createWithSpriteFrame 
-- @param self
-- @param #CC::SpriteFrame spriteFrame
-- @return Sprite#Sprite ret (return value: CC::Sprite)
        
return nil
