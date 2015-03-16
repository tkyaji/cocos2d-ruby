
--------------------------------
-- @module Sprite3D
-- @extend Node,BlendProtocol
-- @parent_module CC

--------------------------------
-- 
-- @function [parent=#Sprite3D] isForceDepthWrite 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Sprite3D] setCullFaceEnabled 
-- @param self
-- @param #bool enable
        
--------------------------------
-- @overload self, CC::Texture2D         
-- @overload self, string         
-- @function [parent=#Sprite3D] setTexture
-- @param self
-- @param #string texFile

--------------------------------
-- 
-- @function [parent=#Sprite3D] getLightMask 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- remove all attach nodes
-- @function [parent=#Sprite3D] removeAllAttachNode 
-- @param self
        
--------------------------------
-- get mesh
-- @function [parent=#Sprite3D] getMesh 
-- @param self
-- @return Mesh#Mesh ret (return value: CC::Mesh)
        
--------------------------------
-- 
-- @function [parent=#Sprite3D] setCullFace 
-- @param self
-- @param #unsigned int cullFace
        
--------------------------------
--  light mask getter & setter, light works only when _lightmask & light's flag is true, default value of _lightmask is 0xffff 
-- @function [parent=#Sprite3D] setLightMask 
-- @param self
-- @param #unsigned int mask
        
--------------------------------
-- 
-- @function [parent=#Sprite3D] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: CC::BlendFunc)
        
--------------------------------
--  get mesh count 
-- @function [parent=#Sprite3D] getMeshCount 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- remove attach node
-- @function [parent=#Sprite3D] removeAttachNode 
-- @param self
-- @param #string boneName
        
--------------------------------
-- 
-- @function [parent=#Sprite3D] getSkeleton 
-- @param self
-- @return Skeleton3D#Skeleton3D ret (return value: CC::Skeleton3D)
        
--------------------------------
-- get Mesh by index
-- @function [parent=#Sprite3D] getMeshByIndex 
-- @param self
-- @param #int index
-- @return Mesh#Mesh ret (return value: CC::Mesh)
        
--------------------------------
-- Force to write to depth buffer, this is useful if you want to achieve effects like fading.
-- @function [parent=#Sprite3D] setForceDepthWrite 
-- @param self
-- @param #bool value
        
--------------------------------
-- get Mesh by Name, it returns the first one if there are more than one mesh with the same name 
-- @function [parent=#Sprite3D] getMeshByName 
-- @param self
-- @param #string name
-- @return Mesh#Mesh ret (return value: CC::Mesh)
        
--------------------------------
-- get AttachNode by bone name, return nullptr if not exist
-- @function [parent=#Sprite3D] getAttachNode 
-- @param self
-- @param #string boneName
-- @return AttachNode#AttachNode ret (return value: CC::AttachNode)
        
--------------------------------
-- @overload self, string         
-- @overload self         
-- @overload self, string, string         
-- @function [parent=#Sprite3D] create
-- @param self
-- @param #string modelPath
-- @param #string texturePath
-- @return Sprite3D#Sprite3D ret (return value: CC::Sprite3D)

--------------------------------
-- @overload self, string, string, function, void         
-- @overload self, string, function, void         
-- @function [parent=#Sprite3D] createAsync
-- @param self
-- @param #string modelPath
-- @param #string texturePath
-- @param #function callback
-- @param #void callbackparam

return nil
