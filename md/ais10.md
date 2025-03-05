## ais10

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |      Time |   Percent |
|:------------|----------:|----------:|
| total_time  | 10.4839   | 1         |
| sat_total   |  5.20129  | 0.496122  |
| vtree_total |  0.178638 | 0.0170393 |
| nnf_total   |  0.096543 | 0.0092087 |

### Functions

| Function                 |     Time |     Percent |
|:-------------------------|---------:|------------:|
| sat_is_subsumed_clause   | 2.56046  | 0.244227    |
| sat_decide_literal       | 0.984356 | 0.0938922   |
| sat_is_implied_literal   | 0.522536 | 0.0498418   |
| sat_assert_clause        | 0.363698 | 0.0346911   |
| sat_var2nliteral         | 0.279613 | 0.0266707   |
| sat_var2pliteral         | 0.219753 | 0.020961    |
| sat_undo_decide_literal  | 0.199795 | 0.0190573   |
| vtree_is_shannon_node    | 0.078108 | 0.00745028  |
| vtree_shannon_var        | 0.0621   | 0.00592337  |
| sat_is_instantiated_var  | 0.056994 | 0.00543634  |
| nnf_conjoin              | 0.043627 | 0.00416134  |
| nnf_manager_save_to_file | 0.040822 | 0.00389378  |
| vtree_is_leaf            | 0.025413 | 0.002424    |
| vtree_manager_free       | 0.013004 | 0.00124038  |
| nnf_literal2node         | 0.010823 | 0.00103235  |
| sat_state_new            | 0.003924 | 0.000374288 |
| sat_state_free           | 0.003656 | 0.000348725 |
| sat_is_irrelevant_var    | 0.003297 | 0.000314482 |
| sat_at_assertion_level   | 0.003213 | 0.00030647  |
| nnf_disjoin              | 0.000929 | 8.86121e-05 |
| nnf_manager_free         | 0.000318 | 3.03322e-05 |
| nnf_manager_new          | 2.4e-05  | 2.28923e-06 |
| vtree_print_widths       | 1.3e-05  | 1.24e-06    |
| sat_assert_unit_clauses  | 1e-06    | 9.53844e-08 |
