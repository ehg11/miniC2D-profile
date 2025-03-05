## tire-4

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 1.68643  |  1        |
| sat_total   | 0.472871 |  0.280398 |
| nnf_total   | 0.218869 |  0.129783 |
| vtree_total | 0.193205 |  0.114565 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| sat_is_implied_literal       | 0.128608 | 0.0762607   |
| nnf_conjoin                  | 0.114583 | 0.0679443   |
| sat_is_subsumed_clause       | 0.094203 | 0.0558596   |
| vtree_is_shannon_node        | 0.088148 | 0.0522691   |
| sat_is_instantiated_var      | 0.082731 | 0.049057    |
| sat_var2nliteral             | 0.072583 | 0.0430396   |
| vtree_shannon_var            | 0.062936 | 0.0373192   |
| nnf_manager_save_to_file     | 0.062111 | 0.03683     |
| sat_var2pliteral             | 0.058587 | 0.0347404   |
| nnf_literal2node             | 0.034371 | 0.020381    |
| vtree_is_leaf                | 0.02748  | 0.0162948   |
| sat_decide_literal           | 0.025275 | 0.0149873   |
| vtree_manager_free           | 0.01461  | 0.0086633   |
| nnf_disjoin                  | 0.006682 | 0.00396223  |
| sat_undo_decide_literal      | 0.006124 | 0.00363135  |
| sat_state_new                | 0.003446 | 0.00204338  |
| nnf_manager_free             | 0.001077 | 0.000638629 |
| sat_is_irrelevant_var        | 0.000468 | 0.00027751  |
| sat_assert_clause            | 0.000428 | 0.000253791 |
| sat_state_free               | 0.000359 | 0.000212876 |
| nnf_manager_new              | 4.5e-05  | 2.66837e-05 |
| sat_undo_assert_unit_clauses | 4e-05    | 2.37188e-05 |
| vtree_print_widths           | 3.1e-05  | 1.83821e-05 |
| sat_at_assertion_level       | 1.3e-05  | 7.70861e-06 |
| sat_assert_unit_clauses      | 6e-06    | 3.55782e-06 |
