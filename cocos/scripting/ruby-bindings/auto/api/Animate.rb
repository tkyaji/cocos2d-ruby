
--------------------------------
-- @module Animate
-- @extend ActionInterval
-- @parent_module CC

--------------------------------
-- @overload self         
-- @overload self         
-- @function [parent=#Animate] getAnimation
-- @param self
-- @return Animation#Animation ret (return value: CC::Animation)

--------------------------------
--  sets the Animation object to be animated 
-- @function [parent=#Animate] setAnimation 
-- @param self
-- @param #CC::Animation animation
        
--------------------------------
--  creates the action with an Animation and will restore the original frame when the animation is over 
-- @function [parent=#Animate] create 
-- @param self
-- @param #CC::Animation animation
-- @return Animate#Animate ret (return value: CC::Animate)
        
return nil
