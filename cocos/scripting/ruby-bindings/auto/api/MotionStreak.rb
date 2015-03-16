
--------------------------------
-- @module MotionStreak
-- @extend Node,TextureProtocol
-- @parent_module CC

--------------------------------
--  Remove all living segments of the ribbon 
-- @function [parent=#MotionStreak] reset 
-- @param self
        
--------------------------------
-- 
-- @function [parent=#MotionStreak] setTexture 
-- @param self
-- @param #CC::Texture2D texture
        
--------------------------------
-- 
-- @function [parent=#MotionStreak] getTexture 
-- @param self
-- @return Texture2D#Texture2D ret (return value: CC::Texture2D)
        
--------------------------------
--  color used for the tint 
-- @function [parent=#MotionStreak] tintWithColor 
-- @param self
-- @param #color3b_table colors
        
--------------------------------
-- js NA<br>
-- lua NA
-- @function [parent=#MotionStreak] setBlendFunc 
-- @param self
-- @param #CC::BlendFunc blendFunc
        
--------------------------------
-- 
-- @function [parent=#MotionStreak] setStartingPositionInitialized 
-- @param self
-- @param #bool bStartingPositionInitialized
        
--------------------------------
-- js NA<br>
-- lua NA
-- @function [parent=#MotionStreak] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: CC::BlendFunc)
        
--------------------------------
-- 
-- @function [parent=#MotionStreak] isStartingPositionInitialized 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
--  When fast mode is enabled, new points are added faster but with lower precision 
-- @function [parent=#MotionStreak] isFastMode 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#MotionStreak] setFastMode 
-- @param self
-- @param #bool bFastMode
        
--------------------------------
-- @overload self, float, float, float, color3b_table, CC::Texture2D         
-- @overload self, float, float, float, color3b_table, string         
-- @function [parent=#MotionStreak] create
-- @param self
-- @param #float fade
-- @param #float minSeg
-- @param #float stroke
-- @param #color3b_table color
-- @param #string path
-- @return MotionStreak#MotionStreak ret (return value: CC::MotionStreak)

return nil
