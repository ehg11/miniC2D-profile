## tire-3

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 0.862753 |  1        |
| sat_total   | 0.224847 |  0.260616 |
| nnf_total   | 0.129775 |  0.15042  |
| vtree_total | 0.113917 |  0.132039 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| nnf_conjoin                  | 0.061644 | 0.0714503   |
| sat_is_implied_literal       | 0.061539 | 0.0713286   |
| vtree_is_shannon_node        | 0.048968 | 0.0567578   |
| sat_is_instantiated_var      | 0.045885 | 0.0531844   |
| nnf_manager_save_to_file     | 0.042804 | 0.0496133   |
| sat_is_subsumed_clause       | 0.037953 | 0.0439906   |
| sat_var2nliteral             | 0.035163 | 0.0407567   |
| vtree_shannon_var            | 0.034914 | 0.0404681   |
| sat_var2pliteral             | 0.028312 | 0.0328159   |
| nnf_literal2node             | 0.018993 | 0.0220144   |
| vtree_manager_free           | 0.015145 | 0.0175543   |
| vtree_is_leaf                | 0.014868 | 0.0172332   |
| sat_decide_literal           | 0.009484 | 0.0109927   |
| nnf_disjoin                  | 0.00559  | 0.00647926  |
| sat_state_new                | 0.003068 | 0.00355606  |
| sat_undo_decide_literal      | 0.002569 | 0.00297768  |
| nnf_manager_free             | 0.000712 | 0.000825265 |
| sat_state_free               | 0.000507 | 0.000587654 |
| sat_is_irrelevant_var        | 0.000275 | 0.000318747 |
| sat_assert_clause            | 5.7e-05  | 6.60676e-05 |
| nnf_manager_new              | 3.2e-05  | 3.70906e-05 |
| sat_undo_assert_unit_clauses | 2.6e-05  | 3.01361e-05 |
| vtree_print_widths           | 2.2e-05  | 2.54998e-05 |
| sat_at_assertion_level       | 5e-06    | 5.7954e-06  |
| sat_assert_unit_clauses      | 4e-06    | 4.63632e-06 |
