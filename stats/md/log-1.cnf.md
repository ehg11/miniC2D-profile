# Stats for log-1.cnf

## Aggregate Stats

| Category        |   Elapsed Time |   Percentage of Total Time |
|:----------------|---------------:|---------------------------:|
| nnf_functions   |       0.520553 |                    5.57218 |
| sat_functions   |       2.32093  |                   24.844   |
| vtree_functions |       2.12325  |                   22.7281  |
| all_apis        |       4.96474  |                   53.1443  |

## Function Stats

| Function                     |   Elapsed Time |   Percentage of Total Time |
|:-----------------------------|---------------:|---------------------------:|
| total_time                   |       9.342    |              100           |
| vtree_is_shannon_node        |       0.695809 |                7.44818     |
| sat_is_implied_literal       |       0.577688 |                6.18377     |
| vtree_manager_new            |       0.571858 |                6.12137     |
| sat_is_instantiated_var      |       0.569319 |                6.09419     |
| vtree_shannon_var            |       0.568153 |                6.08171     |
| sat_is_subsumed_clause       |       0.384262 |                4.11327     |
| sat_var2nliteral             |       0.377736 |                4.04342     |
| sat_var2pliteral             |       0.37492  |                4.01327     |
| vtree_is_leaf                |       0.274245 |                2.93561     |
| nnf_conjoin                  |       0.268765 |                2.87695     |
| nnf_literal2node             |       0.238899 |                2.55726     |
| sat_decide_literal           |       0.018931 |                0.202644    |
| vtree_manager_free           |       0.013154 |                0.140805    |
| sat_undo_decide_literal      |       0.009088 |                0.0972811   |
| nnf_disjoin                  |       0.007131 |                0.0763327   |
| nnf_manager_save_to_file     |       0.005513 |                0.0590131   |
| sat_state_new                |       0.004669 |                0.0499786   |
| sat_is_irrelevant_var        |       0.003466 |                0.0371013   |
| sat_state_free               |       0.000575 |                0.006155    |
| nnf_manager_free             |       0.0002   |                0.00214087  |
| sat_assert_clause            |       0.00014  |                0.00149861  |
| sat_at_assertion_level       |       8.3e-05  |                0.000888461 |
| nnf_manager_new              |       4.4e-05  |                0.000470991 |
| vtree_print_widths           |       3.6e-05  |                0.000385356 |
| sat_assert_unit_clauses      |       2.6e-05  |                0.000278313 |
| sat_undo_assert_unit_clauses |       2.6e-05  |                0.000278313 |
| nnf_manager_memory           |       1e-06    |                1.07043e-05 |
| sat_var_count                |       1e-06    |                1.07043e-05 |
