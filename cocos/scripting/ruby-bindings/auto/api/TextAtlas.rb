
--------------------------------
-- @module TextAtlas
-- @extend Widget
-- @parent_module CCUI

--------------------------------
-- Gets the string length of the label.<br>
-- Note: This length will be larger than the raw string length,<br>
-- if you want to get the raw string length, you should call this->getString().size() instead<br>
-- return  string length.
-- @function [parent=#TextAtlas] getStringLength 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#TextAtlas] getString 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#TextAtlas] setString 
-- @param self
-- @param #string value
        
--------------------------------
--  initializes the LabelAtlas with a string, a char map file(the atlas), the width and height of each element and the starting char of the atlas 
-- @function [parent=#TextAtlas] setProperty 
-- @param self
-- @param #string stringValue
-- @param #string charMapFile
-- @param #int itemWidth
-- @param #int itemHeight
-- @param #string startCharMap
        
--------------------------------
-- 
-- @function [parent=#TextAtlas] adaptRenderers 
-- @param self
        
--------------------------------
-- @overload self, string, string, int, int, string         
-- @overload self         
-- @function [parent=#TextAtlas] create
-- @param self
-- @param #string stringValue
-- @param #string charMapFile
-- @param #int itemWidth
-- @param #int itemHeight
-- @param #string startCharMap
-- @return TextAtlas#TextAtlas ret (return value: CCUI::TextAtlas)

--------------------------------
-- 
-- @function [parent=#TextAtlas] createInstance 
-- @param self
-- @return Ref#Ref ret (return value: CC::Ref)
        
--------------------------------
-- Default constructor
-- @function [parent=#TextAtlas] TextAtlas 
-- @param self
        
return nil
