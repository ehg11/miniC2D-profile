## log-2

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 40.8158  | 1         |
| sat_total   | 15.9009  | 0.389576  |
| nnf_total   |  3.49896 | 0.0857255 |
| vtree_total |  2.81527 | 0.0689748 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| sat_is_subsumed_clause       | 6.67061  | 0.163432    |
| sat_decide_literal           | 2.32033  | 0.0568488   |
| sat_is_implied_literal       | 1.95687  | 0.047944    |
| nnf_conjoin                  | 1.94605  | 0.0476787   |
| vtree_is_shannon_node        | 1.36401  | 0.0334187   |
| sat_undo_decide_literal      | 1.12807  | 0.0276379   |
| sat_var2nliteral             | 1.05255  | 0.0257878   |
| vtree_shannon_var            | 1.03129  | 0.0252669   |
| sat_is_instantiated_var      | 0.972175 | 0.0238186   |
| sat_var2pliteral             | 0.897831 | 0.0219971   |
| sat_assert_clause            | 0.873675 | 0.0214053   |
| nnf_manager_save_to_file     | 0.843436 | 0.0206644   |
| nnf_literal2node             | 0.651346 | 0.0159582   |
| vtree_is_leaf                | 0.389153 | 0.00953436  |
| nnf_disjoin                  | 0.049637 | 0.00121612  |
| vtree_manager_free           | 0.030739 | 0.000753114 |
| sat_state_new                | 0.015262 | 0.000373923 |
| nnf_manager_free             | 0.008435 | 0.00020666  |
| sat_state_free               | 0.008206 | 0.000201049 |
| sat_is_irrelevant_var        | 0.004068 | 9.96672e-05 |
| sat_at_assertion_level       | 0.001214 | 2.97434e-05 |
| vtree_print_widths           | 7e-05    | 1.71502e-06 |
| nnf_manager_new              | 6.1e-05  | 1.49452e-06 |
| sat_assert_unit_clauses      | 1e-05    | 2.45003e-07 |
| sat_undo_assert_unit_clauses | 4e-06    | 9.80012e-08 |
