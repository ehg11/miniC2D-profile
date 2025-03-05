## ra

*Note: total time omits `vtree_manager_new` time since it should be constant*

### Totals

| Function    |     Time |   Percent |
|:------------|---------:|----------:|
| total_time  | 31.5313  |  1        |
| sat_total   |  8.30835 |  0.263495 |
| nnf_total   |  3.87896 |  0.123019 |
| vtree_total |  3.78368 |  0.119997 |

### Functions

| Function                 |     Time |     Percent |
|:-------------------------|---------:|------------:|
| sat_is_subsumed_clause   | 2.68346  | 0.0851047   |
| nnf_conjoin              | 2.67765  | 0.0849203   |
| vtree_is_shannon_node    | 2.05219  | 0.0650841   |
| sat_is_implied_literal   | 1.93051  | 0.061225    |
| sat_is_instantiated_var  | 1.13109  | 0.035872    |
| sat_var2nliteral         | 1.08501  | 0.0344106   |
| nnf_literal2node         | 1.02086  | 0.0323761   |
| sat_var2pliteral         | 0.985296 | 0.0312482   |
| vtree_is_leaf            | 0.855608 | 0.0271352   |
| vtree_shannon_var        | 0.849546 | 0.0269429   |
| sat_decide_literal       | 0.413817 | 0.013124    |
| nnf_manager_save_to_file | 0.149776 | 0.00475007  |
| sat_undo_decide_literal  | 0.065296 | 0.00207083  |
| vtree_manager_free       | 0.026298 | 0.000834028 |
| nnf_disjoin              | 0.025537 | 0.000809893 |
| sat_state_new            | 0.007883 | 0.000250005 |
| nnf_manager_free         | 0.005089 | 0.000161395 |
| sat_is_irrelevant_var    | 0.005081 | 0.000161141 |
| sat_state_free           | 0.000895 | 2.83845e-05 |
| nnf_manager_new          | 5e-05    | 1.58573e-06 |
| vtree_print_widths       | 3.6e-05  | 1.14172e-06 |
| sat_assert_unit_clauses  | 5e-06    | 1.58573e-07 |
