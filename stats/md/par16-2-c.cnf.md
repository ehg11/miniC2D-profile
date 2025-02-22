# Stats for par16-2-c.cnf

## Aggregate Stats

| Category        |   Elapsed Time |   Percentage of Total Time |
|:----------------|---------------:|---------------------------:|
| nnf_functions   |       0.004947 |                  0.0402752 |
| sat_functions   |       6.51109  |                 53.009     |
| vtree_functions |       0.17558  |                  1.42946   |
| all_apis        |       6.69162  |                 54.4787    |

## Function Stats

| Function                     |   Elapsed Time |   Percentage of Total Time |
|:-----------------------------|---------------:|---------------------------:|
| total_time                   |      12.283    |              100           |
| sat_is_subsumed_clause       |       2.28586  |               18.61        |
| sat_is_implied_literal       |       1.50324  |               12.2384      |
| sat_var2pliteral             |       0.759313 |                6.18182     |
| sat_var2nliteral             |       0.757552 |                6.16748     |
| sat_assert_clause            |       0.525476 |                4.27808     |
| sat_decide_literal           |       0.522192 |                4.25134     |
| sat_undo_decide_literal      |       0.109658 |                0.892762    |
| vtree_manager_new            |       0.088439 |                0.720011    |
| vtree_is_shannon_node        |       0.027167 |                0.221176    |
| vtree_shannon_var            |       0.026762 |                0.217878    |
| sat_is_instantiated_var      |       0.026636 |                0.216853    |
| vtree_is_leaf                |       0.020731 |                0.168778    |
| vtree_manager_free           |       0.012456 |                0.101408    |
| sat_is_irrelevant_var        |       0.00963  |                0.078401    |
| sat_at_assertion_level       |       0.009194 |                0.0748514   |
| nnf_conjoin                  |       0.002444 |                0.0198974   |
| nnf_literal2node             |       0.002078 |                0.0169177   |
| sat_state_new                |       0.001756 |                0.0142962   |
| sat_state_free               |       0.00056  |                0.00455915  |
| nnf_manager_save_to_file     |       0.000358 |                0.0029146   |
| nnf_manager_free             |       4e-05    |                0.000325653 |
| nnf_manager_new              |       2.5e-05  |                0.000203533 |
| vtree_print_widths           |       2.5e-05  |                0.000203533 |
| sat_undo_assert_unit_clauses |       1.7e-05  |                0.000138403 |
| nnf_manager_memory           |       1e-06    |                8.14133e-06 |
| nnf_manager_set_root         |       1e-06    |                8.14133e-06 |
| sat_assert_unit_clauses      |       1e-06    |                8.14133e-06 |
| sat_var_count                |       1e-06    |                8.14133e-06 |
