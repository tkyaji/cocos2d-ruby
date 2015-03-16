
--------------------------------
-- @module Speed
-- @extend Action
-- @parent_module CC

--------------------------------
-- 
-- @function [parent=#Speed] setInnerAction 
-- @param self
-- @param #CC::ActionInterval action
        
--------------------------------
--  alter the speed of the inner function in runtime 
-- @function [parent=#Speed] setSpeed 
-- @param self
-- @param #float speed
        
--------------------------------
-- 
-- @function [parent=#Speed] getInnerAction 
-- @param self
-- @return ActionInterval#ActionInterval ret (return value: CC::ActionInterval)
        
--------------------------------
-- 
-- @function [parent=#Speed] getSpeed 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
--  create the action 
-- @function [parent=#Speed] create 
-- @param self
-- @param #CC::ActionInterval action
-- @param #float speed
-- @return Speed#Speed ret (return value: CC::Speed)
        
return nil
