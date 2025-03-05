## huge

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| nnf_total   | 0.044061 |  1.46314  |
| total_time  | 0.030114 |  1        |
| vtree_total | 0.013257 |  0.440227 |
| sat_total   | 0.012368 |  0.410706 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| nnf_manager_save_to_file     | 0.043465 | 1.44335     |
| vtree_manager_free           | 0.012647 | 0.419971    |
| sat_state_new                | 0.005337 | 0.177227    |
| sat_decide_literal           | 0.001541 | 0.0511722   |
| sat_is_subsumed_clause       | 0.001257 | 0.0417414   |
| sat_undo_decide_literal      | 0.001015 | 0.0337053   |
| sat_state_free               | 0.000796 | 0.0264329   |
| sat_is_implied_literal       | 0.000781 | 0.0259348   |
| sat_assert_clause            | 0.000577 | 0.0191605   |
| nnf_conjoin                  | 0.000435 | 0.0144451   |
| sat_var2nliteral             | 0.000419 | 0.0139138   |
| sat_var2pliteral             | 0.000336 | 0.0111576   |
| vtree_is_shannon_node        | 0.000282 | 0.00936442  |
| vtree_shannon_var            | 0.000221 | 0.00733878  |
| sat_is_instantiated_var      | 0.000203 | 0.00674105  |
| sat_undo_assert_unit_clauses | 8.9e-05  | 0.00295544  |
| vtree_is_leaf                | 8.9e-05  | 0.00295544  |
| nnf_literal2node             | 8.6e-05  | 0.00285581  |
| nnf_manager_free             | 4.5e-05  | 0.00149432  |
| nnf_manager_new              | 3e-05    | 0.000996214 |
| vtree_print_widths           | 1.8e-05  | 0.000597729 |
| sat_is_irrelevant_var        | 8e-06    | 0.000265657 |
| sat_at_assertion_level       | 7e-06    | 0.00023245  |
| sat_assert_unit_clauses      | 2e-06    | 6.64143e-05 |
