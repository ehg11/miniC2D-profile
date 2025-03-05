## All Stats (without outlier)

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 4015.11  | 1         |
| sat_total   | 1540.7   | 0.383725  |
| nnf_total   |  308.355 | 0.0767987 |
| vtree_total |  220.678 | 0.0549619 |

### Functions

| Function                     |       Time |     Percent |
|:-----------------------------|-----------:|------------:|
| sat_is_subsumed_clause       | 516.903    | 0.128739    |
| sat_is_implied_literal       | 340.277    | 0.0847491   |
| sat_decide_literal           | 193.027    | 0.0480751   |
| sat_var2nliteral             | 187.693    | 0.0467466   |
| nnf_conjoin                  | 176.029    | 0.0438417   |
| sat_var2pliteral             | 152.161    | 0.0378972   |
| vtree_is_shannon_node        | 102.542    | 0.0255389   |
| nnf_manager_save_to_file     |  80.4788   | 0.020044    |
| vtree_shannon_var            |  77.7477   | 0.0193638   |
| sat_is_instantiated_var      |  77.1568   | 0.0192166   |
| nnf_literal2node             |  45.8601   | 0.0114219   |
| sat_assert_clause            |  41.71     | 0.0103883   |
| vtree_is_leaf                |  36.5673   | 0.00910742  |
| sat_undo_decide_literal      |  28.3894   | 0.00707063  |
| nnf_disjoin                  |   5.76859  | 0.00143672  |
| vtree_manager_free           |   3.82002  | 0.000951411 |
| sat_state_free               |   1.92559  | 0.000479586 |
| sat_is_irrelevant_var        |   1.04411  | 0.000260045 |
| sat_state_new                |   0.371558 | 9.25399e-05 |
| nnf_manager_free             |   0.216324 | 5.38774e-05 |
| sat_at_assertion_level       |   0.033127 | 8.25058e-06 |
| sat_assert_unit_clauses      |   0.005081 | 1.26547e-06 |
| sat_undo_assert_unit_clauses |   0.003541 | 8.81918e-07 |
| nnf_manager_new              |   0.002445 | 6.08949e-07 |
| vtree_print_widths           |   0.001481 | 3.68856e-07 |
| nnf_manager_set_root         |   6e-06    | 1.49435e-09 |
