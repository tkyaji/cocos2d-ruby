
--------------------------------
-- @module RichText
-- @extend Widget
-- @parent_module CCUI

--------------------------------
-- 
-- @function [parent=#RichText] insertElement 
-- @param self
-- @param #CCUI::RichElement element
-- @param #int index
        
--------------------------------
-- 
-- @function [parent=#RichText] setAnchorPoint 
-- @param self
-- @param #vec2_table pt
        
--------------------------------
-- 
-- @function [parent=#RichText] pushBackElement 
-- @param self
-- @param #CCUI::RichElement element
        
--------------------------------
-- 
-- @function [parent=#RichText] ignoreContentAdaptWithSize 
-- @param self
-- @param #bool ignore
        
--------------------------------
-- 
-- @function [parent=#RichText] setVerticalSpace 
-- @param self
-- @param #float space
        
--------------------------------
-- 
-- @function [parent=#RichText] formatText 
-- @param self
        
--------------------------------
-- @overload self, CCUI::RichElement         
-- @overload self, int         
-- @function [parent=#RichText] removeElement
-- @param self
-- @param #int index

--------------------------------
-- 
-- @function [parent=#RichText] create 
-- @param self
-- @return RichText#RichText ret (return value: CCUI::RichText)
        
--------------------------------
-- 
-- @function [parent=#RichText] RichText 
-- @param self
        
return nil
