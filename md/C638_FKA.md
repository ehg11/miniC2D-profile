## C638_FKA

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |      Time |   Percent |
|:------------|----------:|----------:|
| total_time  | 102.056   | 1         |
| sat_total   |  43.2882  | 0.424163  |
| nnf_total   |   1.13067 | 0.0110789 |
| vtree_total |   1.01893 | 0.0099841 |

### Functions

| Function                     |      Time |     Percent |
|:-----------------------------|----------:|------------:|
| sat_is_implied_literal       | 14.2569   | 0.139698    |
| sat_is_subsumed_clause       | 14.0586   | 0.137754    |
| sat_var2nliteral             |  7.98705  | 0.0782617   |
| sat_var2pliteral             |  6.1998   | 0.0607492   |
| nnf_conjoin                  |  0.620562 | 0.00608063  |
| vtree_is_shannon_node        |  0.475927 | 0.00466341  |
| sat_decide_literal           |  0.306887 | 0.00300706  |
| vtree_shannon_var            |  0.301144 | 0.00295078  |
| sat_is_instantiated_var      |  0.294603 | 0.00288669  |
| nnf_manager_save_to_file     |  0.210361 | 0.00206124  |
| nnf_literal2node             |  0.197526 | 0.00193547  |
| vtree_is_leaf                |  0.160238 | 0.0015701   |
| sat_undo_decide_literal      |  0.112289 | 0.00110027  |
| nnf_disjoin                  |  0.093049 | 0.000911748 |
| vtree_manager_free           |  0.08156  | 0.000799172 |
| sat_is_irrelevant_var        |  0.043721 | 0.000428404 |
| sat_state_free               |  0.01835  | 0.000179804 |
| sat_state_new                |  0.009745 | 9.54872e-05 |
| nnf_manager_free             |  0.009106 | 8.92259e-05 |
| sat_undo_assert_unit_clauses |  0.000116 | 1.13664e-06 |
| nnf_manager_new              |  6.4e-05  | 6.27109e-07 |
| vtree_print_widths           |  6.4e-05  | 6.27109e-07 |
| sat_assert_unit_clauses      |  5.8e-05  | 5.68318e-07 |
| sat_assert_clause            |  5.5e-05  | 5.38922e-07 |
| sat_at_assertion_level       |  9e-06    | 8.81872e-08 |
