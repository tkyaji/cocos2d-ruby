//
//  RubyEngine.h
//  cocos2d_ruby_bindings
//
//  Created by tkyaji on 2015/01/22.
//
//

#ifndef __cocos2d_ruby_bindings__RubyEngine__
#define __cocos2d_ruby_bindings__RubyEngine__

#include "mruby.h"
#include "cocos2d.h"

NS_CC_BEGIN

class RubyEngine : public ScriptEngineProtocol
{
public:
    static RubyEngine* getInstance(void);
    CC_DEPRECATED_ATTRIBUTE static RubyEngine* defaultEngine(void) { return RubyEngine::getInstance(); }
    virtual ~RubyEngine(void);
    
    virtual ccScriptType getScriptType() {
        return kScriptTypeRuby;
    };
    
    /** Remove script object.
     * @js NA
     * @lua NA
     */
    virtual void removeScriptObjectByObject(Ref* obj);
    
    /** Retain script object.
     * @js NA
     * @lua NA
     */
    virtual bool retainScriptObjectByObject(Ref* obj);
    
    /** Release script object.
     * @js NA
     * @lua NA
     */
    virtual bool releaseScriptObjectByObject(Ref* obj);
    
    /** Remove script function handler, only LuaEngine class need to implement this function.
     * @js NA
     * @lua NA
     */
    virtual void removeScriptHandler(int handler);
    
    /**
     @brief Execute script code contained in the given string.
     @param codes holding the valid script code that should be executed.
     @return 0 if the string is executed correctly.
     @return other if the string is executed wrongly.
     * @js NA
     * @lua NA
     */
    virtual int executeString(const char* codes);
    virtual int executeString(const char* codes, const char* filename);
    
    /**
     @brief Execute a script file.
     @param filename String object holding the filename of the script file that is to be executed
     * @js NA
     * @lua NA
     */
    virtual int executeScriptFile(const char* filename);
    
    /**
     @brief Execute a scripted global function.
     @brief The function should not take any parameters and should return an integer.
     @param functionName String object holding the name of the function, in the global script environment, that is to be executed.
     @return The integer value returned from the script function.
     * @js NA
     * @lua NA
     */
    virtual int executeGlobalFunction(const char* functionName);
    
    /**when trigger a script event ,call this func,add params needed into ScriptEvent object.nativeObject is object triggering the event, can be nullptr in lua
     * @js NA
     * @lua NA
     */
    virtual int sendEvent(ScriptEvent* evt);
    
    /** called by CCAssert to allow scripting engine to handle failed assertions
     * @return true if the assert was handled by the script engine, false otherwise.
     * @js NA
     * @lua NA
     */
    virtual bool handleAssert(const char *msg);
    
    virtual void setCalledFromScript(bool callFromScript) { CC_UNUSED_PARAM(callFromScript); };
    virtual bool isCalledFromScript() { return false; };
    
    /** Parse configuration file */
    virtual bool parseConfig(ConfigType type, const std::string& str);
    
    virtual void addSearchPath(const char* path);
    
    virtual void printError();
    
    virtual std::string findFile(std::string filename);
    
private:
    RubyEngine(void);
    
    bool init(void);
    
    int handleMenuClickedEvent(void* data);
    
    int handleTouchEvent(void* data);
    
    static RubyEngine* _defaultEngine;

    int _executeScript(const char* codes, const char* name);

    mrb_state *_mrb;
};

NS_CC_END

#endif /* defined(__cocos2d_ruby_bindings__RubyEngine__) */
