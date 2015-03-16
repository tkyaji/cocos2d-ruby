
--------------------------------
-- @module Mesh
-- @extend Ref
-- @parent_module CC

--------------------------------
-- @overload self, CC::Texture2D         
-- @overload self, string         
-- @function [parent=#Mesh] setTexture
-- @param self
-- @param #string texPath

--------------------------------
-- 
-- @function [parent=#Mesh] getTexture 
-- @param self
-- @return Texture2D#Texture2D ret (return value: CC::Texture2D)
        
--------------------------------
-- name getter 
-- @function [parent=#Mesh] getName 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#Mesh] setBlendFunc 
-- @param self
-- @param #CC::BlendFunc blendFunc
        
--------------------------------
-- 
-- @function [parent=#Mesh] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: CC::BlendFunc)
        
--------------------------------
-- 
-- @function [parent=#Mesh] isVisible 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- visible getter and setter
-- @function [parent=#Mesh] setVisible 
-- @param self
-- @param #bool visible
        
return nil
