
--------------------------------
-- @module ScrollView
-- @extend Layout
-- @parent_module CCUI

--------------------------------
-- Scroll inner container to top boundary of scrollview.
-- @function [parent=#ScrollView] scrollToTop 
-- @param self
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Scroll inner container to horizontal percent position of scrollview.
-- @function [parent=#ScrollView] scrollToPercentHorizontal 
-- @param self
-- @param #float percent
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- 
-- @function [parent=#ScrollView] isInertiaScrollEnabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Scroll inner container to both direction percent position of scrollview.
-- @function [parent=#ScrollView] scrollToPercentBothDirection 
-- @param self
-- @param #vec2_table percent
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Gets scroll direction of scrollview.<br>
-- see Direction      Direction::VERTICAL means vertical scroll, Direction::HORIZONTAL means horizontal scroll<br>
-- return Direction
-- @function [parent=#ScrollView] getDirection 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- Scroll inner container to bottom and left boundary of scrollview.
-- @function [parent=#ScrollView] scrollToBottomLeft 
-- @param self
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Gets inner container of scrollview.<br>
-- Inner container is the container of scrollview's children.<br>
-- return inner container.
-- @function [parent=#ScrollView] getInnerContainer 
-- @param self
-- @return Layout#Layout ret (return value: CCUI::Layout)
        
--------------------------------
-- Move inner container to bottom boundary of scrollview.
-- @function [parent=#ScrollView] jumpToBottom 
-- @param self
        
--------------------------------
-- Changes scroll direction of scrollview.<br>
-- see Direction      Direction::VERTICAL means vertical scroll, Direction::HORIZONTAL means horizontal scroll<br>
-- param dir
-- @function [parent=#ScrollView] setDirection 
-- @param self
-- @param #int dir
        
--------------------------------
-- Scroll inner container to top and left boundary of scrollview.
-- @function [parent=#ScrollView] scrollToTopLeft 
-- @param self
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Move inner container to top and right boundary of scrollview.
-- @function [parent=#ScrollView] jumpToTopRight 
-- @param self
        
--------------------------------
-- Move inner container to bottom and left boundary of scrollview.
-- @function [parent=#ScrollView] jumpToBottomLeft 
-- @param self
        
--------------------------------
-- Changes inner container size of scrollview.<br>
-- Inner container size must be larger than or equal scrollview's size.<br>
-- param inner container size.
-- @function [parent=#ScrollView] setInnerContainerSize 
-- @param self
-- @param #size_table size
        
--------------------------------
-- Gets inner container size of scrollview.<br>
-- Inner container size must be larger than or equal scrollview's size.<br>
-- return inner container size.
-- @function [parent=#ScrollView] getInnerContainerSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- 
-- @function [parent=#ScrollView] isBounceEnabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Move inner container to vertical percent position of scrollview.
-- @function [parent=#ScrollView] jumpToPercentVertical 
-- @param self
-- @param #float percent
        
--------------------------------
-- 
-- @function [parent=#ScrollView] addEventListener 
-- @param self
-- @param #function callback
        
--------------------------------
-- 
-- @function [parent=#ScrollView] setInertiaScrollEnabled 
-- @param self
-- @param #bool enabled
        
--------------------------------
-- Move inner container to top and left boundary of scrollview.
-- @function [parent=#ScrollView] jumpToTopLeft 
-- @param self
        
--------------------------------
-- Move inner container to horizontal percent position of scrollview.
-- @function [parent=#ScrollView] jumpToPercentHorizontal 
-- @param self
-- @param #float percent
        
--------------------------------
-- Move inner container to bottom and right boundary of scrollview.
-- @function [parent=#ScrollView] jumpToBottomRight 
-- @param self
        
--------------------------------
-- 
-- @function [parent=#ScrollView] setBounceEnabled 
-- @param self
-- @param #bool enabled
        
--------------------------------
-- Move inner container to top boundary of scrollview.
-- @function [parent=#ScrollView] jumpToTop 
-- @param self
        
--------------------------------
-- Scroll inner container to left boundary of scrollview.
-- @function [parent=#ScrollView] scrollToLeft 
-- @param self
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Move inner container to both direction percent position of scrollview.
-- @function [parent=#ScrollView] jumpToPercentBothDirection 
-- @param self
-- @param #vec2_table percent
        
--------------------------------
-- Scroll inner container to vertical percent position of scrollview.
-- @function [parent=#ScrollView] scrollToPercentVertical 
-- @param self
-- @param #float percent
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Scroll inner container to bottom boundary of scrollview.
-- @function [parent=#ScrollView] scrollToBottom 
-- @param self
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Scroll inner container to bottom and right boundary of scrollview.
-- @function [parent=#ScrollView] scrollToBottomRight 
-- @param self
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Move inner container to left boundary of scrollview.
-- @function [parent=#ScrollView] jumpToLeft 
-- @param self
        
--------------------------------
-- Scroll inner container to right boundary of scrollview.
-- @function [parent=#ScrollView] scrollToRight 
-- @param self
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Move inner container to right boundary of scrollview.
-- @function [parent=#ScrollView] jumpToRight 
-- @param self
        
--------------------------------
-- Scroll inner container to top and right boundary of scrollview.
-- @function [parent=#ScrollView] scrollToTopRight 
-- @param self
-- @param #float time
-- @param #bool attenuated
        
--------------------------------
-- Allocates and initializes.
-- @function [parent=#ScrollView] create 
-- @param self
-- @return ScrollView#ScrollView ret (return value: CCUI::ScrollView)
        
--------------------------------
-- 
-- @function [parent=#ScrollView] createInstance 
-- @param self
-- @return Ref#Ref ret (return value: CC::Ref)
        
--------------------------------
-- Default constructor
-- @function [parent=#ScrollView] ScrollView 
-- @param self
        
return nil
