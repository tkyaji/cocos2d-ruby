
--------------------------------
-- @module LayerColor
-- @extend Layer,BlendProtocol
-- @parent_module CC

--------------------------------
--  change width and height in Points<br>
-- since v0.8
-- @function [parent=#LayerColor] changeWidthAndHeight 
-- @param self
-- @param #float w
-- @param #float h
        
--------------------------------
--  BlendFunction. Conforms to BlendProtocol protocol <br>
-- js NA<br>
-- lua NA
-- @function [parent=#LayerColor] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: CC::BlendFunc)
        
--------------------------------
--  change height in Points
-- @function [parent=#LayerColor] changeHeight 
-- @param self
-- @param #float h
        
--------------------------------
-- code<br>
-- When this function bound into js or lua,the parameter will be changed<br>
-- In js: var setBlendFunc(var src, var dst)<br>
-- In lua: local setBlendFunc(local src, local dst)<br>
-- endcode
-- @function [parent=#LayerColor] setBlendFunc 
-- @param self
-- @param #CC::BlendFunc blendFunc
        
--------------------------------
--  change width in Points
-- @function [parent=#LayerColor] changeWidth 
-- @param self
-- @param #float w
        
--------------------------------
-- @overload self, color4b_table, float, float         
-- @overload self         
-- @overload self, color4b_table         
-- @function [parent=#LayerColor] create
-- @param self
-- @param #color4b_table color
-- @param #float width
-- @param #float height
-- @return LayerColor#LayerColor ret (return value: CC::LayerColor)

return nil
