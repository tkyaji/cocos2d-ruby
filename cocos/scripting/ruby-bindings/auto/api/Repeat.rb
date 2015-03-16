
--------------------------------
-- @module Repeat
-- @extend ActionInterval
-- @parent_module CC

--------------------------------
-- 
-- @function [parent=#Repeat] setInnerAction 
-- @param self
-- @param #CC::FiniteTimeAction action
        
--------------------------------
-- 
-- @function [parent=#Repeat] getInnerAction 
-- @param self
-- @return FiniteTimeAction#FiniteTimeAction ret (return value: CC::FiniteTimeAction)
        
--------------------------------
--  creates a Repeat action. Times is an unsigned integer between 1 and pow(2,30) 
-- @function [parent=#Repeat] create 
-- @param self
-- @param #CC::FiniteTimeAction action
-- @param #unsigned int times
-- @return Repeat#Repeat ret (return value: CC::Repeat)
        
return nil
