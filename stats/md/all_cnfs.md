# Stats for all_cnfs

## Aggregate Stats
| Function         |   Percentage of Total Time |
|:-----------------|---------------------------:|
| total_api_time   |                   61.1174  |
| total_sat_time   |                   34.4979  |
| total_vtree_time |                   23.871   |
| total_nnf_time   |                    2.74848 |

## Function Stats
| Function                     |   Percentage of Total Time |
|:-----------------------------|---------------------------:|
| vtree_manager_new            |               16.05        |
| sat_is_subsumed_clause       |               10.1432      |
| sat_is_implied_literal       |                7.1536      |
| sat_var2nliteral             |                3.88973     |
| sat_var2pliteral             |                3.87905     |
| vtree_is_shannon_node        |                3.39726     |
| sat_decide_literal           |                2.9379      |
| sat_assert_clause            |                2.84158     |
| sat_is_instantiated_var      |                2.82251     |
| vtree_shannon_var            |                2.80824     |
| nnf_conjoin                  |                1.47207     |
| vtree_is_leaf                |                1.43718     |
| nnf_literal2node             |                1.15895     |
| sat_undo_decide_literal      |                0.666746    |
| vtree_manager_free           |                0.177906    |
| sat_is_irrelevant_var        |                0.0614384   |
| nnf_disjoin                  |                0.0573864   |
| nnf_manager_save_to_file     |                0.0569983   |
| sat_state_new                |                0.0486333   |
| sat_at_assertion_level       |                0.0412052   |
| sat_state_free               |                0.0114163   |
| nnf_manager_free             |                0.00242565  |
| nnf_manager_new              |                0.000624163 |
| sat_undo_assert_unit_clauses |                0.000556355 |
| vtree_print_widths           |                0.000369334 |
| sat_assert_unit_clauses      |                0.000342749 |
| nnf_manager_set_root         |                1.4153e-05  |
| sat_var_count                |                9.08104e-06 |
| nnf_manager_memory           |                5.59272e-06 |