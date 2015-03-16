\#include "cocos2d.h"
\#include "mruby.h"
\#include "mruby/data.h"
#for header in $headers
\#include "${os.path.basename(header)}"
#end for