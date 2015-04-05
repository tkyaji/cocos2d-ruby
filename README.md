cocos2d-x mruby binding.
=========

This project is based cocos2d-x 3.4.

Git user attention
-----------------------

clone the repo from GitHub.

         $ git clone git@github.com:tkyaji/cocos2d-ruby.git

How to start a new game
-----------------------

1. Run `setup.py`
2. Run the `cocos` script

Example:

    $ cd cocos2d-ruby
    $ ./setup.py
    $ source FILE_TO_SAVE_SYSTEM_VARIABLE
    $ cocos new MyGame -p com.your_company.mygame -l ruby -d NEW_PROJECTS_DIR
    $ cd NEW_PROJECTS_DIR/MyGame

### Build and run a new project for Android ###

    $ cocos run -p android -j 4

### Build and run a new project for iOS ###

    $ cocos run -p ios
    
### Build and run a new project for OSX ###

    $ cocos run -p mac

### Build and run a new project for Linux ###
Does not support yet.

### Build and run new project for win32 ###
Does not support yet.

### Build and run new project for Windows 8.1 and Windows Phone 8.1 ###
Does not support yet.
