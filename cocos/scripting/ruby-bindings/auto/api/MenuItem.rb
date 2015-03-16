
--------------------------------
-- @module MenuItem
-- @extend Node
-- @parent_module CC

--------------------------------
--  enables or disables the item 
-- @function [parent=#MenuItem] setEnabled 
-- @param self
-- @param #bool value
        
--------------------------------
--  Activate the item 
-- @function [parent=#MenuItem] activate 
-- @param self
        
--------------------------------
--  returns whether or not the item is enabled 
-- @function [parent=#MenuItem] isEnabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
--  The item was selected (not activated), similar to "mouse-over" 
-- @function [parent=#MenuItem] selected 
-- @param self
        
--------------------------------
--  returns whether or not the item is selected 
-- @function [parent=#MenuItem] isSelected 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
--  set the callback to the menu item<br>
-- code<br>
-- In js,can contain two params,the second param is jsptr<br>
-- endcode<br>
-- lua NA
-- @function [parent=#MenuItem] setCallback 
-- @param self
-- @param #function callback
        
--------------------------------
--  The item was unselected 
-- @function [parent=#MenuItem] unselected 
-- @param self
        
--------------------------------
--  Returns the outside box 
-- @function [parent=#MenuItem] rect 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- @overload self, function         
-- @overload self         
-- @function [parent=#MenuItem] create
-- @param self
-- @param #function callback
-- @return MenuItem#MenuItem ret (return value: CC::MenuItem)

return nil
