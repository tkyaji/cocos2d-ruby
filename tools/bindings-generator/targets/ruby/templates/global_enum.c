void ruby_${generator.prefix}_global_${name}_enum_init(mrb_state* mrb)
{
    #for c in $enum_constants
    do {
        mrb_value ev = mrb_fixnum_value((mrb_int)${name}::${c.name});
        mrb_gv_set(mrb, mrb_intern_cstr(mrb, "${c.name}"), ev);
    } while (0);

    #end for
}
