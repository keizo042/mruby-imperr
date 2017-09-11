#include <stdio.h>

#include "mruby.h"
#include "mrbgem/imperr.h"

// it examples does not work because mrbgem/include is not exporsed

mrb_value mrb_procedure(mrb_state *mrb){

    // do something and if some no way error
    mrb_raise(mrb, E_IMP_ERROR,"oh my misstake");
    return mrb_nil_value
}

int
main(int argc, char* argv[]) {
    mrb_state *mrb = mrb_open();

    mrb_procedure();

    mrb_close(mrb);
    
    return 0;
}
