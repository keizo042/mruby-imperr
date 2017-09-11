#ifndef _MRB_IMPLERR_H
#define _MRB_IMPLERR_H

#include "mruby.h"

#define E_IMP_ERROR (mrb_exec_get(mrb, "ImplementationError"))

void mrb_mruby_implerr_gem_init(mrb_state *mrb);
#endif
