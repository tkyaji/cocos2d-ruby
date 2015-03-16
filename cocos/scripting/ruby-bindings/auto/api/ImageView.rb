
--------------------------------
-- @module ImageView
-- @extend Widget
-- @parent_module CCUI

--------------------------------
-- Load texture for imageview.<br>
-- param fileName   file name of texture.<br>
-- param texType    @see TextureResType
-- @function [parent=#ImageView] loadTexture 
-- @param self
-- @param #string fileName
-- @param #int texType
        
--------------------------------
-- Sets if imageview is using scale9 renderer.<br>
-- param able true that using scale9 renderer, false otherwise.
-- @function [parent=#ImageView] setScale9Enabled 
-- @param self
-- @param #bool able
        
--------------------------------
-- Updates the texture rect of the ImageView in points.<br>
-- It will call setTextureRect:rotated:untrimmedSize with rotated = NO, and utrimmedSize = rect.size.
-- @function [parent=#ImageView] setTextureRect 
-- @param self
-- @param #rect_table rect
        
--------------------------------
-- Sets capinsets for imageview, if imageview is using scale9 renderer.<br>
-- param capInsets    capinsets for imageview
-- @function [parent=#ImageView] setCapInsets 
-- @param self
-- @param #rect_table capInsets
        
--------------------------------
-- 
-- @function [parent=#ImageView] getCapInsets 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- 
-- @function [parent=#ImageView] isScale9Enabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @overload self, string, int         
-- @overload self         
-- @function [parent=#ImageView] create
-- @param self
-- @param #string imageFileName
-- @param #int texType
-- @return ImageView#ImageView ret (return value: CCUI::ImageView)

--------------------------------
-- 
-- @function [parent=#ImageView] createInstance 
-- @param self
-- @return Ref#Ref ret (return value: CC::Ref)
        
--------------------------------
-- Default constructor
-- @function [parent=#ImageView] ImageView 
-- @param self
        
return nil
