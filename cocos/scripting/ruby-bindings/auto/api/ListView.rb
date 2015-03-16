
--------------------------------
-- @module ListView
-- @extend ScrollView
-- @parent_module CCUI

--------------------------------
-- Returns the index of item.<br>
-- param item  the item which need to be checked.<br>
-- return the index of item.
-- @function [parent=#ListView] getIndex 
-- @param self
-- @param #CCUI::Widget item
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#ListView] removeAllItems 
-- @param self
        
--------------------------------
-- Changes the gravity of listview.<br>
-- see ListViewGravity
-- @function [parent=#ListView] setGravity 
-- @param self
-- @param #int gravity
        
--------------------------------
-- Push back custom item into listview.
-- @function [parent=#ListView] pushBackCustomItem 
-- @param self
-- @param #CCUI::Widget item
        
--------------------------------
-- Returns the item container.
-- @function [parent=#ListView] getItems 
-- @param self
-- @return array_table#array_table ret (return value: array_table)
        
--------------------------------
-- Removes a item whose index is same as the parameter.<br>
-- param index of item.
-- @function [parent=#ListView] removeItem 
-- @param self
-- @param #int index
        
--------------------------------
-- 
-- @function [parent=#ListView] getCurSelectedIndex 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- Insert a default item(create by a cloned model) into listview.
-- @function [parent=#ListView] insertDefaultItem 
-- @param self
-- @param #int index
        
--------------------------------
-- 
-- @function [parent=#ListView] requestRefreshView 
-- @param self
        
--------------------------------
-- Changes the margin between each item.<br>
-- param margin
-- @function [parent=#ListView] setItemsMargin 
-- @param self
-- @param #float margin
        
--------------------------------
-- 
-- @function [parent=#ListView] refreshView 
-- @param self
        
--------------------------------
-- Removes the last item of listview.
-- @function [parent=#ListView] removeLastItem 
-- @param self
        
--------------------------------
-- 
-- @function [parent=#ListView] getItemsMargin 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#ListView] addEventListener 
-- @param self
-- @param #function callback
        
--------------------------------
-- Returns a item whose index is same as the parameter.<br>
-- param index of item.<br>
-- return the item widget.
-- @function [parent=#ListView] getItem 
-- @param self
-- @param #int index
-- @return Widget#Widget ret (return value: CCUI::Widget)
        
--------------------------------
-- Sets a item model for listview<br>
-- A model will be cloned for adding default item.<br>
-- param model  item model for listview
-- @function [parent=#ListView] setItemModel 
-- @param self
-- @param #CCUI::Widget model
        
--------------------------------
-- 
-- @function [parent=#ListView] doLayout 
-- @param self
        
--------------------------------
-- Push back a default item(create by a cloned model) into listview.
-- @function [parent=#ListView] pushBackDefaultItem 
-- @param self
        
--------------------------------
-- Insert custom item into listview.
-- @function [parent=#ListView] insertCustomItem 
-- @param self
-- @param #CCUI::Widget item
-- @param #int index
        
--------------------------------
-- Allocates and initializes.
-- @function [parent=#ListView] create 
-- @param self
-- @return ListView#ListView ret (return value: CCUI::ListView)
        
--------------------------------
-- 
-- @function [parent=#ListView] createInstance 
-- @param self
-- @return Ref#Ref ret (return value: CC::Ref)
        
--------------------------------
-- Default constructor
-- @function [parent=#ListView] ListView 
-- @param self
        
return nil
