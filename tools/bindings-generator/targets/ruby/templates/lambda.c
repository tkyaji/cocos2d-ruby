#set $lparams_str = ", ".join(["%s larg%d" % (nt.get_whole_name($generator), i) for i, nt in enumerate($param_types)])
do {
    // Lambda binding for ruby.
    #if $func_name.startswith("create")
    unsigned long idx = g_rubyValue.size();
    #else
    unsigned long idx = -1;
    #end if
    #set $lret_type = $ret_type.get_whole_param_name($generator)
    #if $key_arg
    ${out_value} = [mrb, self, idx, ${key_arg}](${lparams_str}) -> ${lret_type} {
    #else
    ${out_value} = [mrb, self, idx](${lparams_str}) -> ${lret_type} {
    #end if
    #set $ruby_arg_array = []
    #for i, lparam in enumerate($param_types)
        mrb_value ruby_arg${i};
        ${lparam.from_native({"generator": $generator,
                              "in_value": "larg" + str($i),
                              "out_value": "ruby_arg" + str($i),
                              "type_name": $lparam.namespaced_name.replace("*", ""),
                              "ntype": $lparam.get_whole_param_name($generator),
                              "class_name": $class_name,
                              "ruby_class": "nullptr",
                              "level": $level,
                              "scriptname": $generator.scriptname_from_native($lparam.namespaced_name, $lparam.namespace_name)})};
        #set $ruby_arg_array += ["ruby_arg" + str($i)]
    #end for
    #if $func_name.startswith("create")
        mrb_value _self = g_rubyValue[idx];
        mrb_value hash = mrb_iv_get(mrb, _self, mrb_intern_cstr(mrb, "__callback_hash"));
    #else
        mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
    #end if
    #if $key_arg
        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, ${key_arg}.c_str()));
    #else
        mrb_value func = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "${func_name}->${out_value}"));
    #end if
    #if len($ruby_arg_array) > 0
        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", ${len($ruby_arg_array)}, ${", ".join($ruby_arg_array)});
    #else
        mrb_value mrb_ret = mrb_funcall(mrb, func, "call", 0);
    #end if
        if (mrb_exception_p(mrb_ret)) {
            mrb_exc_raise(mrb, mrb_ret);
        }
    #if $lret_type != "void":
        bool ok = true;
        ${lret_type} lret;
        ${ret_type.to_native({"generator": $generator,
                             "in_value": "mrb_ret",
                             "out_value": "lret",
                             "class_name": $class_name,
                             "ruby_namespaced_class_name": "",
                             "func_name": "Proc.call",
                             "level": 2,
                             "arg": $ret_type,
                             "ntype": $ret_type.get_whole_param_name($generator),
                             "scriptname": $generator.scriptname_from_native($ret_type.namespaced_name, $ret_type.namespace_name)})};
        return lret;
    #end if
    };
    #if $func_name.startswith("create")
    callbacks["${func_name}->${out_value}"] = ${in_value};
    #else
    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
    if (!mrb_hash_p(hash)) {
        hash = mrb_hash_new(mrb);
    }
    #if $key_arg
    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, ${key_arg}.c_str()), ${in_value});
    #else
    mrb_hash_set(mrb, hash, mrb_str_new_cstr(mrb, "${func_name}->${out_value}"), ${in_value});
    #end if
    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"), hash);
    #end if
    break;
} while(0)