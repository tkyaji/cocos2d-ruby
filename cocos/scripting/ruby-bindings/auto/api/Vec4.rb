
--------------------------------
-- @module Vec4
-- @parent_module CC

--------------------------------
-- Clamps this vector within the specified range.<br>
-- param min The minimum value.<br>
-- param max The maximum value.
-- @function [parent=#Vec4] clamp 
-- @param self
-- @param #vec4_table min
-- @param #vec4_table max
        
--------------------------------
-- @overload self, float         
-- @overload self, float, float, float, float         
-- @overload self, vec4_table         
-- @overload self, vec4_table, vec4_table         
-- @function [parent=#Vec4] set
-- @param self
-- @param #float xx
-- @param #float yy
-- @param #float zz
-- @param #float ww

--------------------------------
-- Determines if this vector is less than the given vector.<br>
-- param v The vector to compare against.<br>
-- return True if this vector is less than the given vector, false otherwise.
-- @function [parent=#Vec4] operator< 
-- @param self
-- @param #vec4_table v
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Calculates the sum of this vector with the given vector.<br>
-- Note: this does not modify this vector.<br>
-- param v The vector to add.<br>
-- return The vector sum.
-- @function [parent=#Vec4] operator+ 
-- @param self
-- @param #vec4_table v
-- @return vec4_table#vec4_table ret (return value: vec4_table)
        
--------------------------------
-- Calculates the scalar product of this vector with the given value.<br>
-- Note: this does not modify this vector.<br>
-- param s The value to scale by.<br>
-- return The scaled vector.
-- @function [parent=#Vec4] operator* 
-- @param self
-- @param #float s
-- @return vec4_table#vec4_table ret (return value: vec4_table)
        
--------------------------------
-- @overload self         
-- @overload self, vec4_table         
-- @function [parent=#Vec4] operator-
-- @param self
-- @param #vec4_table v
-- @return vec4_table#vec4_table ret (return value: vec4_table)

--------------------------------
-- Returns the components of this vector divided by the given constant<br>
-- Note: this does not modify this vector.<br>
-- param s the constant to divide this vector with<br>
-- return a smaller vector
-- @function [parent=#Vec4] operator/ 
-- @param self
-- @param #float s
-- @return vec4_table#vec4_table ret (return value: vec4_table)
        
--------------------------------
-- Negates this vector.
-- @function [parent=#Vec4] negate 
-- @param self
        
--------------------------------
-- Returns the squared distance between this vector and v.<br>
-- When it is not necessary to get the exact distance between<br>
-- two vectors (for example, when simply comparing the<br>
-- distance between different vectors), it is advised to use<br>
-- this method instead of distance.<br>
-- param v The other vector.<br>
-- return The squared distance between this vector and v.<br>
-- see distance
-- @function [parent=#Vec4] distanceSquared 
-- @param self
-- @param #vec4_table v
-- @return float#float ret (return value: float)
        
--------------------------------
-- Subtracts the given vector from this vector.<br>
-- param v The vector to subtract.<br>
-- return This vector, after the subtraction occurs.
-- @function [parent=#Vec4] operator-= 
-- @param self
-- @param #vec4_table v
-- @return vec4_table#vec4_table ret (return value: vec4_table)
        
--------------------------------
-- Indicates whether this vector contains all ones.<br>
-- return true if this vector contains all ones, false otherwise.
-- @function [parent=#Vec4] isOne 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Scales all elements of this vector by the specified value.<br>
-- param scalar The scalar value.
-- @function [parent=#Vec4] scale 
-- @param self
-- @param #float scalar
        
--------------------------------
-- Adds the given vector to this vector.<br>
-- param v The vector to add.<br>
-- return This vector, after the addition occurs.
-- @function [parent=#Vec4] operator+= 
-- @param self
-- @param #vec4_table v
-- @return vec4_table#vec4_table ret (return value: vec4_table)
        
--------------------------------
-- Adds the elements of the specified vector to this one.<br>
-- param v The vector to add.
-- @function [parent=#Vec4] add 
-- @param self
-- @param #vec4_table v
        
--------------------------------
-- Indicates whether this vector contains all zeros.<br>
-- return true if this vector contains all zeros, false otherwise.
-- @function [parent=#Vec4] isZero 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Normalizes this vector and stores the result in dst.<br>
-- If the vector already has unit length or if the length<br>
-- of the vector is zero, this method simply copies the<br>
-- current vector into dst.<br>
-- param dst The destination vector.
-- @function [parent=#Vec4] getNormalized 
-- @param self
-- @return vec4_table#vec4_table ret (return value: vec4_table)
        
--------------------------------
-- Normalizes this vector.<br>
-- This method normalizes this Vec4 so that it is of<br>
-- unit length (in other words, the length of the vector<br>
-- after calling this method will be 1.0f). If the vector<br>
-- already has unit length or if the length of the vector<br>
-- is zero, this method does nothing.<br>
-- return This vector, after the normalization occurs.
-- @function [parent=#Vec4] normalize 
-- @param self
        
--------------------------------
-- Returns the squared length of this vector.<br>
-- When it is not necessary to get the exact length of a<br>
-- vector (for example, when simply comparing the lengths of<br>
-- different vectors), it is advised to use this method<br>
-- instead of length.<br>
-- return The squared length of the vector.<br>
-- see length
-- @function [parent=#Vec4] lengthSquared 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- Determines if this vector is not equal to the given vector.<br>
-- param v The vector to compare against.<br>
-- return True if this vector is not equal to the given vector, false otherwise.
-- @function [parent=#Vec4] operator!= 
-- @param self
-- @param #vec4_table v
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Determines if this vector is equal to the given vector.<br>
-- param v The vector to compare against.<br>
-- return True if this vector is equal to the given vector, false otherwise.
-- @function [parent=#Vec4] operator== 
-- @param self
-- @param #vec4_table v
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Subtracts this vector and the specified vector as (this - v)<br>
-- and stores the result in this vector.<br>
-- param v The vector to subtract.
-- @function [parent=#Vec4] subtract 
-- @param self
-- @param #vec4_table v
        
--------------------------------
-- Returns the distance between this vector and v.<br>
-- param v The other vector.<br>
-- return The distance between this vector and v.<br>
-- see distanceSquared
-- @function [parent=#Vec4] distance 
-- @param self
-- @param #vec4_table v
-- @return float#float ret (return value: float)
        
--------------------------------
-- Computes the length of this vector.<br>
-- return The length of the vector.<br>
-- see lengthSquared
-- @function [parent=#Vec4] length 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- Scales this vector by the given value.<br>
-- param s The value to scale by.<br>
-- return This vector, after the scale occurs.
-- @function [parent=#Vec4] operator*= 
-- @param self
-- @param #float s
-- @return vec4_table#vec4_table ret (return value: vec4_table)
        
--------------------------------
-- Returns the dot product of this vector and the specified vector.<br>
-- param v The vector to compute the dot product with.<br>
-- return The dot product.
-- @function [parent=#Vec4] dot 
-- @param self
-- @param #vec4_table v
-- @return float#float ret (return value: float)
        
--------------------------------
-- Clamps the specified vector within the specified range and returns it in dst.<br>
-- param v The vector to clamp.<br>
-- param min The minimum value.<br>
-- param max The maximum value.<br>
-- param dst A vector to store the result in.
-- @function [parent=#Vec4] clamp 
-- @param self
-- @param #vec4_table v
-- @param #vec4_table min
-- @param #vec4_table max
-- @param #vec4_table dst
        
--------------------------------
-- Returns the angle (in radians) between the specified vectors.<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- return The angle between the two vectors (in radians).
-- @function [parent=#Vec4] angle 
-- @param self
-- @param #vec4_table v1
-- @param #vec4_table v2
-- @return float#float ret (return value: float)
        
--------------------------------
-- Adds the specified vectors and stores the result in dst.<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- param dst A vector to store the result in.
-- @function [parent=#Vec4] add 
-- @param self
-- @param #vec4_table v1
-- @param #vec4_table v2
-- @param #vec4_table dst
        
--------------------------------
-- Creates a new vector from an integer interpreted as an RGBA value.<br>
-- E.g. 0xff0000ff represents opaque red or the vector (1, 0, 0, 1).<br>
-- param color The integer to interpret as an RGBA value.<br>
-- return A vector corresponding to the interpreted RGBA color.
-- @function [parent=#Vec4] fromColor 
-- @param self
-- @param #unsigned int color
-- @return vec4_table#vec4_table ret (return value: vec4_table)
        
--------------------------------
-- Subtracts the specified vectors and stores the result in dst.<br>
-- The resulting vector is computed as (v1 - v2).<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- param dst The destination vector.
-- @function [parent=#Vec4] subtract 
-- @param self
-- @param #vec4_table v1
-- @param #vec4_table v2
-- @param #vec4_table dst
        
--------------------------------
-- Returns the dot product between the specified vectors.<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- return The dot product between the vectors.
-- @function [parent=#Vec4] dot 
-- @param self
-- @param #vec4_table v1
-- @param #vec4_table v2
-- @return float#float ret (return value: float)
        
--------------------------------
-- @overload self, float, float, float, float         
-- @overload self         
-- @overload self, float         
-- @overload self, vec4_table, vec4_table         
-- @overload self, vec4_table         
-- @function [parent=#Vec4] Vec4
-- @param self
-- @param #float xx
-- @param #float yy
-- @param #float zz
-- @param #float ww

return nil
