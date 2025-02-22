# Stats for log-2.cnf

## Aggregate Stats

| Category        |   Elapsed Time |   Percentage of Total Time |
|:----------------|---------------:|---------------------------:|
| nnf_functions   |        22.5035 |                    2.80309 |
| sat_functions   |       281.964  |                   35.1221  |
| vtree_functions |       127.365  |                   15.8649  |
| all_apis        |       431.833  |                   53.7901  |

## Function Stats

| Function                     |   Elapsed Time |   Percentage of Total Time |
|:-----------------------------|---------------:|---------------------------:|
| total_time                   |     802.811    |              100           |
| sat_is_subsumed_clause       |     164.728    |               20.5189      |
| vtree_manager_new            |      60.9944   |                7.5976      |
| sat_is_implied_literal       |      41.8584   |                5.21398     |
| vtree_is_shannon_node        |      29.5455   |                3.68026     |
| vtree_shannon_var            |      26.0348   |                3.24296     |
| sat_is_instantiated_var      |      25.9661   |                3.2344      |
| sat_var2nliteral             |      22.7687   |                2.83612     |
| sat_var2pliteral             |      22.6015   |                2.81529     |
| nnf_conjoin                  |      11.7317   |                1.46133     |
| vtree_is_leaf                |      10.7378   |                1.33753     |
| nnf_literal2node             |       9.90444  |                1.23372     |
| sat_decide_literal           |       2.03875  |                0.253951    |
| sat_undo_decide_literal      |       1.1827   |                0.14732     |
| nnf_manager_save_to_file     |       0.818889 |                0.102003    |
| sat_assert_clause            |       0.747106 |                0.0930613   |
| vtree_manager_free           |       0.052681 |                0.00656207  |
| nnf_disjoin                  |       0.046221 |                0.00575739  |
| sat_is_irrelevant_var        |       0.03148  |                0.00392122  |
| sat_state_new                |       0.020477 |                0.00255066  |
| sat_at_assertion_level       |       0.013736 |                0.00171099  |
| sat_state_free               |       0.006829 |                0.000850636 |
| nnf_manager_free             |       0.002186 |                0.000272293 |
| nnf_manager_new              |       6.6e-05  |                8.22111e-06 |
| vtree_print_widths           |       6.4e-05  |                7.97199e-06 |
| sat_assert_unit_clauses      |       1.1e-05  |                1.37019e-06 |
| sat_undo_assert_unit_clauses |       4e-06    |                4.98249e-07 |
| nnf_manager_set_root         |       1e-06    |                1.24562e-07 |
| sat_var_count                |       1e-06    |                1.24562e-07 |
