#ifndef TIMING_H_
#define TIMING_H_

enum ProfiledFunctions {
    // SAT functions
    SAT_IS_INSTANTIATED_VAR,
    SAT_IS_IRRELEVANT_VAR,
    SAT_VAR_COUNT,
    SAT_VAR2PLITERAL,
    SAT_VAR2NLITERAL,
    SAT_IS_IMPLIED_LITERAL,
    SAT_LITERAL_WEIGHT,
    SAT_DECIDE_LITERAL,
    SAT_UNDO_DECIDE_LITERAL,
    SAT_IS_SUBSUMED_CLAUSE,
    SAT_CLAUSE_COUNT,
    SAT_LEARNED_CLAUSE_COUNT,
    SAT_ASSERT_CLAUSE,
    SAT_STATE_NEW,
    SAT_STATE_FREE,
    SAT_ASSERT_UNIT_CLAUSES,
    SAT_UNDO_ASSERT_UNIT_CLAUSES,
    SAT_AT_ASSERTION_LEVEL,
    // NNF functions
    NNF_MANAGER_NEW,
    NNF_MANAGER_FREE,
    NNF_MANAGER_MEMORY,
    NNF_LITERAL2NODE,
    NNF_CONJOIN,
    NNF_DISJOIN,
    NNF_COUNT_NODES,
    NNF_MANAGER_SET_ROOT,
    NNF_MANAGER_GET_ROOT,
    NNF_MANAGER_EXTRACT_NNF,
    NNF_MANAGER_SAVE_TO_FILE,
    NNF_LOAD_FROM_FILE,
    NNF_FREE,
    NNF_NODE_COUNT,
    NNF_EDGE_COUNT,
    NNF_COUNT_MODELS,
    NNF_ENTAILS_CNF,
    NNF_DECOMPOSABLE,
    // Vtree functions
    VTREE_MANAGER_NEW,
    VTREE_MANAGER_FREE,
    VTREE_SAVE,
    VTREE_SAVE_AS_DOT,
    VTREE_PRINT_WIDTHS,
    VTREE_IS_LEAF,
    VTREE_IS_SHANNON_NODE,
    VTREE_SHANNON_VAR,
    // TOTAL
    FUNC_COUNT
};

extern double timing[FUNC_COUNT];

// SAT functions
BOOLEAN time_sat_is_instantiated_var(const Var* var);
BOOLEAN time_sat_is_irrelevant_var(const Var* var);
c2dSize time_sat_var_count(const SatState* sat_state);
Lit* time_sat_var2pliteral(const Var* var);
Lit* time_sat_var2nliteral(const Var* var);
BOOLEAN time_sat_is_implied_literal(const Lit* lit);
c2dWmc time_sat_literal_weight(const Lit* lit);
Clause* time_sat_decide_literal(Lit* lit, SatState* sat_state);
void time_sat_undo_decide_literal(SatState* sat_state);
BOOLEAN time_sat_is_subsumed_clause(const Clause* clause);
c2dSize time_sat_clause_count(const SatState* sat_state);
c2dSize time_sat_learned_clause_count(const SatState* sat_state);
Clause* time_sat_assert_clause(Clause* clause, SatState* sat_state);
SatState* time_sat_state_new(const char* file_name);
void time_sat_state_free(SatState* sat_state);
BOOLEAN time_sat_assert_unit_clauses(SatState* sat_state);
void time_sat_undo_assert_unit_clauses(SatState* sat_state);
BOOLEAN time_sat_at_assertion_level(const Clause* clause, const SatState* sat_state);

// NNF functions
NnfManager* time_nnf_manager_new(c2dSize var_count, c2dSize capacity);
void time_nnf_manager_free(NnfManager* manager);
c2dSize time_nnf_manager_memory(const NnfManager* manager);
NNF_NODE time_nnf_literal2node(const Lit* lit, const NnfManager* manager);
NNF_NODE time_nnf_conjoin(NNF_NODE node1, NNF_NODE node2, NnfManager* manager);
NNF_NODE time_nnf_disjoin(const Var* var, NNF_NODE node1, NNF_NODE node2, NnfManager* manager);
void time_nnf_count_nodes(NNF_NODE node, c2dSize* node_count, c2dSize* edge_count);
void time_nnf_manager_set_root(NNF_NODE node, NnfManager* manager);
NNF_NODE time_nnf_manager_get_root(const NnfManager* manager);
Nnf* time_nnf_manager_extract_nnf(NnfManager* manager);
void time_nnf_manager_save_to_file(const char* fname, NnfManager* manager, c2dSize* node_count, c2dSize* edge_count);
Nnf* time_nnf_load_from_file(const char* fname);
c2dSize time_nnf_free(Nnf* nnf);
c2dSize time_nnf_node_count(const Nnf* nnf);
c2dSize time_nnf_edge_count(const Nnf* nnf);
char* time_nnf_count_models(c2dSize var_count, const Nnf* nnf);
BOOLEAN time_nnf_entails_cnf(const Nnf* nnf, const SatState* sat_state);
BOOLEAN time_nnf_decomposable(const Nnf* nnf);

// Vtree Functions
VtreeManager* time_vtree_manager_new(const SatState* sat_state, const c2dOptions* options);
void time_vtree_manager_free(VtreeManager* manager);
void time_vtree_save(const char* fname, const DVtree* vtree);
void time_vtree_save_as_dot(const char* fname, const DVtree* vtree);
void time_vtree_print_widths(const DVtree* vtree);
BOOLEAN time_vtree_is_leaf(const DVtree* vtree);
BOOLEAN time_vtree_is_shannon_node(const DVtree* vtree);
Var* time_vtree_shannon_var(const DVtree* vtree);

#endif // TIMING_H_