do {
    // Lambda binding for ruby. (from_native)
    mrb_value hash = mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "__callback_hash"));
    if (!mrb_hash_p(hash)) {
        return mrb_nil_value();
    }
    ret = mrb_hash_get(mrb, hash, mrb_str_new_cstr(mrb, "${func_name.replace('get', '').replace('set', '')}"));
    if (ret.tt != MRB_TT_PROC) {
        return mrb_nil_value();
    }
} while(0)