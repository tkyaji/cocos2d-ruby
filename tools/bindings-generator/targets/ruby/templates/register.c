#set $has_constructor = False
#if $current_class.methods.has_key('constructor')
#set $has_constructor = True
${current_class.methods.constructor.generate_code($current_class)}
#end if
#
#set $generator = $current_class.generator
#set $methods = $current_class.methods_clean()
#set $st_methods = $current_class.static_methods_clean()
#set $fields = $current_class.fields
#set $constants = $current_class.constants
#set $enums = $current_class.enums
#set $namespaced_class_name = $generator.scriptname_from_native($current_class.namespaced_class_name, $current_class.namespace_name)
#
#if len($constants) > 0 
void ruby_${generator.prefix}_${current_class.class_name}_constants_init(mrb_state* mrb, struct RClass* rclass)
{
    #for c in $constants
    do {
        #set $ntype = $c.type.get_whole_param_name($generator)
        #if $c.type.is_object and (not $c.type.is_pointer) and (not $c.type.is_value_param)
        ${ntype}* retval_ptr = new ${ntype}(${current_class.namespaced_class_name}::${c.name});
            #set $in_value = "retval_ptr"
        #else
            #set $in_value = $current_class.namespaced_class_name + "::" + $c.name
        #end if
        mrb_value ret;
        ${c.type.from_native({"generator": $generator,
                              "in_value": $in_value,
                              "out_value": "ret",
                              "type_name": $c.type.namespaced_name.replace("*", ""),
                              "ntype": $ntype.replace("const ", ""),
                              "class_name": $current_class.class_name,
                              "ruby_class": "nullptr",
                              "level": 2,
                              "scriptname": $generator.scriptname_from_native($c.type.namespaced_name, $c.type.namespace_name)})};
        mrb_mod_cv_set(mrb, rclass, mrb_intern_cstr(mrb, "${c.name}"), ret);
    } while (0);

    #end for
}

#end if
#for e in $enums.values()
#set $en = "N" if $e.name == "@" else $e.name
void ruby_${generator.prefix}_${current_class.class_name}_${en}_enum_init(mrb_state* mrb, struct RClass* renum)
{
    #for c in $e.enum_constants
    do {
        #if $e.name == "@"
        mrb_value ev = mrb_fixnum_value((mrb_int)${current_class.namespaced_class_name}::${c.name});
        #else
        mrb_value ev = mrb_fixnum_value((mrb_int)${current_class.namespaced_class_name}::${e.name}::${c.name});
        #end if
        mrb_mod_cv_set(mrb, renum, mrb_intern_cstr(mrb, "${c.name}"), ev);
    } while (0);

    #end for
}

#end for
#if $current_class.is_struct and (not $current_class.has_constructor)
    #set $ruby_data_type = "ruby_%s_%s_type" % ($generator.prefix, $current_class.class_name)
mrb_value ruby_${generator.prefix}_${current_class.class_name}_constructor(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

    ${current_class.namespaced_class_name}* cobj = new ${current_class.namespaced_class_name}();
    DATA_TYPE(self) = &${ruby_data_type};
    DATA_PTR(self) = cobj;

    if (argc == 1) {
        if (mrb_hash_p(argv[0])) {
            mrb_value keys = mrb_hash_keys(mrb, argv[0]);
            mrb_int len = mrb_ary_len(mrb, keys);
            for (mrb_int i = 0; i < len; i++) {
                mrb_value hk = mrb_ary_ref(mrb, keys, i);
                mrb_value kv = mrb_hash_get(mrb, argv[0], hk);
                const char* str = nullptr;
                if (mrb_symbol_p(hk)) {
                    str = mrb_sym2name(mrb, mrb_symbol(hk));
                } else if (mrb_string_p(hk)) {
                    str = mrb_string_value_ptr(mrb, hk);
                }
    #for f in $current_class.fields
                if (strcmp(str, "${f.name}") == 0) {
                    bool ok = true;
        #set $append_ptr = False
        #if $f.type.is_object and (not $f.type.is_pointer) and (not $f.type.is_value_param)
            #set $append_ptr = True
        #end if
                    ${f.type.get_whole_param_name($generator)}#if $append_ptr then '*' else ''# val;
                    ${f.type.to_native({"generator": $generator,
                                        "in_value": "kv",
                                        "out_value": "val",
                                        "class_name": $current_class.class_name,
                                        "ruby_namespaced_class_name": $generator.scriptname_from_native($current_class.namespaced_class_name, $current_class.namespace_name),
                                        "func_name": $f.name,
                                        "level": 5,
                                        "arg":$f.type,
                                        "ntype": $f.type.namespaced_name.replace("*", ""),
                                        "scriptname": $generator.scriptname_from_native($f.type.namespaced_name, $f.type.namespace_name)})};
                    if (ok) {
                        cobj->${f.name} = #if $append_ptr then '*' else ''#val;
                    }
                }
    #end for
            }
        }
    }

    if (argc > 1) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : ${current_class.namespaced_class_name}#constructor");
    }

    return self;
}

#end if
void ruby_register_${generator.prefix}_${current_class.class_name}(mrb_state* mrb, struct RClass* rmodule)
{
    std::string typeName = typeid(${current_class.namespaced_class_name}).name();
    g_rubyType[typeName] = "${generator.scriptname_from_native($current_class.namespaced_class_name, $current_class.namespace_name)}";
#if $current_class.is_ref_class
    #set $ruby_data_type = "ruby_cocos2dx_Ref_type"
#else
    #set $ruby_data_type = "ruby_%s_%s_type" % ($generator.prefix, $current_class.class_name)
#end if
    g_rubyDataType[typeName] = &${ruby_data_type};

#if len($current_class.parents) > 0
    #set $namespaced_parent_class_name = $generator.scriptname_from_native($current_class.parents[0].namespaced_class_name,$current_class.parents[0].namespace_name)
    #set tokens = namespaced_parent_class_name.split("::")
    struct RClass* p_rmodule = mrb->object_class;
    #for sub_module in tokens[0:-1]
    p_rmodule = mrb_module_get_under(mrb, p_rmodule, "${sub_module}");
    #end for
    struct RClass* p_rclass = mrb_class_get_under(mrb, p_rmodule, "${tokens[-1]}");
    #if "::" in $current_class.namespaced_class_name
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "${current_class.class_name}", p_rclass);
    #else
    struct RClass *rclass = mrb_define_class(mrb, "${current_class.class_name}", p_rclass);
    #end if
#else
    #if "::" in $current_class.namespaced_class_name
    struct RClass *rclass = mrb_define_class_under(mrb, rmodule, "${current_class.class_name}", mrb->object_class);
    #else
    struct RClass *rclass = mrb_define_class(mrb, "${current_class.class_name}", mrb->object_class);
    #end if
#end if
    MRB_SET_INSTANCE_TT(rclass, MRB_TT_DATA);

#if $has_constructor
    #set fn = $current_class.methods.constructor
    mrb_define_method(mrb, rclass, "initialize", ${fn.signature_name}, ${fn.ruby_args});
#end if
#if $current_class.is_struct and (not $current_class.has_constructor)
    mrb_define_method(mrb, rclass, "initialize", ruby_${generator.prefix}_${current_class.class_name}_constructor, ARGS_NONE());
#end if
#for m in $methods
    #set fn = m['impl']
    mrb_define_method(mrb, rclass, "${generator.to_ruby_name(m['name'].replace('operator', ''))}", ${fn.signature_name}, ${fn.ruby_args});
#end for
#for m in $st_methods
    #set fn = m['impl']
    mrb_define_class_method(mrb, rclass, "${generator.to_ruby_name(m['name'])}", ${fn.signature_name}_static, ${fn.ruby_args});
#end for
#for f in $fields
    mrb_define_method(mrb, rclass, "${generator.to_ruby_name(f.name)}", ruby_${generator.prefix}_${current_class.class_name}_property_${f.name}_get, ARGS_NONE());
    mrb_define_method(mrb, rclass, "${generator.to_ruby_name(f.name)}=", ruby_${generator.prefix}_${current_class.class_name}_property_${f.name}_set, ARGS_REQ(1));
#end for
#if len($constants) > 0
    ruby_${generator.prefix}_${current_class.class_name}_constants_init(mrb, rclass);
    #for c in $constants
    mrb_define_class_method(mrb, rclass, "${c.name}", ruby_${generator.prefix}_constant_get, ARGS_NONE());
    #end for
#end if
#for e in $enums.values()
    #set $en = "N" if $e.name == "@" else $e.name
    #if not $e.name == "@"
        #set $rclass_name = "renum_" + $e.name
    struct RClass* ${rclass_name} = mrb_define_module_under(mrb, rclass, "${e.name}");
    #else
        #set $rclass_name = "rclass"
    #end if
    ruby_${generator.prefix}_${current_class.class_name}_${en}_enum_init(mrb, ${rclass_name});
    #for c in $e.enum_constants
    mrb_define_class_method(mrb, ${rclass_name}, "${c.name}", ruby_${generator.prefix}_constant_get, ARGS_NONE());
    #end for
#end for
}
