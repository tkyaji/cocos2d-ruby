
--------------------------------
-- @module ClippingNode
-- @extend Node
-- @parent_module CC

--------------------------------
--  If stencil has no childre it will not be drawn.<br>
-- If you have custom stencil-based node with stencil drawing mechanics other then children-based,<br>
-- then this method should return true every time you wish stencil to be visited.<br>
-- By default returns true if has any children attached.
-- @function [parent=#ClippingNode] hasContent 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#ClippingNode] setInverted 
-- @param self
-- @param #bool inverted
        
--------------------------------
-- 
-- @function [parent=#ClippingNode] setStencil 
-- @param self
-- @param #CC::Node stencil
        
--------------------------------
--  The alpha threshold.<br>
-- The content is drawn only where the stencil have pixel with alpha greater than the alphaThreshold.<br>
-- Should be a float between 0 and 1.<br>
-- This default to 1 (so alpha test is disabled).
-- @function [parent=#ClippingNode] getAlphaThreshold 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
--  The Node to use as a stencil to do the clipping.<br>
-- The stencil node will be retained.<br>
-- This default to nil.
-- @function [parent=#ClippingNode] getStencil 
-- @param self
-- @return Node#Node ret (return value: CC::Node)
        
--------------------------------
-- 
-- @function [parent=#ClippingNode] setAlphaThreshold 
-- @param self
-- @param #float alphaThreshold
        
--------------------------------
--  Inverted. If this is set to true,<br>
-- the stencil is inverted, so the content is drawn where the stencil is NOT drawn.<br>
-- This default to false.
-- @function [parent=#ClippingNode] isInverted 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @overload self, CC::Node         
-- @overload self         
-- @function [parent=#ClippingNode] create
-- @param self
-- @param #CC::Node stencil
-- @return ClippingNode#ClippingNode ret (return value: CC::ClippingNode)

return nil
