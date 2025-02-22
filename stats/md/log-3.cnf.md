# Stats for log-3.cnf

## Aggregate Stats

| Category        |   Elapsed Time |   Percentage of Total Time |
|:----------------|---------------:|---------------------------:|
| nnf_functions   |        1.46438 |                   0.447641 |
| sat_functions   |      110.747   |                  33.8539   |
| vtree_functions |       98.8499  |                  30.217    |
| all_apis        |      211.062   |                  64.5186   |

## Function Stats

| Function                     |   Elapsed Time |   Percentage of Total Time |
|:-----------------------------|---------------:|---------------------------:|
| total_time                   |     327.133    |              100           |
| vtree_manager_new            |      93.4469   |               28.5654      |
| sat_is_subsumed_clause       |      79.5315   |               24.3117      |
| sat_is_implied_literal       |      12.9801   |                3.96783     |
| sat_var2nliteral             |       6.60321  |                2.01851     |
| sat_var2pliteral             |       6.57879  |                2.01104     |
| vtree_is_shannon_node        |       2.35426  |                0.719665    |
| sat_is_instantiated_var      |       2.13709  |                0.653278    |
| vtree_shannon_var            |       2.12876  |                0.650733    |
| sat_decide_literal           |       1.54177  |                0.471299    |
| vtree_is_leaf                |       0.903799 |                0.276279    |
| sat_undo_decide_literal      |       0.839409 |                0.256596    |
| nnf_conjoin                  |       0.776869 |                0.237478    |
| nnf_literal2node             |       0.648346 |                0.19819     |
| sat_assert_clause            |       0.479925 |                0.146706    |
| nnf_manager_save_to_file     |       0.031934 |                0.00976178  |
| sat_state_new                |       0.017417 |                0.00532413  |
| sat_is_irrelevant_var        |       0.017348 |                0.00530304  |
| vtree_manager_free           |       0.016072 |                0.00491299  |
| sat_at_assertion_level       |       0.013714 |                0.00419218  |
| sat_state_free               |       0.007067 |                0.00216028  |
| nnf_disjoin                  |       0.00624  |                0.00190748  |
| nnf_manager_free             |       0.00093  |                0.000284288 |
| vtree_print_widths           |       7.4e-05  |                2.26208e-05 |
| nnf_manager_new              |       6.2e-05  |                1.89525e-05 |
| sat_assert_unit_clauses      |       1.2e-05  |                3.66823e-06 |
| sat_undo_assert_unit_clauses |       4e-06    |                1.22274e-06 |
| nnf_manager_memory           |       1e-06    |                3.05686e-07 |
| nnf_manager_set_root         |       1e-06    |                3.05686e-07 |
