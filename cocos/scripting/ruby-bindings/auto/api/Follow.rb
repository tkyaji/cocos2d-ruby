
--------------------------------
-- @module Follow
-- @extend Action
-- @parent_module CC

--------------------------------
--  alter behavior - turn on/off boundary 
-- @function [parent=#Follow] setBoundarySet 
-- @param self
-- @param #bool value
        
--------------------------------
-- 
-- @function [parent=#Follow] isBoundarySet 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Creates the action with a set boundary or with no boundary.<br>
-- param followedNode  The node to be followed.<br>
-- param rect  The boundary. If \p rect is equal to Rect::ZERO, it'll work<br>
-- with no boundary.
-- @function [parent=#Follow] create 
-- @param self
-- @param #CC::Node followedNode
-- @param #rect_table rect
-- @return Follow#Follow ret (return value: CC::Follow)
        
return nil
