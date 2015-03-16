#set $generator = $current_class.generator
#set $namespaced_class_name = $generator.scriptname_from_native($current_class.namespaced_class_name, $current_class.namespace_name)

static void ruby_${generator.prefix}_${current_class.class_name}_finalize(mrb_state *mrb, void *ptr)
{
\#if COCOS2D_DEBUG >= 1
    CCLOG("finalizing Ruby object (${namespaced_class_name})");
\#endif

#if $current_class.is_ref_class
    ${current_class.namespaced_class_name}* self = static_cast<${current_class.namespaced_class_name}*>(ptr);
    self->release();
#elif $current_class.has_constructor or $current_class.is_struct
    ${current_class.namespaced_class_name}* self = static_cast<${current_class.namespaced_class_name}*>(ptr);
    delete self;
#end if
}

static struct mrb_data_type ruby_${generator.prefix}_${current_class.class_name}_type = {"${namespaced_class_name}", ruby_${generator.prefix}_${current_class.class_name}_finalize};

