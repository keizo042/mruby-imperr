#include "mrbgem/implerr.h"

#include "mruby.h"
#include "mruby/class.h"
#include "mruby/value.h"
#include "mruby/variable.h"

mrb_value mrb_implerr_init(mrb_state *mrb, mrb_value self) {
    mrb_int argc;
    mrb_value argv[2], line, file;

    argc = mrb_get_args(mrb, "|oo", &argv[0], &argv[1]);
    if (argc > 0) {
        for (int i = 0; i < argc; i++) {
            switch (mrb_type(argv[i])) {
                case MRB_TT_FIXNUM:
                    line = argv[i];
                    break;
                case MRB_TT_STRING:
                    file = argv[i]; break;
                default:
                    mrb_raise(mrb, E_ARGUMENT_ERROR,
                              "require Fixnum or String, in order to accept "
                              "__line__ and __file__");
                    return mrb_nil_value();
            }
        }
    }
    mrb_iv_set(mrb, self, mrb_intern_lit(mrb, "@line"), line);
    mrb_iv_set(mrb, self, mrb_intern_lit(mrb, "@file"), file);

    return self;
}

void mrb_mruby_implerr_gem_init(mrb_state *mrb) {
    struct RClass *implerr = NULL;
    implerr =
        mrb_define_class(mrb, "ImplementationError", mrb->eStandardError_class);

    mrb_define_method(mrb, implerr, "initialize", mrb_implerr_init,
                            MRB_ARGS_OPT(2));
}

void mrb_mruby_implerr_gem_final(mrb_state *mrb) {}
