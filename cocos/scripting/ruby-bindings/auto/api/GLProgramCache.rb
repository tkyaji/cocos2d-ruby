
--------------------------------
-- @module GLProgramCache
-- @extend Ref
-- @parent_module CC

--------------------------------
--  adds a GLProgram to the cache for a given name 
-- @function [parent=#GLProgramCache] addGLProgram 
-- @param self
-- @param #CC::GLProgram program
-- @param #string key
        
--------------------------------
--  returns a GL program for a given key 
-- @function [parent=#GLProgramCache] getGLProgram 
-- @param self
-- @param #string key
-- @return GLProgram#GLProgram ret (return value: CC::GLProgram)
        
--------------------------------
--  reload the default shaders 
-- @function [parent=#GLProgramCache] reloadDefaultGLPrograms 
-- @param self
        
--------------------------------
--  loads the default shaders 
-- @function [parent=#GLProgramCache] loadDefaultGLPrograms 
-- @param self
        
--------------------------------
--  purges the cache. It releases the retained instance. 
-- @function [parent=#GLProgramCache] destroyInstance 
-- @param self
        
--------------------------------
--  returns the shared instance 
-- @function [parent=#GLProgramCache] getInstance 
-- @param self
-- @return GLProgramCache#GLProgramCache ret (return value: CC::GLProgramCache)
        
--------------------------------
-- js ctor
-- @function [parent=#GLProgramCache] GLProgramCache 
-- @param self
        
return nil
