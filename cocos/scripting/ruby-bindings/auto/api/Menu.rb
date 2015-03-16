
--------------------------------
-- @module Menu
-- @extend Layer
-- @parent_module CC

--------------------------------
-- 
-- @function [parent=#Menu] setEnabled 
-- @param self
-- @param #bool value
        
--------------------------------
--  align items vertically 
-- @function [parent=#Menu] alignItemsVertically 
-- @param self
        
--------------------------------
-- 
-- @function [parent=#Menu] isEnabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Menu] alignItemsInRowsWithArray 
-- @param self
-- @param #array_table columns
        
--------------------------------
--  align items horizontally 
-- @function [parent=#Menu] alignItemsHorizontally 
-- @param self
        
--------------------------------
--  align items horizontally with padding<br>
-- since v0.7.2
-- @function [parent=#Menu] alignItemsHorizontallyWithPadding 
-- @param self
-- @param #float padding
        
--------------------------------
-- 
-- @function [parent=#Menu] alignItemsInColumnsWithArray 
-- @param self
-- @param #array_table rows
        
--------------------------------
--  align items vertically with padding<br>
-- since v0.7.2
-- @function [parent=#Menu] alignItemsVerticallyWithPadding 
-- @param self
-- @param #float padding
        
--------------------------------
--  align items in columns of rows 
-- @function [parent=#Menu] alignItemsInRows 
-- @param self
-- @param #int rows
        
--------------------------------
--  align items in rows of columns 
-- @function [parent=#Menu] alignItemsInColumns 
-- @param self
-- @param #int columns
        
--------------------------------
-- @overload self, CC::MenuItem         
-- @overload self         
-- @function [parent=#Menu] create
-- @param self
-- @param #CC::MenuItem item
-- @return Menu#Menu ret (return value: CC::Menu)

--------------------------------
--  creates a Menu with a Array of MenuItem objects 
-- @function [parent=#Menu] createWithArray 
-- @param self
-- @param #array_table arrayOfItems
-- @return Menu#Menu ret (return value: CC::Menu)
        
--------------------------------
--  creates a Menu with it's item, then use addChild() to add <br>
-- other items. It is used for script, it can't init with undetermined<br>
-- number of variables.
-- @function [parent=#Menu] createWithItem 
-- @param self
-- @param #CC::MenuItem item
-- @return Menu#Menu ret (return value: CC::Menu)
        
return nil
