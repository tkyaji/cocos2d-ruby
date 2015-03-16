
--------------------------------
-- @module MenuItemLabel
-- @extend MenuItem
-- @parent_module CC

--------------------------------
--  Gets the color that will be used to disable the item 
-- @function [parent=#MenuItemLabel] getDisabledColor 
-- @param self
-- @return color3b_table#color3b_table ret (return value: color3b_table)
        
--------------------------------
--  sets a new string to the inner label 
-- @function [parent=#MenuItemLabel] setString 
-- @param self
-- @param #string label
        
--------------------------------
--  Sets the label that is rendered. 
-- @function [parent=#MenuItemLabel] setLabel 
-- @param self
-- @param #CC::Node node
        
--------------------------------
--  Sets the color that will be used to disable the item 
-- @function [parent=#MenuItemLabel] setDisabledColor 
-- @param self
-- @param #color3b_table color
        
--------------------------------
--  Gets the label that is rendered. 
-- @function [parent=#MenuItemLabel] getLabel 
-- @param self
-- @return Node#Node ret (return value: CC::Node)
        
--------------------------------
-- @overload self, CC::Node         
-- @overload self, CC::Node, function         
-- @function [parent=#MenuItemLabel] create
-- @param self
-- @param #CC::Node label
-- @param #function callback
-- @return MenuItemLabel#MenuItemLabel ret (return value: CC::MenuItemLabel)

return nil
