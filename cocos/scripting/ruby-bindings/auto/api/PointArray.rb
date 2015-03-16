
--------------------------------
-- @module PointArray
-- @extend Ref
-- @parent_module CC

--------------------------------
--  returns the number of objects of the control point array<br>
-- js NA
-- @function [parent=#PointArray] count 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
--  inserts a controlPoint at index<br>
-- js NA
-- @function [parent=#PointArray] insertControlPoint 
-- @param self
-- @param #vec2_table controlPoint
-- @param #int index
        
--------------------------------
--  returns a new copy of the array reversed. User is responsible for releasing this copy<br>
-- js NA
-- @function [parent=#PointArray] reverse 
-- @param self
-- @return point_table#point_table ret (return value: point_table)
        
--------------------------------
--  initializes a Catmull Rom config with a capacity hint<br>
-- js NA
-- @function [parent=#PointArray] initWithCapacity 
-- @param self
-- @param #int capacity
-- @return bool#bool ret (return value: bool)
        
--------------------------------
--  deletes a control point at a given index<br>
-- js NA
-- @function [parent=#PointArray] removeControlPointAtIndex 
-- @param self
-- @param #int index
        
--------------------------------
-- js NA<br>
-- lua NA
-- @function [parent=#PointArray] clone 
-- @param self
-- @return point_table#point_table ret (return value: point_table)
        
--------------------------------
-- js NA
-- @function [parent=#PointArray] setControlPoints 
-- @param self
-- @param #array_table controlPoints
        
--------------------------------
--  replaces an existing controlPoint at index<br>
-- js NA
-- @function [parent=#PointArray] replaceControlPoint 
-- @param self
-- @param #vec2_table controlPoint
-- @param #int index
        
--------------------------------
--  appends a control point<br>
-- js NA
-- @function [parent=#PointArray] addControlPoint 
-- @param self
-- @param #vec2_table controlPoint
        
--------------------------------
--  get the value of a controlPoint at a given index<br>
-- js NA
-- @function [parent=#PointArray] getControlPointAtIndex 
-- @param self
-- @param #int index
-- @return vec2_table#vec2_table ret (return value: vec2_table)
        
--------------------------------
--  reverse the current control point array inline, without generating a new one<br>
-- js NA
-- @function [parent=#PointArray] reverseInline 
-- @param self
        
--------------------------------
-- js NA
-- @function [parent=#PointArray] getControlPoints 
-- @param self
-- @return array_table#array_table ret (return value: array_table)
        
--------------------------------
--  creates and initializes a Points array with capacity<br>
-- js NA
-- @function [parent=#PointArray] create 
-- @param self
-- @param #int capacity
-- @return point_table#point_table ret (return value: point_table)
        
--------------------------------
-- js NA<br>
-- lua NA
-- @function [parent=#PointArray] PointArray 
-- @param self
        
return nil
