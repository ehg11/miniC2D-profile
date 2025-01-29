#include <time.h>
#include "c2d.h"

double timing[SAT_FUNC_COUNT] = {0};

BOOLEAN time_sat_is_instantiated_var(const Var* var) {
    clock_t start = clock();
    BOOLEAN result = sat_is_instantiated_var(var);
    clock_t end = clock();

    timing[IS_INSTANTIATED_VAR] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}