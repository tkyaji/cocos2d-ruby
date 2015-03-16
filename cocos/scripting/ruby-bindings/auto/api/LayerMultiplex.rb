
--------------------------------
-- @module LayerMultiplex
-- @extend Layer
-- @parent_module CC

--------------------------------
--  release the current layer and switches to another layer indexed by n.<br>
-- The current (old) layer will be removed from it's parent with 'cleanup=true'.
-- @function [parent=#LayerMultiplex] switchToAndReleaseMe 
-- @param self
-- @param #int n
        
--------------------------------
-- 
-- @function [parent=#LayerMultiplex] addLayer 
-- @param self
-- @param #CC::Layer layer
        
--------------------------------
--  switches to a certain layer indexed by n.<br>
-- The current (old) layer will be removed from it's parent with 'cleanup=true'.
-- @function [parent=#LayerMultiplex] switchTo 
-- @param self
-- @param #int n
        
return nil
