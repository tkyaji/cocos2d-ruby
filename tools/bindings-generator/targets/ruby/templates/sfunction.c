## ===== instance function implementation template - for static functions
#if $is_ref_class
    #set $ruby_data_type = "ruby_cocos2dx_Ref_type"
#else
    #set $ruby_data_type = "ruby_%s_%s_type" % ($generator.prefix, $class_name)
#end if
mrb_value ${signature_name}_static(mrb_state* mrb, mrb_value self)
{
    mrb_value* argv;
    mrb_int argc;
    mrb_get_args(mrb, "*", &argv, &argc);

#if sum([func.max_args for func in $implementations]) > 0
    bool ok = true;
#end if
#for func in $implementations
    #set arg_count = $func.max_args
    #set arg_idx = $func.min_args
    #while $arg_idx <= $arg_count
    do {
        #set $vcount_max = 10 if $func.is_variadic else 1
        #set $vcount = 0
        #while $vcount < $vcount_max
        if (argc == ${arg_idx + $vcount}) {
            #set arg_list = ""
            #set arg_array = []
            #set $count = 0
                #if $func_name.startswith('create')
            std::map<std::string, mrb_value> callbacks;
                #end if
            #while $count < $arg_idx + $vcount
                #set $arg = $func.arguments[$count] if $count < $arg_idx else $func.arguments[$arg_idx - 1]
                #set $append_ptr = False
                #if $arg.is_object and (not $arg.is_pointer) and (not $arg.is_value_param)
                    #set $append_ptr = True
                #end if
            ${arg.get_whole_param_name($generator)}#if $append_ptr then '*' else ''# arg${count};
            ${arg.to_native({"generator": $generator,
                             "in_value": "argv[" + str(count) + "]",
                             "out_value": "arg" + str(count),
                             "class_name": $class_name,
                             "ruby_namespaced_class_name": $generator.scriptname_from_native($namespaced_class_name, $namespace_name),
                             "func_name": $func_name,
                             "level": 2,
                             "arg": $arg,
                             "key_arg": None,
                             "ntype": $arg.namespaced_name.replace("*", ""),
                             "scriptname": $generator.scriptname_from_native($arg.namespaced_name, $arg.namespace_name)})};
                #set $arg_array += ["*arg"+str(count) if $append_ptr else "arg"+str(count)]
                #set $count = $count + 1
                #if $arg_idx >= 0
            if (!ok) { break; }
                #end if

            #end while
            #if $func.is_variadic
                #set $arg_array += ["NULL"]
            #end if
            #set $arg_list = ", ".join($arg_array)
            #if $func.ret_type.name == "void"
            ${namespaced_class_name}::${func.func_name}($arg_list);
            return self;
            #else
                #set $ntype = $func.ret_type.get_whole_param_name($generator)
                #if $func.ret_type.is_enum
            int retval = (int)${namespaced_class_name}::${func.func_name}($arg_list);
                #else
            ${ntype} retval = ${namespaced_class_name}::${func.func_name}($arg_list);
                #end if
                #if $func.ret_type.is_object and (not $func.ret_type.is_pointer) and (not $func.ret_type.is_value_param)
            ${ntype}* retval_ptr = new ${ntype}(retval);
                    #set $in_value = "retval_ptr"
                #else
                    #set $in_value = "retval"
                #end if
            mrb_value ret;
                #if $func.func_name.startswith('create')
            RClass* rclass = mrb_class_ptr(self);
                    #set $ruby_class = "rclass"
                #else
                    #set $ruby_class = "nullptr"
                #end if
            ${func.ret_type.from_native({"generator": $generator,
                                         "in_value": $in_value,
                                         "out_value": "ret",
                                         "type_name": $func.ret_type.namespaced_name.replace("*", ""),
                                         "ntype": $ntype.replace("const ", ""),
                                         "class_name": $class_name,
                                         "ruby_class": $ruby_class,
                                         "level": 2,
                                         "scriptname": $generator.scriptname_from_native($func.ret_type.namespaced_name, $func.ret_type.namespace_name)})};
                #if $func.func_name.startswith('create')
            if (callbacks.size() > 0) {
                mrb_value hash = mrb_iv_get(mrb, ret, mrb_intern_cstr(mrb, "__callback_hash"));
                if (!mrb_hash_p(hash)) {
                    hash = mrb_hash_new(mrb);
                }
                for (auto elm : callbacks) {
                    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, elm.first.c_str()), elm.second);
                    mrb_iv_set(mrb, ret, mrb_intern_cstr(mrb, "__callback_hash"), hash);
                }
            }
            g_rubyValue.push_back(ret);
            mrb_funcall(mrb, ret, "initialize", 0);
                #end if
            return ret;
            #end if
        }
            #set $vcount = $vcount + 1
        #end while
    } while (0);
        #set $arg_idx = $arg_idx + 1
    #end while
#end for

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined static method : ${namespaced_class_name}#${func_name}");

    return mrb_nil_value();
}

