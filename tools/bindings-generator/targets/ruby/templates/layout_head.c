\#include "${out_file}.hpp"
\#include "${out_file}_data_types.h"
#if $macro_judgement
$macro_judgement
#end if
#for header in $headers
\#include "${os.path.basename(header)}"
#end for
\#include "RubyBasicConversions.h"

mrb_value ruby_${prefix}_constant_get(mrb_state* mrb, mrb_value self)
{
    RClass *c = mrb_class_ptr(self);
    return mrb_mod_cv_get(mrb, c, mrb->c->ci->mid);
}

mrb_value ruby_${prefix}_global_constant_get(mrb_state* mrb, mrb_value self)
{
    return mrb_gv_get(mrb, mrb->c->ci->mid);
}

