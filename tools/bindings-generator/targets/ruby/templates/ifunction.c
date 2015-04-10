## ===== instance function implementation template - for functions
#if $is_ref_class
    #set $ruby_data_type = "ruby_cocos2dx_Ref_type"
#else
    #set $ruby_data_type = "ruby_%s_%s_type" % ($generator.prefix, $class_name)
#end if
mrb_value ${signature_name}(mrb_state* mrb, mrb_value self)
{
    #if not $is_constructor
    ${namespaced_class_name}* cobj = static_cast<${namespaced_class_name}*>(mrb_get_datatype(mrb, self, &${ruby_data_type}));
    #end if

    mrb_value* argv;
    int argc;
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
            #set $func_args = []
            #set $key_arg = None
            #while $count < $arg_idx + $vcount
                #set $idx = $count if $count < $arg_idx else $arg_idx - 1
                #set $arg = $func.arguments[$idx]
                #set $append_ptr = False
                #if $func.argumtntTips[$idx] == "key"
                    #set $key_arg = "arg" + str($count)
                #end if
                #if $arg.is_object and (not $arg.is_pointer) and (not $arg.is_value_param)
                    #set $append_ptr = True
                #end if
            ${arg.get_whole_param_name($generator)}#if $append_ptr then '*' else ''# arg${count};
                #if $arg.is_function
                    #set $func_args = $func_args + [($idx, $count)]
                #else
            ${arg.to_native({"generator": $generator,
                             "in_value": "argv[" + str(count) + "]",
                             "out_value": "arg" + str(count),
                             "class_name": $class_name,
                             "ruby_namespaced_class_name": $generator.scriptname_from_native($namespaced_class_name, $namespace_name),
                             "func_name": $func_name,
                             "level": 2,
                             "arg": $arg,
                             "ntype": $arg.namespaced_name.replace("*", ""),
                             "scriptname": $generator.scriptname_from_native($arg.namespaced_name, $arg.namespace_name)})};
                    #if $arg_idx >= 0
            if (!ok) { break; }
                    #end if
                #end if
                #set $arg_array += ["*arg"+str(count) if $append_ptr else "arg"+str(count)]
                #set $count = $count + 1
            #end while
            #for $func_arg in $func_args
                #set $arg = $func.arguments[$func_arg[0]]
            ${arg.to_native({"generator": $generator,
                             "in_value": "argv[" + str(func_arg[1]) + "]",
                             "out_value": "arg" + str(func_arg[1]),
                             "class_name": $class_name,
                             "ruby_namespaced_class_name": $generator.scriptname_from_native($namespaced_class_name, $namespace_name),
                             "func_name": $func_name,
                             "level": 2,
                             "arg": $arg,
                             "key_arg": $key_arg,
                             "ntype": $arg.namespaced_name.replace("*", ""),
                             "scriptname": $generator.scriptname_from_native($arg.namespaced_name, $arg.namespace_name)})};
            #end for
            #if $func.is_variadic
                #set $arg_array += ["NULL"]
            #end if
            #set $arg_list = ", ".join($arg_array)
            #if $func.ret_type.name == "void"
                #if $is_constructor
            ${namespaced_class_name}* cobj = new ${namespaced_class_name}($arg_list);
            DATA_TYPE(self) = &${ruby_data_type};
            DATA_PTR(self) = cobj;
                #else
            cobj->${func.func_name}($arg_list);
                #end if
            return self;
            #else
                #set $ntype = $func.ret_type.get_whole_param_name($generator)
                #if $func.ret_type.is_enum
            int retval = (int)cobj->${func.func_name}($arg_list);
                #else
            ${ntype} retval = cobj->${func.func_name}($arg_list);
                #end if
                #if $func.ret_type.is_object and (not $func.ret_type.is_pointer) and (not $func.ret_type.is_value_param)
            ${ntype}* retval_ptr = new ${ntype}(retval);
                    #set $in_value = "retval_ptr"
                #else
                    #set $in_value = "retval"
                #end if
            mrb_value ret;
            ${func.ret_type.from_native({"generator": $generator,
                                         "in_value": $in_value,
                                         "out_value": "ret",
                                         "type_name": $func.ret_type.namespaced_name.replace("*", ""),
                                         "ntype": $ntype.replace("const ", ""),
                                         "class_name": $class_name,
                                         "func_name": $func_name,
                                         "ruby_class": "nullptr",
                                         "level": 2,
                                         "scriptname": $generator.scriptname_from_native($func.ret_type.namespaced_name, $func.ret_type.namespace_name)})};
            return ret;
            #end if
        }
            #set $vcount = $vcount + 1
        #end while
    } while (0);
        #set $arg_idx = $arg_idx + 1
    #end while
#end for

    mrb_raise(mrb, E_RUNTIME_ERROR, "undefined method : ${namespaced_class_name}#${func_name}");

    return mrb_nil_value();
}

