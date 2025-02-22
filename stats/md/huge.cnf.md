# Stats for huge.cnf

## Aggregate Stats

| Category        |   Elapsed Time |   Percentage of Total Time |
|:----------------|---------------:|---------------------------:|
| nnf_functions   |       0.003631 |                   0.173152 |
| sat_functions   |       0.085957 |                   4.09905  |
| vtree_functions |       1.91265  |                  91.2089   |
| all_apis        |       2.00224  |                  95.4811   |

## Function Stats

| Function                     |   Elapsed Time |   Percentage of Total Time |
|:-----------------------------|---------------:|---------------------------:|
| total_time                   |       2.097    |              100           |
| vtree_manager_new            |       1.88589  |               89.9326      |
| sat_is_subsumed_clause       |       0.033414 |                1.59342     |
| sat_is_implied_literal       |       0.017781 |                0.847926    |
| vtree_manager_free           |       0.012698 |                0.605532    |
| sat_var2pliteral             |       0.009114 |                0.434621    |
| sat_var2nliteral             |       0.009083 |                0.433143    |
| sat_state_new                |       0.006634 |                0.316357    |
| vtree_is_shannon_node        |       0.006005 |                0.286361    |
| vtree_shannon_var            |       0.005584 |                0.266285    |
| sat_is_instantiated_var      |       0.005557 |                0.264998    |
| vtree_is_leaf                |       0.002458 |                0.117215    |
| nnf_conjoin                  |       0.001758 |                0.083834    |
| sat_decide_literal           |       0.001657 |                0.0790176   |
| nnf_literal2node             |       0.001382 |                0.0659037   |
| sat_undo_decide_literal      |       0.001125 |                0.0536481   |
| sat_state_free               |       0.00071  |                0.0338579   |
| sat_assert_clause            |       0.000618 |                0.0294707   |
| nnf_manager_save_to_file     |       0.000414 |                0.0197425   |
| sat_is_irrelevant_var        |       9.1e-05  |                0.00433953  |
| sat_undo_assert_unit_clauses |       9.1e-05  |                0.00433953  |
| sat_at_assertion_level       |       8e-05    |                0.00381497  |
| nnf_manager_free             |       4.5e-05  |                0.00214592  |
| nnf_manager_new              |       3e-05    |                0.00143062  |
| vtree_print_widths           |       1.9e-05  |                0.000906056 |
| sat_assert_unit_clauses      |       2e-06    |                9.53743e-05 |
| nnf_manager_memory           |       1e-06    |                4.76872e-05 |
| nnf_manager_set_root         |       1e-06    |                4.76872e-05 |
