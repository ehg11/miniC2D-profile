## tire-2

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 0.520898 |  1        |
| sat_total   | 0.136755 |  0.262537 |
| nnf_total   | 0.092855 |  0.178259 |
| vtree_total | 0.067591 |  0.129759 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| nnf_manager_save_to_file     | 0.041367 | 0.0794148   |
| sat_is_implied_literal       | 0.037083 | 0.0711905   |
| nnf_conjoin                  | 0.036928 | 0.070893    |
| sat_is_subsumed_clause       | 0.029459 | 0.0565543   |
| vtree_is_shannon_node        | 0.02562  | 0.0491843   |
| sat_var2nliteral             | 0.021635 | 0.041534    |
| vtree_shannon_var            | 0.02009  | 0.038568    |
| sat_is_instantiated_var      | 0.019777 | 0.0379671   |
| sat_var2pliteral             | 0.017502 | 0.0335997   |
| vtree_manager_free           | 0.01347  | 0.0258592   |
| nnf_literal2node             | 0.0109   | 0.0209254   |
| vtree_is_leaf                | 0.00839  | 0.0161068   |
| sat_decide_literal           | 0.0064   | 0.0122865   |
| nnf_disjoin                  | 0.003192 | 0.00612788  |
| sat_state_new                | 0.00234  | 0.00449224  |
| sat_undo_decide_literal      | 0.001977 | 0.00379537  |
| nnf_manager_free             | 0.000433 | 0.000831257 |
| sat_state_free               | 0.000283 | 0.000543293 |
| sat_assert_clause            | 0.000139 | 0.000266847 |
| sat_is_irrelevant_var        | 0.000131 | 0.000251489 |
| nnf_manager_new              | 3.5e-05  | 6.71917e-05 |
| sat_undo_assert_unit_clauses | 2.2e-05  | 4.22348e-05 |
| vtree_print_widths           | 2.1e-05  | 4.0315e-05  |
| sat_at_assertion_level       | 4e-06    | 7.67905e-06 |
| sat_assert_unit_clauses      | 3e-06    | 5.75928e-06 |
