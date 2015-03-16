
--------------------------------
-- @module MenuItemImage
-- @extend MenuItemSprite
-- @parent_module CC

--------------------------------
--  sets the sprite frame for the disabled image 
-- @function [parent=#MenuItemImage] setDisabledSpriteFrame 
-- @param self
-- @param #CC::SpriteFrame frame
        
--------------------------------
--  sets the sprite frame for the selected image 
-- @function [parent=#MenuItemImage] setSelectedSpriteFrame 
-- @param self
-- @param #CC::SpriteFrame frame
        
--------------------------------
--  sets the sprite frame for the normal image 
-- @function [parent=#MenuItemImage] setNormalSpriteFrame 
-- @param self
-- @param #CC::SpriteFrame frame
        
--------------------------------
-- @overload self, string, string         
-- @overload self         
-- @overload self, string, string, string         
-- @overload self, string, string, function         
-- @overload self, string, string, string, function         
-- @function [parent=#MenuItemImage] create
-- @param self
-- @param #string normalImage
-- @param #string selectedImage
-- @param #string disabledImage
-- @param #function callback
-- @return MenuItemImage#MenuItemImage ret (return value: CC::MenuItemImage)

return nil
