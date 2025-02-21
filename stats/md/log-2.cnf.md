# Stats for log-2.cnf

## Aggregate Stats
| Function         |   Percentage of Total Time |
|:-----------------|---------------------------:|
| total_api_time   |                   53.7901  |
| total_sat_time   |                   35.1221  |
| total_vtree_time |                   15.8649  |
| total_nnf_time   |                    2.80309 |

## Function Stats
| Function                     |   Percentage of Total Time |
|:-----------------------------|---------------------------:|
| sat_is_subsumed_clause       |               20.5189      |
| vtree_manager_new            |                7.5976      |
| sat_is_implied_literal       |                5.21398     |
| vtree_is_shannon_node        |                3.68026     |
| vtree_shannon_var            |                3.24296     |
| sat_is_instantiated_var      |                3.2344      |
| sat_var2nliteral             |                2.83612     |
| sat_var2pliteral             |                2.81529     |
| nnf_conjoin                  |                1.46133     |
| vtree_is_leaf                |                1.33753     |
| nnf_literal2node             |                1.23372     |
| sat_decide_literal           |                0.253951    |
| sat_undo_decide_literal      |                0.14732     |
| nnf_manager_save_to_file     |                0.102003    |
| sat_assert_clause            |                0.0930613   |
| vtree_manager_free           |                0.00656207  |
| nnf_disjoin                  |                0.00575739  |
| sat_is_irrelevant_var        |                0.00392122  |
| sat_state_new                |                0.00255066  |
| sat_at_assertion_level       |                0.00171099  |
| sat_state_free               |                0.000850636 |
| nnf_manager_free             |                0.000272293 |
| nnf_manager_new              |                8.22111e-06 |
| vtree_print_widths           |                7.97199e-06 |
| sat_assert_unit_clauses      |                1.37019e-06 |
| sat_undo_assert_unit_clauses |                4.98249e-07 |
| nnf_manager_set_root         |                1.24562e-07 |
| sat_var_count                |                1.24562e-07 |