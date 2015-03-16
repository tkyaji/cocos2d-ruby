
--------------------------------
-- @module MenuItemToggle
-- @extend MenuItem
-- @parent_module CC

--------------------------------
--  Sets the array that contains the subitems. 
-- @function [parent=#MenuItemToggle] setSubItems 
-- @param self
-- @param #array_table items
        
--------------------------------
-- @overload self         
-- @overload self         
-- @function [parent=#MenuItemToggle] getSubItems
-- @param self
-- @return array_table#array_table ret (return value: array_table)

--------------------------------
--  Gets the index of the selected item 
-- @function [parent=#MenuItemToggle] getSelectedIndex 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
--  add more menu item 
-- @function [parent=#MenuItemToggle] addSubItem 
-- @param self
-- @param #CC::MenuItem item
        
--------------------------------
--  return the selected item 
-- @function [parent=#MenuItemToggle] getSelectedItem 
-- @param self
-- @return MenuItem#MenuItem ret (return value: CC::MenuItem)
        
--------------------------------
--  Sets the index of the selected item 
-- @function [parent=#MenuItemToggle] setSelectedIndex 
-- @param self
-- @param #unsigned int index
        
--------------------------------
-- @overload self, CC::MenuItem         
-- @overload self         
-- @function [parent=#MenuItemToggle] create
-- @param self
-- @param #CC::MenuItem item
-- @return MenuItemToggle#MenuItemToggle ret (return value: CC::MenuItemToggle)

--------------------------------
-- @overload self, function, CC::MenuItem         
-- @overload self, function, array_table         
-- @function [parent=#MenuItemToggle] createWithCallback
-- @param self
-- @param #function callback
-- @param #array_table menuItems
-- @return MenuItemToggle#MenuItemToggle ret (return value: CC::MenuItemToggle)

return nil
