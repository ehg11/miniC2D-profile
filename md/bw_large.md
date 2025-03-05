## bw_large

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| nnf_total   | 0.03142  |  1.13581  |
| total_time  | 0.027663 |  1        |
| vtree_total | 0.013268 |  0.47963  |
| sat_total   | 0.009611 |  0.347432 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| nnf_manager_save_to_file     | 0.030846 | 1.11506     |
| vtree_manager_free           | 0.01267  | 0.458013    |
| sat_state_new                | 0.004414 | 0.159563    |
| sat_decide_literal           | 0.001149 | 0.0415356   |
| sat_is_subsumed_clause       | 0.000876 | 0.0316668   |
| sat_is_implied_literal       | 0.000651 | 0.0235332   |
| sat_undo_decide_literal      | 0.000613 | 0.0221596   |
| sat_assert_clause            | 0.000519 | 0.0187615   |
| nnf_conjoin                  | 0.000427 | 0.0154358   |
| sat_state_free               | 0.000425 | 0.0153635   |
| sat_var2nliteral             | 0.000348 | 0.01258     |
| vtree_is_shannon_node        | 0.000285 | 0.0103026   |
| sat_var2pliteral             | 0.00028  | 0.0101218   |
| sat_is_instantiated_var      | 0.000262 | 0.00947113  |
| vtree_shannon_var            | 0.000209 | 0.00755522  |
| vtree_is_leaf                | 8.5e-05  | 0.0030727   |
| nnf_literal2node             | 7.3e-05  | 0.0026389   |
| sat_undo_assert_unit_clauses | 6e-05    | 0.00216896  |
| nnf_manager_free             | 4.7e-05  | 0.00169902  |
| nnf_manager_new              | 2.7e-05  | 0.000976033 |
| vtree_print_widths           | 1.9e-05  | 0.000686838 |
| sat_is_irrelevant_var        | 7e-06    | 0.000253046 |
| sat_at_assertion_level       | 5e-06    | 0.000180747 |
| sat_assert_unit_clauses      | 2e-06    | 7.22987e-05 |
