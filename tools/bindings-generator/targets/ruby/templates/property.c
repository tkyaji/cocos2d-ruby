#if $is_ref_class
    #set $ruby_data_type = "ruby_cocos2dx_Ref_type"
#else
    #set $ruby_data_type = "ruby_%s_%s_type" % ($generator.prefix, $class_name)
#end if
mrb_value ruby_${generator.prefix}_${class_name}_property_${name}_get(mrb_state* mrb, mrb_value self)
{
    ${namespaced_class_name}* cobj = static_cast<${namespaced_class_name}*>(mrb_get_datatype(mrb, self, &${ruby_data_type}));

#set $ntype = $type.get_whole_param_name($generator)
#if $type.is_object and (not $type.is_pointer) and (not $type.is_value_param)
    ${ntype}* retval_ptr = new ${ntype}(cobj->${name});
        #set $in_value = "retval_ptr"
#else
        #set $in_value = "cobj->" + $name
#end if
    mrb_value ret;
    ${type.from_native({"generator": $generator,
                                 "in_value": $in_value,
                                 "out_value": "ret",
                                 "type_name": $type.namespaced_name.replace("*", ""),
                                 "ntype": $ntype.replace("const ", ""),
                                 "class_name": $class_name,
                                 "func_name": $name,
                                 "ruby_class": "nullptr",
                                 "level": 0,
                                 "scriptname": $generator.scriptname_from_native($type.namespaced_name, $type.namespace_name)})};
    return ret;
}

mrb_value ruby_${generator.prefix}_${class_name}_property_${name}_set(mrb_state* mrb, mrb_value self)
{
    ${namespaced_class_name}* cobj = static_cast<${namespaced_class_name}*>(mrb_get_datatype(mrb, self, &${ruby_data_type}));

    mrb_value argv;
    mrb_get_args(mrb, "o", &argv);

    bool ok = true;
#set $append_ptr = False
#if $type.is_object and (not $type.is_pointer) and (not $type.is_value_param)
    #set $append_ptr = True
#end if
    ${type.get_whole_param_name($generator)}#if $append_ptr then '*' else ''# val;
    ${type.to_native({"generator": $generator,
                     "in_value": "argv",
                     "out_value": "val",
                     "class_name": $class_name,
                     "ruby_namespaced_class_name": $generator.scriptname_from_native($namespaced_class_name, $namespace_name),
                     "func_name": $name,
                     "level": 0,
                     "arg":$type,
                     "key_arg": None,
                     "ntype": $type.namespaced_name.replace("*", ""),
                     "scriptname": $generator.scriptname_from_native($type.namespaced_name, $type.namespace_name)})};
    if (! ok) {
        mrb_raise(mrb, E_RUNTIME_ERROR, "convert to native failed : ${class_name}#${name}");
    }
    cobj->${name} = #if $append_ptr then '*' else ''#val;

    return self;
}

