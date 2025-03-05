## 4blocksb

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |       Time |    Percent |
|:------------|-----------:|-----------:|
| total_time  | 162.265    | 1          |
| sat_total   | 135.285    | 0.833723   |
| vtree_total |   0.674391 | 0.0041561  |
| nnf_total   |   0.205179 | 0.00126447 |

### Functions

| Function                     |      Time |     Percent |
|:-----------------------------|----------:|------------:|
| sat_decide_literal           | 71.8729   | 0.442934    |
| sat_assert_clause            | 32.7896   | 0.202074    |
| sat_is_subsumed_clause       | 15.9815   | 0.0984897   |
| sat_undo_decide_literal      | 12.5987   | 0.0776424   |
| sat_is_implied_literal       |  0.845766 | 0.00521224  |
| sat_var2nliteral             |  0.452494 | 0.0027886   |
| sat_var2pliteral             |  0.366045 | 0.00225584  |
| vtree_is_shannon_node        |  0.323239 | 0.00199204  |
| sat_is_instantiated_var      |  0.277252 | 0.00170863  |
| vtree_shannon_var            |  0.233622 | 0.00143975  |
| nnf_conjoin                  |  0.125089 | 0.000770891 |
| vtree_is_leaf                |  0.100718 | 0.000620699 |
| sat_state_free               |  0.04072  | 0.000250947 |
| nnf_literal2node             |  0.028194 | 0.000173752 |
| sat_is_irrelevant_var        |  0.027667 | 0.000170505 |
| nnf_disjoin                  |  0.025322 | 0.000156053 |
| nnf_manager_save_to_file     |  0.025102 | 0.000154697 |
| sat_state_new                |  0.017307 | 0.000106659 |
| vtree_manager_free           |  0.016785 | 0.000103442 |
| sat_at_assertion_level       |  0.014348 | 8.8423e-05  |
| nnf_manager_free             |  0.001446 | 8.91132e-06 |
| sat_undo_assert_unit_clauses |  0.000233 | 1.43592e-06 |
| vtree_print_widths           |  2.7e-05  | 1.66394e-07 |
| nnf_manager_new              |  2.6e-05  | 1.60231e-07 |
| sat_assert_unit_clauses      |  2e-06    | 1.23255e-08 |
