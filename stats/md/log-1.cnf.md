# Stats for log-1.cnf

## Aggregate Stats
| Function         |   Percentage of Total Time |
|:-----------------|---------------------------:|
| total_api_time   |                   53.1443  |
| total_sat_time   |                   24.844   |
| total_vtree_time |                   22.7281  |
| total_nnf_time   |                    5.57218 |

## Function Stats
| Function                     |   Percentage of Total Time |
|:-----------------------------|---------------------------:|
| vtree_is_shannon_node        |                7.44818     |
| sat_is_implied_literal       |                6.18377     |
| vtree_manager_new            |                6.12137     |
| sat_is_instantiated_var      |                6.09419     |
| vtree_shannon_var            |                6.08171     |
| sat_is_subsumed_clause       |                4.11327     |
| sat_var2nliteral             |                4.04342     |
| sat_var2pliteral             |                4.01327     |
| vtree_is_leaf                |                2.93561     |
| nnf_conjoin                  |                2.87695     |
| nnf_literal2node             |                2.55726     |
| sat_decide_literal           |                0.202644    |
| vtree_manager_free           |                0.140805    |
| sat_undo_decide_literal      |                0.0972811   |
| nnf_disjoin                  |                0.0763327   |
| nnf_manager_save_to_file     |                0.0590131   |
| sat_state_new                |                0.0499786   |
| sat_is_irrelevant_var        |                0.0371013   |
| sat_state_free               |                0.006155    |
| nnf_manager_free             |                0.00214087  |
| sat_assert_clause            |                0.00149861  |
| sat_at_assertion_level       |                0.000888461 |
| nnf_manager_new              |                0.000470991 |
| vtree_print_widths           |                0.000385356 |
| sat_assert_unit_clauses      |                0.000278313 |
| sat_undo_assert_unit_clauses |                0.000278313 |
| nnf_manager_memory           |                1.07043e-05 |
| sat_var_count                |                1.07043e-05 |