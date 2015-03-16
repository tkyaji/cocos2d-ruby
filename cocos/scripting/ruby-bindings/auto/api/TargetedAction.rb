
--------------------------------
-- @module TargetedAction
-- @extend ActionInterval
-- @parent_module CC

--------------------------------
-- @overload self         
-- @overload self         
-- @function [parent=#TargetedAction] getForcedTarget
-- @param self
-- @return Node#Node ret (return value: CC::Node)

--------------------------------
--  Sets the target that the action will be forced to run with 
-- @function [parent=#TargetedAction] setForcedTarget 
-- @param self
-- @param #CC::Node forcedTarget
        
--------------------------------
--  Create an action with the specified action and forced target 
-- @function [parent=#TargetedAction] create 
-- @param self
-- @param #CC::Node target
-- @param #CC::FiniteTimeAction action
-- @return TargetedAction#TargetedAction ret (return value: CC::TargetedAction)
        
return nil
