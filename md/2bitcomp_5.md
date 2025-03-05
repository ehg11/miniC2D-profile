## 2bitcomp_5

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 2.50679  | 1         |
| sat_total   | 0.665204 | 0.265361  |
| nnf_total   | 0.397361 | 0.158514  |
| vtree_total | 0.246923 | 0.0985016 |

### Functions

| Function                 |     Time |     Percent |
|:-------------------------|---------:|------------:|
| nnf_conjoin              | 0.170507 | 0.068018    |
| sat_is_implied_literal   | 0.164454 | 0.0656033   |
| sat_is_subsumed_clause   | 0.149834 | 0.0597712   |
| nnf_manager_save_to_file | 0.128011 | 0.0510656   |
| sat_var2nliteral         | 0.104969 | 0.0418738   |
| vtree_is_shannon_node    | 0.096039 | 0.0383115   |
| vtree_shannon_var        | 0.090857 | 0.0362443   |
| sat_is_instantiated_var  | 0.08893  | 0.0354756   |
| sat_var2pliteral         | 0.082012 | 0.0327159   |
| nnf_literal2node         | 0.057327 | 0.0228687   |
| sat_decide_literal       | 0.054959 | 0.021924    |
| vtree_is_leaf            | 0.043014 | 0.017159    |
| nnf_disjoin              | 0.037466 | 0.0149458   |
| vtree_manager_free       | 0.017002 | 0.00678237  |
| sat_undo_decide_literal  | 0.013416 | 0.00535186  |
| sat_is_irrelevant_var    | 0.004546 | 0.00181347  |
| nnf_manager_free         | 0.004029 | 0.00160723  |
| sat_state_new            | 0.001449 | 0.000578029 |
| sat_assert_clause        | 0.00055  | 0.000219404 |
| sat_state_free           | 6.5e-05  | 2.59295e-05 |
| nnf_manager_new          | 2.1e-05  | 8.37724e-06 |
| sat_at_assertion_level   | 1.9e-05  | 7.57941e-06 |
| vtree_print_widths       | 1.1e-05  | 4.38808e-06 |
| sat_assert_unit_clauses  | 1e-06    | 3.98916e-07 |
