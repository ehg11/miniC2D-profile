# Stats for par16-1-c.cnf

## Aggregate Stats

| Category        |   Elapsed Time |   Percentage of Total Time |
|:----------------|---------------:|---------------------------:|
| nnf_functions   |       0.003563 |                  0.0175838 |
| sat_functions   |      10.3841   |                 51.2464    |
| vtree_functions |       0.193153 |                  0.95323   |
| all_apis        |      10.5808   |                 52.2173    |

## Function Stats

| Function                     |   Elapsed Time |   Percentage of Total Time |
|:-----------------------------|---------------:|---------------------------:|
| total_time                   |      20.263    |              100           |
| sat_is_subsumed_clause       |       3.98761  |               19.6793      |
| sat_is_implied_literal       |       2.5987   |               12.8248      |
| sat_var2pliteral             |       1.31252  |                6.4774      |
| sat_var2nliteral             |       1.30973  |                6.46367     |
| sat_decide_literal           |       0.531738 |                2.62418     |
| sat_assert_clause            |       0.485501 |                2.396       |
| sat_undo_decide_literal      |       0.097183 |                0.479608    |
| vtree_manager_new            |       0.075842 |                0.374288    |
| vtree_is_shannon_node        |       0.038876 |                0.191857    |
| sat_is_instantiated_var      |       0.035385 |                0.174629    |
| vtree_shannon_var            |       0.035317 |                0.174293    |
| vtree_is_leaf                |       0.029121 |                0.143715    |
| vtree_manager_free           |       0.013985 |                0.0690174   |
| sat_is_irrelevant_var        |       0.01154  |                0.0569511   |
| sat_at_assertion_level       |       0.011024 |                0.0544046   |
| nnf_conjoin                  |       0.001806 |                0.0089128   |
| sat_state_new                |       0.001694 |                0.00836007  |
| sat_state_free               |       0.001429 |                0.00705226  |
| nnf_literal2node             |       0.001393 |                0.0068746   |
| nnf_manager_save_to_file     |       0.000288 |                0.00142131  |
| nnf_manager_free             |       4.6e-05  |                0.000227015 |
| nnf_manager_new              |       2.8e-05  |                0.000138183 |
| sat_undo_assert_unit_clauses |       1.7e-05  |                8.38968e-05 |
| vtree_print_widths           |       1.2e-05  |                5.92212e-05 |
| nnf_manager_memory           |       1e-06    |                4.9351e-06  |
| nnf_manager_set_root         |       1e-06    |                4.9351e-06  |
| sat_assert_unit_clauses      |       1e-06    |                4.9351e-06  |
