
--------------------------------
-- @module MenuItemSprite
-- @extend MenuItem
-- @parent_module CC

--------------------------------
-- 
-- @function [parent=#MenuItemSprite] setEnabled 
-- @param self
-- @param #bool bEnabled
        
--------------------------------
-- since v0.99.5
-- @function [parent=#MenuItemSprite] selected 
-- @param self
        
--------------------------------
--  Sets the image used when the item is not selected 
-- @function [parent=#MenuItemSprite] setNormalImage 
-- @param self
-- @param #CC::Node image
        
--------------------------------
--  Sets the image used when the item is disabled 
-- @function [parent=#MenuItemSprite] setDisabledImage 
-- @param self
-- @param #CC::Node image
        
--------------------------------
--  Sets the image used when the item is selected 
-- @function [parent=#MenuItemSprite] setSelectedImage 
-- @param self
-- @param #CC::Node image
        
--------------------------------
--  Gets the image used when the item is disabled 
-- @function [parent=#MenuItemSprite] getDisabledImage 
-- @param self
-- @return Node#Node ret (return value: CC::Node)
        
--------------------------------
--  Gets the image used when the item is selected 
-- @function [parent=#MenuItemSprite] getSelectedImage 
-- @param self
-- @return Node#Node ret (return value: CC::Node)
        
--------------------------------
--  Gets the image used when the item is not selected 
-- @function [parent=#MenuItemSprite] getNormalImage 
-- @param self
-- @return Node#Node ret (return value: CC::Node)
        
--------------------------------
-- 
-- @function [parent=#MenuItemSprite] unselected 
-- @param self
        
--------------------------------
-- @overload self, CC::Node, CC::Node, function         
-- @overload self, CC::Node, CC::Node, CC::Node         
-- @overload self, CC::Node, CC::Node, CC::Node, function         
-- @function [parent=#MenuItemSprite] create
-- @param self
-- @param #CC::Node normalSprite
-- @param #CC::Node selectedSprite
-- @param #CC::Node disabledSprite
-- @param #function callback
-- @return MenuItemSprite#MenuItemSprite ret (return value: CC::MenuItemSprite)

return nil
