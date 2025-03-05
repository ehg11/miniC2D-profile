## C210_FVF

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |      Time |   Percent |
|:------------|----------:|----------:|
| total_time  | 147.913   | 1         |
| sat_total   |  62.7385  | 0.424157  |
| nnf_total   |   2.33061 | 0.0157566 |
| vtree_total |   1.93488 | 0.0130812 |

### Functions

| Function                     |      Time |     Percent |
|:-----------------------------|----------:|------------:|
| sat_is_subsumed_clause       | 20.9976   | 0.141959    |
| sat_is_implied_literal       | 20.5361   | 0.138839    |
| sat_var2nliteral             | 11.1765   | 0.0755615   |
| sat_var2pliteral             |  8.83138  | 0.0597065   |
| nnf_conjoin                  |  1.10171  | 0.00744838  |
| vtree_is_shannon_node        |  0.899608 | 0.006082    |
| nnf_manager_save_to_file     |  0.735452 | 0.00497218  |
| vtree_shannon_var            |  0.511828 | 0.00346032  |
| sat_decide_literal           |  0.4797   | 0.00324312  |
| sat_is_instantiated_var      |  0.469348 | 0.00317313  |
| nnf_literal2node             |  0.296215 | 0.00200263  |
| vtree_is_leaf                |  0.262914 | 0.00177749  |
| vtree_manager_free           |  0.260461 | 0.0017609   |
| sat_undo_decide_literal      |  0.197778 | 0.00133712  |
| nnf_disjoin                  |  0.185837 | 0.00125639  |
| sat_is_irrelevant_var        |  0.04123  | 0.000278744 |
| nnf_manager_free             |  0.011324 | 7.65584e-05 |
| sat_state_new                |  0.006002 | 4.05778e-05 |
| sat_state_free               |  0.002648 | 1.79024e-05 |
| sat_assert_unit_clauses      |  0.000102 | 6.89593e-07 |
| nnf_manager_new              |  7.1e-05  | 4.80011e-07 |
| vtree_print_widths           |  7e-05    | 4.7325e-07  |
| sat_undo_assert_unit_clauses |  5.7e-05  | 3.85361e-07 |
| sat_assert_clause            |  8e-06    | 5.40857e-08 |
| sat_at_assertion_level       |  2e-06    | 1.35214e-08 |
