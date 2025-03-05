## All Stats

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 5264.33  | 1         |
| sat_total   | 2740.82  | 0.520639  |
| nnf_total   |  308.399 | 0.0585827 |
| vtree_total |  221.154 | 0.0420098 |

### Functions

| Function                     |       Time |     Percent |
|:-----------------------------|-----------:|------------:|
| sat_decide_literal           | 808.94     | 0.153664    |
| sat_assert_clause            | 581.356    | 0.110433    |
| sat_is_subsumed_clause       | 527.033    | 0.100114    |
| sat_is_implied_literal       | 353.364    | 0.0671242   |
| sat_var2nliteral             | 194.686    | 0.036982    |
| nnf_conjoin                  | 176.03     | 0.0334383   |
| sat_var2pliteral             | 157.968    | 0.0300072   |
| vtree_is_shannon_node        | 102.721    | 0.0195126   |
| nnf_manager_save_to_file     |  80.5201   | 0.0152954   |
| vtree_shannon_var            |  77.942    | 0.0148057   |
| sat_is_instantiated_var      |  77.3041   | 0.0146845   |
| nnf_literal2node             |  45.8604   | 0.00871153  |
| vtree_is_leaf                |  36.6562   | 0.00696312  |
| sat_undo_decide_literal      |  36.2496   | 0.0068859   |
| nnf_disjoin                  |   5.76861  | 0.00109579  |
| vtree_manager_free           |   3.83301  | 0.00072811  |
| sat_state_free               |   2.18237  | 0.000414558 |
| sat_is_irrelevant_var        |   1.18255  | 0.000224634 |
| sat_state_new                |   0.373997 | 7.10436e-05 |
| nnf_manager_free             |   0.216481 | 4.11222e-05 |
| sat_at_assertion_level       |   0.167972 | 3.19076e-05 |
| sat_assert_unit_clauses      |   0.005082 | 9.65365e-07 |
| sat_undo_assert_unit_clauses |   0.003542 | 6.7283e-07  |
| nnf_manager_new              |   0.002467 | 4.68626e-07 |
| vtree_print_widths           |   0.001493 | 2.83607e-07 |
| nnf_manager_set_root         |   6e-06    | 1.13975e-09 |
