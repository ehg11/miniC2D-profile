## cnt06

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 0.097868 |  1        |
| sat_total   | 0.03529  |  0.360588 |
| nnf_total   | 0.025579 |  0.261362 |
| vtree_total | 0.022621 |  0.231138 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| nnf_manager_save_to_file     | 0.019491 | 0.199156    |
| vtree_manager_free           | 0.015997 | 0.163455    |
| sat_decide_literal           | 0.010913 | 0.111507    |
| sat_assert_clause            | 0.007183 | 0.0733948   |
| nnf_conjoin                  | 0.004426 | 0.0452242   |
| sat_state_new                | 0.004309 | 0.0440287   |
| sat_undo_decide_literal      | 0.00306  | 0.0312666   |
| vtree_is_shannon_node        | 0.002856 | 0.0291822   |
| sat_is_implied_literal       | 0.002486 | 0.0254016   |
| vtree_shannon_var            | 0.002405 | 0.0245739   |
| sat_is_instantiated_var      | 0.002247 | 0.0229595   |
| sat_var2nliteral             | 0.001648 | 0.016839    |
| sat_var2pliteral             | 0.001415 | 0.0144582   |
| nnf_literal2node             | 0.001354 | 0.013835    |
| vtree_is_leaf                | 0.001322 | 0.013508    |
| sat_is_subsumed_clause       | 0.001072 | 0.0109535   |
| sat_state_free               | 0.00064  | 0.00653942  |
| nnf_disjoin                  | 0.000182 | 0.00185965  |
| sat_is_irrelevant_var        | 0.000137 | 0.00139984  |
| sat_at_assertion_level       | 0.000107 | 0.00109331  |
| nnf_manager_free             | 7.6e-05  | 0.000776556 |
| sat_undo_assert_unit_clauses | 5.8e-05  | 0.000592635 |
| nnf_manager_new              | 5e-05    | 0.000510892 |
| vtree_print_widths           | 4.1e-05  | 0.000418932 |
| sat_assert_unit_clauses      | 1.5e-05  | 0.000153268 |
