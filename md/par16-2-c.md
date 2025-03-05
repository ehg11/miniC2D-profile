## par16-2-c

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |    Percent |
|:------------|---------:|-----------:|
| total_time  | 1.76613  | 1          |
| sat_total   | 1.43446  | 0.812207   |
| nnf_total   | 0.024468 | 0.0138541  |
| vtree_total | 0.015974 | 0.00904465 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| sat_assert_clause            | 0.554439 | 0.313929    |
| sat_decide_literal           | 0.548565 | 0.310604    |
| sat_undo_decide_literal      | 0.101405 | 0.0574166   |
| sat_is_subsumed_clause       | 0.089271 | 0.0505462   |
| sat_is_implied_literal       | 0.068666 | 0.0388794   |
| sat_var2nliteral             | 0.036193 | 0.0204929   |
| sat_var2pliteral             | 0.029873 | 0.0169144   |
| nnf_manager_save_to_file     | 0.023731 | 0.0134368   |
| vtree_manager_free           | 0.012429 | 0.00703744  |
| sat_state_new                | 0.002941 | 0.00166523  |
| vtree_shannon_var            | 0.001368 | 0.000774577 |
| vtree_is_shannon_node        | 0.00129  | 0.000730412 |
| sat_is_instantiated_var      | 0.001022 | 0.000578668 |
| vtree_is_leaf                | 0.000871 | 0.00049317  |
| sat_is_irrelevant_var        | 0.000798 | 0.000451836 |
| sat_at_assertion_level       | 0.000687 | 0.000388987 |
| sat_state_free               | 0.000582 | 0.000329535 |
| nnf_conjoin                  | 0.000556 | 0.000314813 |
| nnf_literal2node             | 0.00011  | 6.22832e-05 |
| nnf_manager_new              | 3.6e-05  | 2.03836e-05 |
| nnf_manager_free             | 3.5e-05  | 1.98174e-05 |
| sat_undo_assert_unit_clauses | 1.6e-05  | 9.05938e-06 |
| vtree_print_widths           | 1.6e-05  | 9.05938e-06 |
| sat_assert_unit_clauses      | 2e-06    | 1.13242e-06 |
