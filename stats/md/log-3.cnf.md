# Stats for log-3.cnf

## Aggregate Stats
| Function         |   Percentage of Total Time |
|:-----------------|---------------------------:|
| total_api_time   |                  64.5186   |
| total_sat_time   |                  33.8539   |
| total_vtree_time |                  30.217    |
| total_nnf_time   |                   0.447641 |

## Function Stats
| Function                     |   Percentage of Total Time |
|:-----------------------------|---------------------------:|
| vtree_manager_new            |               28.5654      |
| sat_is_subsumed_clause       |               24.3117      |
| sat_is_implied_literal       |                3.96783     |
| sat_var2nliteral             |                2.01851     |
| sat_var2pliteral             |                2.01104     |
| vtree_is_shannon_node        |                0.719665    |
| sat_is_instantiated_var      |                0.653278    |
| vtree_shannon_var            |                0.650733    |
| sat_decide_literal           |                0.471299    |
| vtree_is_leaf                |                0.276279    |
| sat_undo_decide_literal      |                0.256596    |
| nnf_conjoin                  |                0.237478    |
| nnf_literal2node             |                0.19819     |
| sat_assert_clause            |                0.146706    |
| nnf_manager_save_to_file     |                0.00976178  |
| sat_state_new                |                0.00532413  |
| sat_is_irrelevant_var        |                0.00530304  |
| vtree_manager_free           |                0.00491299  |
| sat_at_assertion_level       |                0.00419218  |
| sat_state_free               |                0.00216028  |
| nnf_disjoin                  |                0.00190748  |
| nnf_manager_free             |                0.000284288 |
| vtree_print_widths           |                2.26208e-05 |
| nnf_manager_new              |                1.89525e-05 |
| sat_assert_unit_clauses      |                3.66823e-06 |
| sat_undo_assert_unit_clauses |                1.22274e-06 |
| nnf_manager_memory           |                3.05686e-07 |
| nnf_manager_set_root         |                3.05686e-07 |