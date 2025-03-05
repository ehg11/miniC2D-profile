## 2bitmax_6

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 382.551  | 1         |
| sat_total   | 116.279  | 0.303957  |
| nnf_total   |  50.939  | 0.133156  |
| vtree_total |  25.5389 | 0.0667595 |

### Functions

| Function                 |      Time |     Percent |
|:-------------------------|----------:|------------:|
| sat_is_subsumed_clause   | 38.9451   | 0.101804    |
| sat_is_implied_literal   | 30.8239   | 0.0805748   |
| nnf_conjoin              | 24.3571   | 0.0636702   |
| nnf_manager_save_to_file | 19.5597   | 0.0511296   |
| sat_var2nliteral         | 17.9108   | 0.0468194   |
| sat_var2pliteral         | 14.0248   | 0.0366613   |
| vtree_is_shannon_node    | 10.8129   | 0.0282652   |
| vtree_shannon_var        |  9.41465  | 0.0246102   |
| sat_is_instantiated_var  |  9.23289  | 0.0241351   |
| nnf_literal2node         |  5.94283  | 0.0155347   |
| vtree_is_leaf            |  4.64892  | 0.0121524   |
| sat_decide_literal       |  3.48222  | 0.00910263  |
| nnf_disjoin              |  1.05776  | 0.00276503  |
| sat_state_free           |  0.956183 | 0.00249949  |
| vtree_manager_free       |  0.66243  | 0.00173161  |
| sat_undo_decide_literal  |  0.582295 | 0.00152214  |
| sat_is_irrelevant_var    |  0.173047 | 0.00045235  |
| sat_assert_clause        |  0.144796 | 0.000378501 |
| nnf_manager_free         |  0.021647 | 5.6586e-05  |
| sat_state_new            |  0.002033 | 5.31433e-06 |
| sat_at_assertion_level   |  0.000758 | 1.98144e-06 |
| nnf_manager_new          |  4.3e-05  | 1.12403e-07 |
| vtree_print_widths       |  1.5e-05  | 3.92105e-08 |
| sat_assert_unit_clauses  |  1e-06    | 2.61403e-09 |
