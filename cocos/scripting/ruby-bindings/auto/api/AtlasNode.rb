
--------------------------------
-- @module AtlasNode
-- @extend Node,TextureProtocol
-- @parent_module CC

--------------------------------
--  updates the Atlas (indexed vertex array).<br>
-- Shall be overridden in subclasses
-- @function [parent=#AtlasNode] updateAtlasValues 
-- @param self
        
--------------------------------
-- 
-- @function [parent=#AtlasNode] getTexture 
-- @param self
-- @return Texture2D#Texture2D ret (return value: CC::Texture2D)
        
--------------------------------
-- 
-- @function [parent=#AtlasNode] setTextureAtlas 
-- @param self
-- @param #CC::TextureAtlas textureAtlas
        
--------------------------------
-- code<br>
-- When this function bound into js or lua,the parameter will be changed<br>
-- In js: var setBlendFunc(var src, var dst)<br>
-- endcode<br>
-- lua NA
-- @function [parent=#AtlasNode] setBlendFunc 
-- @param self
-- @param #CC::BlendFunc blendFunc
        
--------------------------------
-- 
-- @function [parent=#AtlasNode] getTextureAtlas 
-- @param self
-- @return TextureAtlas#TextureAtlas ret (return value: CC::TextureAtlas)
        
--------------------------------
-- js NA<br>
-- lua NA
-- @function [parent=#AtlasNode] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: CC::BlendFunc)
        
--------------------------------
-- 
-- @function [parent=#AtlasNode] getQuadsToDraw 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#AtlasNode] setTexture 
-- @param self
-- @param #CC::Texture2D texture
        
--------------------------------
-- 
-- @function [parent=#AtlasNode] setQuadsToDraw 
-- @param self
-- @param #int quadsToDraw
        
--------------------------------
--  creates a AtlasNode  with an Atlas file the width and height of each item and the quantity of items to render
-- @function [parent=#AtlasNode] create 
-- @param self
-- @param #string filename
-- @param #int tileWidth
-- @param #int tileHeight
-- @param #int itemsToRender
-- @return AtlasNode#AtlasNode ret (return value: CC::AtlasNode)
        
return nil
