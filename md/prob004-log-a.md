## prob004-log-a

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |      Time |   Percent |
|:------------|----------:|----------:|
| total_time  | 1349.49   | 1         |
| sat_total   |  467.041  | 0.346086  |
| nnf_total   |  119.45   | 0.0885149 |
| vtree_total |   93.5618 | 0.069331  |

### Functions

| Function                     |       Time |     Percent |
|:-----------------------------|-----------:|------------:|
| sat_is_subsumed_clause       | 226.232    | 0.167642    |
| sat_is_implied_literal       |  95.4679   | 0.0707434   |
| nnf_conjoin                  |  74.6964   | 0.0553514   |
| sat_var2nliteral             |  48.3672   | 0.035841    |
| vtree_is_shannon_node        |  45.7628   | 0.0339111   |
| sat_var2pliteral             |  41.5943   | 0.0308221   |
| sat_is_instantiated_var      |  34.2319   | 0.0253665   |
| vtree_shannon_var            |  34.1698   | 0.0253204   |
| nnf_manager_save_to_file     |  24.9077   | 0.0184571   |
| nnf_literal2node             |  19.3249   | 0.0143201   |
| sat_decide_literal           |  16.6049   | 0.0123045   |
| vtree_is_leaf                |  13.2474   | 0.00981658  |
| sat_undo_decide_literal      |   4.40248  | 0.00326231  |
| nnf_disjoin                  |   0.491255 | 0.000364029 |
| vtree_manager_free           |   0.38169  | 0.000282839 |
| sat_is_irrelevant_var        |   0.078636 | 5.82707e-05 |
| nnf_manager_free             |   0.030164 | 2.23521e-05 |
| sat_assert_clause            |   0.028917 | 2.1428e-05  |
| sat_state_free               |   0.020707 | 1.53443e-05 |
| sat_state_new                |   0.011869 | 8.79514e-06 |
| sat_at_assertion_level       |   0.000377 | 2.79364e-07 |
| vtree_print_widths           |   8.4e-05  | 6.22455e-08 |
| nnf_manager_new              |   6.8e-05  | 5.03892e-08 |
| sat_assert_unit_clauses      |   1.2e-05  | 8.89222e-09 |
| sat_undo_assert_unit_clauses |   8e-06    | 5.92814e-09 |
