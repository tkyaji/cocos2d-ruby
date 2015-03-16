#if $macro_judgement
$macro_judgement
#end if
\#ifndef __${prefix}_h__
\#define __${prefix}_h__

\#include "base/ccConfig.h"
\#include "mruby.h"

void register_all_${prefix}(mrb_state* mrb);
