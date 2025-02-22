# Stats for bw_large.a.cnf

## Aggregate Stats

| Category        |   Elapsed Time |   Percentage of Total Time |
|:----------------|---------------:|---------------------------:|
| nnf_functions   |       0.003633 |                   0.205603 |
| sat_functions   |       0.065057 |                   3.68178  |
| vtree_functions |       1.62161  |                  91.7721   |
| all_apis        |       1.6903   |                  95.6595   |

## Function Stats

| Function                     |   Elapsed Time |   Percentage of Total Time |
|:-----------------------------|---------------:|---------------------------:|
| total_time                   |       1.767    |              100           |
| vtree_manager_new            |       1.59543  |               90.2905      |
| sat_is_subsumed_clause       |       0.02246  |                1.27108     |
| sat_is_implied_literal       |       0.014528 |                0.822184    |
| vtree_manager_free           |       0.012655 |                0.716186    |
| sat_var2pliteral             |       0.007464 |                0.422411    |
| sat_var2nliteral             |       0.007409 |                0.419298    |
| vtree_is_shannon_node        |       0.005786 |                0.327448    |
| sat_is_instantiated_var      |       0.005378 |                0.304358    |
| vtree_shannon_var            |       0.005365 |                0.303622    |
| sat_state_new                |       0.0047   |                0.265988    |
| vtree_is_leaf                |       0.00235  |                0.132994    |
| nnf_conjoin                  |       0.00179  |                0.101302    |
| nnf_literal2node             |       0.001365 |                0.0772496   |
| sat_decide_literal           |       0.00128  |                0.0724392   |
| sat_undo_decide_literal      |       0.000696 |                0.0393888   |
| sat_assert_clause            |       0.000549 |                0.0310696   |
| nnf_manager_save_to_file     |       0.000409 |                0.0231466   |
| sat_state_free               |       0.000395 |                0.0223543   |
| sat_is_irrelevant_var        |       6.8e-05  |                0.00384833  |
| sat_at_assertion_level       |       6.6e-05  |                0.00373514  |
| sat_undo_assert_unit_clauses |       6e-05    |                0.00339559  |
| nnf_manager_free             |       4e-05    |                0.00226372  |
| nnf_manager_new              |       2.8e-05  |                0.00158461  |
| vtree_print_widths           |       2.3e-05  |                0.00130164  |
| sat_assert_unit_clauses      |       3e-06    |                0.000169779 |
| nnf_manager_set_root         |       1e-06    |                5.65931e-05 |
| sat_var_count                |       1e-06    |                5.65931e-05 |
