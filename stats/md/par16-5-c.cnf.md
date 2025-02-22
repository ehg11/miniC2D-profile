# Stats for par16-5-c.cnf

## Aggregate Stats

| Category        |   Elapsed Time |   Percentage of Total Time |
|:----------------|---------------:|---------------------------:|
| nnf_functions   |       0.003311 |                   0.106156 |
| sat_functions   |       1.7768   |                  56.9669   |
| vtree_functions |       0.151848 |                   4.86848  |
| all_apis        |       1.93196  |                  61.9416   |

## Function Stats

| Function                     |   Elapsed Time |   Percentage of Total Time |
|:-----------------------------|---------------:|---------------------------:|
| total_time                   |       3.119    |              100           |
| sat_is_subsumed_clause       |       0.421378 |               13.51        |
| sat_decide_literal           |       0.334178 |               10.7143      |
| sat_assert_clause            |       0.302832 |                9.70927     |
| sat_is_implied_literal       |       0.296209 |                9.49692     |
| sat_var2pliteral             |       0.157882 |                5.06194     |
| sat_var2nliteral             |       0.157765 |                5.05819     |
| vtree_manager_new            |       0.087213 |                2.79618     |
| sat_undo_decide_literal      |       0.063664 |                2.04117     |
| vtree_shannon_var            |       0.020265 |                0.649727    |
| sat_is_instantiated_var      |       0.020197 |                0.647547    |
| vtree_is_shannon_node        |       0.01736  |                0.556589    |
| vtree_is_leaf                |       0.014596 |                0.467971    |
| vtree_manager_free           |       0.012398 |                0.397499    |
| sat_is_irrelevant_var        |       0.010045 |                0.322058    |
| sat_at_assertion_level       |       0.009768 |                0.313177    |
| sat_state_new                |       0.001739 |                0.055755    |
| nnf_conjoin                  |       0.001637 |                0.0524848   |
| nnf_literal2node             |       0.001298 |                0.0416159   |
| sat_state_free               |       0.001122 |                0.0359731   |
| nnf_manager_save_to_file     |       0.000299 |                0.00958641  |
| nnf_manager_free             |       4.5e-05  |                0.00144277  |
| nnf_manager_new              |       3.1e-05  |                0.000993908 |
| sat_undo_assert_unit_clauses |       1.7e-05  |                0.000545046 |
| vtree_print_widths           |       1.6e-05  |                0.000512985 |
| sat_assert_unit_clauses      |       2e-06    |                6.41231e-05 |
| nnf_manager_set_root         |       1e-06    |                3.20616e-05 |
| sat_var_count                |       1e-06    |                3.20616e-05 |
