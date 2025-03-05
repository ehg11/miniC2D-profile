## log-3

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |      Time |   Percent |
|:------------|----------:|----------:|
| total_time  | 13.641    | 1         |
| sat_total   |  7.38778  | 0.541586  |
| nnf_total   |  0.270522 | 0.0198315 |
| vtree_total |  0.243832 | 0.0178749 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| sat_is_subsumed_clause       | 3.18532  | 0.23351     |
| sat_decide_literal           | 1.60437  | 0.117614    |
| sat_undo_decide_literal      | 0.81344  | 0.059632    |
| sat_is_implied_literal       | 0.596385 | 0.04372     |
| sat_assert_clause            | 0.513893 | 0.0376727   |
| sat_var2nliteral             | 0.306564 | 0.0224737   |
| sat_var2pliteral             | 0.256235 | 0.0187842   |
| nnf_conjoin                  | 0.128638 | 0.00943025  |
| vtree_is_shannon_node        | 0.111413 | 0.00816751  |
| nnf_manager_save_to_file     | 0.09355  | 0.006858    |
| vtree_shannon_var            | 0.080022 | 0.00586629  |
| sat_is_instantiated_var      | 0.079657 | 0.00583953  |
| nnf_literal2node             | 0.043637 | 0.00319896  |
| vtree_is_leaf                | 0.033216 | 0.00243501  |
| vtree_manager_free           | 0.019104 | 0.00140048  |
| sat_state_new                | 0.018532 | 0.00135855  |
| sat_state_free               | 0.01039  | 0.000761674 |
| nnf_disjoin                  | 0.00351  | 0.000257313 |
| sat_is_irrelevant_var        | 0.001837 | 0.000134668 |
| sat_at_assertion_level       | 0.001148 | 8.41581e-05 |
| nnf_manager_free             | 0.001125 | 8.2472e-05  |
| vtree_print_widths           | 7.7e-05  | 5.64475e-06 |
| nnf_manager_new              | 6.2e-05  | 4.54512e-06 |
| sat_assert_unit_clauses      | 1.1e-05  | 8.06393e-07 |
| sat_undo_assert_unit_clauses | 3e-06    | 2.19925e-07 |
