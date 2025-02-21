# Stats for huge.cnf

## Aggregate Stats
| Function         |   Percentage of Total Time |
|:-----------------|---------------------------:|
| total_api_time   |                  95.4811   |
| total_vtree_time |                  91.2089   |
| total_sat_time   |                   4.09905  |
| total_nnf_time   |                   0.173152 |

## Function Stats
| Function                     |   Percentage of Total Time |
|:-----------------------------|---------------------------:|
| vtree_manager_new            |               89.9326      |
| sat_is_subsumed_clause       |                1.59342     |
| sat_is_implied_literal       |                0.847926    |
| vtree_manager_free           |                0.605532    |
| sat_var2pliteral             |                0.434621    |
| sat_var2nliteral             |                0.433143    |
| sat_state_new                |                0.316357    |
| vtree_is_shannon_node        |                0.286361    |
| vtree_shannon_var            |                0.266285    |
| sat_is_instantiated_var      |                0.264998    |
| vtree_is_leaf                |                0.117215    |
| nnf_conjoin                  |                0.083834    |
| sat_decide_literal           |                0.0790176   |
| nnf_literal2node             |                0.0659037   |
| sat_undo_decide_literal      |                0.0536481   |
| sat_state_free               |                0.0338579   |
| sat_assert_clause            |                0.0294707   |
| nnf_manager_save_to_file     |                0.0197425   |
| sat_is_irrelevant_var        |                0.00433953  |
| sat_undo_assert_unit_clauses |                0.00433953  |
| sat_at_assertion_level       |                0.00381497  |
| nnf_manager_free             |                0.00214592  |
| nnf_manager_new              |                0.00143062  |
| vtree_print_widths           |                0.000906056 |
| sat_assert_unit_clauses      |                9.53743e-05 |
| nnf_manager_memory           |                4.76872e-05 |
| nnf_manager_set_root         |                4.76872e-05 |