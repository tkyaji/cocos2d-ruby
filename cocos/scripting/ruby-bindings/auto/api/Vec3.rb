
--------------------------------
-- @module Vec3
-- @parent_module CC

--------------------------------
-- Clamps this vector within the specified range.<br>
-- param min The minimum value.<br>
-- param max The maximum value.
-- @function [parent=#Vec3] clamp 
-- @param self
-- @param #vec3_table min
-- @param #vec3_table max
        
--------------------------------
-- @overload self, float         
-- @overload self, float, float, float         
-- @overload self, vec3_table         
-- @overload self, vec3_table, vec3_table         
-- @function [parent=#Vec3] set
-- @param self
-- @param #float xx
-- @param #float yy
-- @param #float zz

--------------------------------
--  Returns true if the vector's scalar components are all greater<br>
-- that the ones of the vector it is compared against.
-- @function [parent=#Vec3] operator< 
-- @param self
-- @param #vec3_table rhs
-- @return bool#bool ret (return value: bool)
        
--------------------------------
--  Returns true if the vector's scalar components are all smaller<br>
-- that the ones of the vector it is compared against.
-- @function [parent=#Vec3] operator> 
-- @param self
-- @param #vec3_table rhs
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Calculates the sum of this vector with the given vector.<br>
-- Note: this does not modify this vector.<br>
-- param v The vector to add.<br>
-- return The vector sum.
-- @function [parent=#Vec3] operator+ 
-- @param self
-- @param #vec3_table v
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- Calculates the scalar product of this vector with the given value.<br>
-- Note: this does not modify this vector.<br>
-- param s The value to scale by.<br>
-- return The scaled vector.
-- @function [parent=#Vec3] operator* 
-- @param self
-- @param #float s
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- @overload self         
-- @overload self, vec3_table         
-- @function [parent=#Vec3] operator-
-- @param self
-- @param #vec3_table v
-- @return vec3_table#vec3_table ret (return value: vec3_table)

--------------------------------
-- Returns the components of this vector divided by the given constant<br>
-- Note: this does not modify this vector.<br>
-- param s the constant to divide this vector with<br>
-- return a smaller vector
-- @function [parent=#Vec3] operator/ 
-- @param self
-- @param #float s
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- Negates this vector.
-- @function [parent=#Vec3] negate 
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
-- @function [parent=#Vec3] distanceSquared 
-- @param self
-- @param #vec3_table v
-- @return float#float ret (return value: float)
        
--------------------------------
-- Subtracts the given vector from this vector.<br>
-- param v The vector to subtract.<br>
-- return This vector, after the subtraction occurs.
-- @function [parent=#Vec3] operator-= 
-- @param self
-- @param #vec3_table v
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- Indicates whether this vector contains all ones.<br>
-- return true if this vector contains all ones, false otherwise.
-- @function [parent=#Vec3] isOne 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Scales all elements of this vector by the specified value.<br>
-- param scalar The scalar value.
-- @function [parent=#Vec3] scale 
-- @param self
-- @param #float scalar
        
--------------------------------
-- Adds the given vector to this vector.<br>
-- param v The vector to add.<br>
-- return This vector, after the addition occurs.
-- @function [parent=#Vec3] operator+= 
-- @param self
-- @param #vec3_table v
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- Sets this vector to the cross product between itself and the specified vector.<br>
-- param v The vector to compute the cross product with.
-- @function [parent=#Vec3] cross 
-- @param self
-- @param #vec3_table v
        
--------------------------------
-- Adds the elements of the specified vector to this one.<br>
-- param v The vector to add.
-- @function [parent=#Vec3] add 
-- @param self
-- @param #vec3_table v
        
--------------------------------
-- Indicates whether this vector contains all zeros.<br>
-- return true if this vector contains all zeros, false otherwise.
-- @function [parent=#Vec3] isZero 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Normalizes this vector and stores the result in dst.<br>
-- If the vector already has unit length or if the length<br>
-- of the vector is zero, this method simply copies the<br>
-- current vector into dst.<br>
-- param dst The destination vector.
-- @function [parent=#Vec3] getNormalized 
-- @param self
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- Normalizes this vector.<br>
-- This method normalizes this Vect3 so that it is of<br>
-- unit length (in other words, the length of the vector<br>
-- after calling this method will be 1.0f). If the vector<br>
-- already has unit length or if the length of the vector<br>
-- is zero, this method does nothing.<br>
-- return This vector, after the normalization occurs.
-- @function [parent=#Vec3] normalize 
-- @param self
        
--------------------------------
-- Returns the squared length of this vector.<br>
-- When it is not necessary to get the exact length of a<br>
-- vector (for example, when simply comparing the lengths of<br>
-- different vectors), it is advised to use this method<br>
-- instead of length.<br>
-- return The squared length of the vector.<br>
-- see length
-- @function [parent=#Vec3] lengthSquared 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- Determines if this vector is not equal to the given vector.<br>
-- param v The vector to compare against.<br>
-- return True if this vector is not equal to the given vector, false otherwise.
-- @function [parent=#Vec3] operator!= 
-- @param self
-- @param #vec3_table v
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Determines if this vector is equal to the given vector.<br>
-- param v The vector to compare against.<br>
-- return True if this vector is equal to the given vector, false otherwise.
-- @function [parent=#Vec3] operator== 
-- @param self
-- @param #vec3_table v
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Subtracts this vector and the specified vector as (this - v)<br>
-- and stores the result in this vector.<br>
-- param v The vector to subtract.
-- @function [parent=#Vec3] subtract 
-- @param self
-- @param #vec3_table v
        
--------------------------------
-- Returns the distance between this vector and v.<br>
-- param v The other vector.<br>
-- return The distance between this vector and v.<br>
-- see distanceSquared
-- @function [parent=#Vec3] distance 
-- @param self
-- @param #vec3_table v
-- @return float#float ret (return value: float)
        
--------------------------------
-- Updates this vector towards the given target using a smoothing function.<br>
-- The given response time determines the amount of smoothing (lag). A longer<br>
-- response time yields a smoother result and more lag. To force this vector to<br>
-- follow the target closely, provide a response time that is very small relative<br>
-- to the given elapsed time.<br>
-- param target target value.<br>
-- param elapsedTime elapsed time between calls.<br>
-- param responseTime response time (in the same units as elapsedTime).
-- @function [parent=#Vec3] smooth 
-- @param self
-- @param #vec3_table target
-- @param #float elapsedTime
-- @param #float responseTime
        
--------------------------------
-- Computes the length of this vector.<br>
-- return The length of the vector.<br>
-- see lengthSquared
-- @function [parent=#Vec3] length 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- Scales this vector by the given value.<br>
-- param s The value to scale by.<br>
-- return This vector, after the scale occurs.
-- @function [parent=#Vec3] operator*= 
-- @param self
-- @param #float s
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- Returns the dot product of this vector and the specified vector.<br>
-- param v The vector to compute the dot product with.<br>
-- return The dot product.
-- @function [parent=#Vec3] dot 
-- @param self
-- @param #vec3_table v
-- @return float#float ret (return value: float)
        
--------------------------------
-- Clamps the specified vector within the specified range and returns it in dst.<br>
-- param v The vector to clamp.<br>
-- param min The minimum value.<br>
-- param max The maximum value.<br>
-- param dst A vector to store the result in.
-- @function [parent=#Vec3] clamp 
-- @param self
-- @param #vec3_table v
-- @param #vec3_table min
-- @param #vec3_table max
-- @param #vec3_table dst
        
--------------------------------
-- Returns the angle (in radians) between the specified vectors.<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- return The angle between the two vectors (in radians).
-- @function [parent=#Vec3] angle 
-- @param self
-- @param #vec3_table v1
-- @param #vec3_table v2
-- @return float#float ret (return value: float)
        
--------------------------------
-- Computes the cross product of the specified vectors and stores the result in dst.<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- param dst A vector to store the result in.
-- @function [parent=#Vec3] cross 
-- @param self
-- @param #vec3_table v1
-- @param #vec3_table v2
-- @param #vec3_table dst
        
--------------------------------
-- Adds the specified vectors and stores the result in dst.<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- param dst A vector to store the result in.
-- @function [parent=#Vec3] add 
-- @param self
-- @param #vec3_table v1
-- @param #vec3_table v2
-- @param #vec3_table dst
        
--------------------------------
-- Creates a new vector from an integer interpreted as an RGB value.<br>
-- E.g. 0xff0000 represents red or the vector (1, 0, 0).<br>
-- param color The integer to interpret as an RGB value.<br>
-- return A vector corresponding to the interpreted RGB color.
-- @function [parent=#Vec3] fromColor 
-- @param self
-- @param #unsigned int color
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- Subtracts the specified vectors and stores the result in dst.<br>
-- The resulting vector is computed as (v1 - v2).<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- param dst The destination vector.
-- @function [parent=#Vec3] subtract 
-- @param self
-- @param #vec3_table v1
-- @param #vec3_table v2
-- @param #vec3_table dst
        
--------------------------------
-- Returns the dot product between the specified vectors.<br>
-- param v1 The first vector.<br>
-- param v2 The second vector.<br>
-- return The dot product between the vectors.
-- @function [parent=#Vec3] dot 
-- @param self
-- @param #vec3_table v1
-- @param #vec3_table v2
-- @return float#float ret (return value: float)
        
--------------------------------
-- @overload self, float, float, float         
-- @overload self         
-- @overload self, float         
-- @overload self, vec3_table, vec3_table         
-- @overload self, vec3_table         
-- @function [parent=#Vec3] Vec3
-- @param self
-- @param #float xx
-- @param #float yy
-- @param #float zz

return nil
