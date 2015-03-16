void register_all_${prefix}_enums(mrb_state* mrb)
{
#for e in $generated_enums.itervalues()
    struct RClass* renum_${e.name} = mrb_define_module(mrb, "${e.name}");
    ruby_${prefix}_global_${e.name}_enum_init(mrb);
    #for c in $e.enum_constants
    mrb_define_class_method(mrb, renum_${e.name}, "${c.name}", ruby_${prefix}_global_constant_get, ARGS_NONE());
    #end for

#end for
}

void register_all_${prefix}(mrb_state* mrb)
{
	struct RClass* rmodule = mrb_define_module(mrb, "${target_ns}");

#for rbclass in $sorted_classes
	#if $in_listed_classes(rbclass)
	ruby_register_${prefix}_${rbclass}(mrb, rmodule);
	#end if
#end for

    register_all_${prefix}_enums(mrb);
}

#if $macro_judgement
\#endif
#end if
