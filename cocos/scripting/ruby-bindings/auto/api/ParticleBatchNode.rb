
--------------------------------
-- @module ParticleBatchNode
-- @extend Node,TextureProtocol
-- @parent_module CC

--------------------------------
-- 
-- @function [parent=#ParticleBatchNode] setTexture 
-- @param self
-- @param #CC::Texture2D texture
        
--------------------------------
--  disables a particle by inserting a 0'd quad into the texture atlas 
-- @function [parent=#ParticleBatchNode] disableParticle 
-- @param self
-- @param #int particleIndex
        
--------------------------------
-- 
-- @function [parent=#ParticleBatchNode] getTexture 
-- @param self
-- @return Texture2D#Texture2D ret (return value: CC::Texture2D)
        
--------------------------------
--  Sets the texture atlas used for drawing the quads 
-- @function [parent=#ParticleBatchNode] setTextureAtlas 
-- @param self
-- @param #CC::TextureAtlas atlas
        
--------------------------------
-- code<br>
-- When this function bound into js or lua,the parameter will be changed<br>
-- In js: var setBlendFunc(var src, var dst)<br>
-- endcode<br>
-- lua NA
-- @function [parent=#ParticleBatchNode] setBlendFunc 
-- @param self
-- @param #CC::BlendFunc blendFunc
        
--------------------------------
-- 
-- @function [parent=#ParticleBatchNode] removeAllChildrenWithCleanup 
-- @param self
-- @param #bool doCleanup
        
--------------------------------
--  Gets the texture atlas used for drawing the quads 
-- @function [parent=#ParticleBatchNode] getTextureAtlas 
-- @param self
-- @return TextureAtlas#TextureAtlas ret (return value: CC::TextureAtlas)
        
--------------------------------
-- js NA<br>
-- lua NA
-- @function [parent=#ParticleBatchNode] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: CC::BlendFunc)
        
--------------------------------
--  Inserts a child into the ParticleBatchNode 
-- @function [parent=#ParticleBatchNode] insertChild 
-- @param self
-- @param #CC::ParticleSystem system
-- @param #int index
        
--------------------------------
-- 
-- @function [parent=#ParticleBatchNode] removeChildAtIndex 
-- @param self
-- @param #int index
-- @param #bool doCleanup
        
--------------------------------
--  initializes the particle system with the name of a file on disk (for a list of supported formats look at the Texture2D class), a capacity of particles 
-- @function [parent=#ParticleBatchNode] create 
-- @param self
-- @param #string fileImage
-- @param #int capacity
-- @return ParticleBatchNode#ParticleBatchNode ret (return value: CC::ParticleBatchNode)
        
--------------------------------
--  initializes the particle system with Texture2D, a capacity of particles, which particle system to use 
-- @function [parent=#ParticleBatchNode] createWithTexture 
-- @param self
-- @param #CC::Texture2D tex
-- @param #int capacity
-- @return ParticleBatchNode#ParticleBatchNode ret (return value: CC::ParticleBatchNode)
        
return nil
