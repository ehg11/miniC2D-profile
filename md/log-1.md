## log-1

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 0.456941 |  1        |
| sat_total   | 0.110741 |  0.242353 |
| nnf_total   | 0.087009 |  0.190416 |
| vtree_total | 0.069873 |  0.152915 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| nnf_manager_save_to_file     | 0.039886 | 0.0872892   |
| nnf_conjoin                  | 0.034047 | 0.0745107   |
| vtree_is_shannon_node        | 0.025979 | 0.0568542   |
| sat_is_implied_literal       | 0.025083 | 0.0548933   |
| vtree_shannon_var            | 0.020832 | 0.0455901   |
| sat_is_instantiated_var      | 0.020287 | 0.0443974   |
| sat_var2nliteral             | 0.017463 | 0.0382172   |
| sat_var2pliteral             | 0.014034 | 0.0307129   |
| sat_is_subsumed_clause       | 0.013881 | 0.0303781   |
| vtree_manager_free           | 0.013139 | 0.0287543   |
| sat_decide_literal           | 0.011349 | 0.0248369   |
| nnf_literal2node             | 0.010934 | 0.0239287   |
| vtree_is_leaf                | 0.009889 | 0.0216417   |
| sat_state_new                | 0.005113 | 0.0111896   |
| sat_undo_decide_literal      | 0.002556 | 0.00559372  |
| nnf_disjoin                  | 0.001846 | 0.00403991  |
| sat_state_free               | 0.000587 | 0.00128463  |
| nnf_manager_free             | 0.000255 | 0.000558059 |
| sat_is_irrelevant_var        | 0.000249 | 0.000544928 |
| sat_assert_clause            | 9.8e-05  | 0.00021447  |
| nnf_manager_new              | 4.1e-05  | 8.97271e-05 |
| vtree_print_widths           | 3.4e-05  | 7.44079e-05 |
| sat_undo_assert_unit_clauses | 2.4e-05  | 5.25232e-05 |
| sat_assert_unit_clauses      | 1.3e-05  | 2.84501e-05 |
| sat_at_assertion_level       | 4e-06    | 8.75387e-06 |
