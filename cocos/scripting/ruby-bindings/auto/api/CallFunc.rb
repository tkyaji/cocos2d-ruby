
--------------------------------
-- @module CallFunc
-- @extend ActionInstant
-- @parent_module CC

--------------------------------
--  executes the callback 
-- @function [parent=#CallFunc] execute 
-- @param self
        
--------------------------------
-- 
-- @function [parent=#CallFunc] getTargetCallback 
-- @param self
-- @return Ref#Ref ret (return value: CC::Ref)
        
--------------------------------
-- 
-- @function [parent=#CallFunc] setTargetCallback 
-- @param self
-- @param #CC::Ref sel
        
--------------------------------
--  creates the action with the callback of type std::function<void()>.<br>
-- This is the preferred way to create the callback.<br>
-- When this funtion bound in js or lua ,the input param will be changed<br>
-- In js: var create(var func, var this, var [data]) or var create(var func)<br>
-- In lua:local create(local funcID)
-- @function [parent=#CallFunc] create 
-- @param self
-- @param #function func
-- @return CallFunc#CallFunc ret (return value: CC::CallFunc)
        
return nil
