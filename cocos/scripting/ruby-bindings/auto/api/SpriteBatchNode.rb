
--------------------------------
-- @module SpriteBatchNode
-- @extend Node,TextureProtocol
-- @parent_module CC

--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] appendChild 
-- @param self
-- @param #CC::Sprite sprite
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] addSpriteWithoutQuad 
-- @param self
-- @param #CC::Sprite child
-- @param #int z
-- @param #int aTag
-- @return SpriteBatchNode#SpriteBatchNode ret (return value: CC::SpriteBatchNode)
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] reorderBatch 
-- @param self
-- @param #bool reorder
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] removeAllChildrenWithCleanup 
-- @param self
-- @param #bool cleanup
        
--------------------------------
-- js NA<br>
-- lua NA
-- @function [parent=#SpriteBatchNode] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: CC::BlendFunc)
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] lowestAtlasIndexInChild 
-- @param self
-- @param #CC::Sprite sprite
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] atlasIndexForChild 
-- @param self
-- @param #CC::Sprite sprite
-- @param #int z
-- @return int#int ret (return value: int)
        
--------------------------------
--  sets the TextureAtlas object 
-- @function [parent=#SpriteBatchNode] setTextureAtlas 
-- @param self
-- @param #CC::TextureAtlas textureAtlas
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] getTexture 
-- @param self
-- @return Texture2D#Texture2D ret (return value: CC::Texture2D)
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] increaseAtlasCapacity 
-- @param self
        
--------------------------------
--  returns the TextureAtlas object 
-- @function [parent=#SpriteBatchNode] getTextureAtlas 
-- @param self
-- @return TextureAtlas#TextureAtlas ret (return value: CC::TextureAtlas)
        
--------------------------------
--  Inserts a quad at a certain index into the texture atlas. The Sprite won't be added into the children array.<br>
-- This method should be called only when you are dealing with very big AtlasSrite and when most of the Sprite won't be updated.<br>
-- For example: a tile map (TMXMap) or a label with lots of characters (LabelBMFont)
-- @function [parent=#SpriteBatchNode] insertQuadFromSprite 
-- @param self
-- @param #CC::Sprite sprite
-- @param #int index
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] setTexture 
-- @param self
-- @param #CC::Texture2D texture
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] rebuildIndexInOrder 
-- @param self
-- @param #CC::Sprite parent
-- @param #int index
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] highestAtlasIndexInChild 
-- @param self
-- @param #CC::Sprite sprite
-- @return int#int ret (return value: int)
        
--------------------------------
--  removes a child given a certain index. It will also cleanup the running actions depending on the cleanup parameter.<br>
-- warning Removing a child from a SpriteBatchNode is very slow
-- @function [parent=#SpriteBatchNode] removeChildAtIndex 
-- @param self
-- @param #int index
-- @param #bool doCleanup
        
--------------------------------
-- 
-- @function [parent=#SpriteBatchNode] removeSpriteFromAtlas 
-- @param self
-- @param #CC::Sprite sprite
        
--------------------------------
-- code<br>
-- When this function bound into js or lua,the parameter will be changed<br>
-- In js: var setBlendFunc(var src, var dst)<br>
-- endcode<br>
-- lua NA 
-- @function [parent=#SpriteBatchNode] setBlendFunc 
-- @param self
-- @param #CC::BlendFunc blendFunc
        
--------------------------------
--  creates a SpriteBatchNode with a file image (.png, .jpeg, .pvr, etc) and capacity of children.<br>
-- The capacity will be increased in 33% in runtime if it run out of space.<br>
-- The file will be loaded using the TextureMgr.
-- @function [parent=#SpriteBatchNode] create 
-- @param self
-- @param #string fileImage
-- @param #int capacity
-- @return SpriteBatchNode#SpriteBatchNode ret (return value: CC::SpriteBatchNode)
        
--------------------------------
--  creates a SpriteBatchNode with a texture2d and capacity of children.<br>
-- The capacity will be increased in 33% in runtime if it run out of space.
-- @function [parent=#SpriteBatchNode] createWithTexture 
-- @param self
-- @param #CC::Texture2D tex
-- @param #int capacity
-- @return SpriteBatchNode#SpriteBatchNode ret (return value: CC::SpriteBatchNode)
        
return nil
