## par16-5-c

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 0.796004 | 1         |
| sat_total   | 0.702284 | 0.882262  |
| nnf_total   | 0.04625  | 0.0581027 |
| vtree_total | 0.01488  | 0.0186934 |

### Functions

| Function                     |     Time |     Percent |
|:-----------------------------|---------:|------------:|
| sat_decide_literal           | 0.318082 | 0.399598    |
| sat_assert_clause            | 0.287317 | 0.360949    |
| sat_undo_decide_literal      | 0.048196 | 0.0605474   |
| nnf_manager_save_to_file     | 0.045701 | 0.057413    |
| sat_is_subsumed_clause       | 0.016516 | 0.0207486   |
| sat_is_implied_literal       | 0.013179 | 0.0165564   |
| vtree_manager_free           | 0.012435 | 0.0156218   |
| sat_var2nliteral             | 0.007208 | 0.00905523  |
| sat_var2pliteral             | 0.006062 | 0.00761554  |
| sat_state_new                | 0.002185 | 0.00274496  |
| sat_state_free               | 0.001132 | 0.0014221   |
| vtree_shannon_var            | 0.001013 | 0.00127261  |
| sat_is_instantiated_var      | 0.000968 | 0.00121607  |
| vtree_is_shannon_node        | 0.000797 | 0.00100125  |
| sat_is_irrelevant_var        | 0.000759 | 0.000953513 |
| sat_at_assertion_level       | 0.000664 | 0.000834167 |
| vtree_is_leaf                | 0.000626 | 0.000786428 |
| nnf_conjoin                  | 0.00041  | 0.000515073 |
| nnf_literal2node             | 6.5e-05  | 8.16579e-05 |
| nnf_manager_free             | 4.6e-05  | 5.77887e-05 |
| nnf_manager_new              | 2.8e-05  | 3.51757e-05 |
| sat_undo_assert_unit_clauses | 1.5e-05  | 1.88441e-05 |
| vtree_print_widths           | 9e-06    | 1.13065e-05 |
| sat_assert_unit_clauses      | 1e-06    | 1.25628e-06 |
