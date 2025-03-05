## par16-1-c

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |    Percent |
|:------------|---------:|-----------:|
| total_time  | 1.97866  | 1          |
| sat_total   | 1.44014  | 0.727836   |
| nnf_total   | 0.027079 | 0.0136855  |
| vtree_total | 0.017237 | 0.00871144 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| sat_decide_literal           | 0.50832  | 0.256901    |
| sat_assert_clause            | 0.468101 | 0.236574    |
| sat_is_subsumed_clause       | 0.152417 | 0.0770303   |
| sat_is_implied_literal       | 0.115412 | 0.0583283   |
| sat_undo_decide_literal      | 0.078974 | 0.0399128   |
| sat_var2nliteral             | 0.061345 | 0.0310033   |
| sat_var2pliteral             | 0.049108 | 0.0248188   |
| nnf_manager_save_to_file     | 0.02647  | 0.0133777   |
| vtree_manager_free           | 0.012443 | 0.00628859  |
| sat_state_new                | 0.002231 | 0.00112753  |
| vtree_is_shannon_node        | 0.001825 | 0.00092234  |
| vtree_shannon_var            | 0.001714 | 0.000866241 |
| sat_is_instantiated_var      | 0.00133  | 0.000672171 |
| sat_state_free               | 0.001315 | 0.00066459  |
| vtree_is_leaf                | 0.001246 | 0.000629718 |
| sat_is_irrelevant_var        | 0.000876 | 0.000442723 |
| sat_at_assertion_level       | 0.000697 | 0.000352258 |
| nnf_conjoin                  | 0.000444 | 0.000224394 |
| nnf_literal2node             | 8.5e-05  | 4.29583e-05 |
| nnf_manager_free             | 5.1e-05  | 2.5775e-05  |
| nnf_manager_new              | 2.8e-05  | 1.4151e-05  |
| sat_undo_assert_unit_clauses | 1.6e-05  | 8.08627e-06 |
| vtree_print_widths           | 9e-06    | 4.54853e-06 |
| sat_assert_unit_clauses      | 1e-06    | 5.05392e-07 |
| nnf_manager_set_root         | 1e-06    | 5.05392e-07 |
