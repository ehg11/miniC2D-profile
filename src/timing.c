#include <time.h>
#include "c2d.h"

double timing[FUNC_COUNT] = {0};

BOOLEAN time_sat_is_instantiated_var(const Var* var) {
    clock_t start = clock();
    BOOLEAN result = sat_is_instantiated_var(var);
    clock_t end = clock();

    timing[SAT_IS_INSTANTIATED_VAR] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

BOOLEAN time_sat_is_irrelevant_var(const Var* var) {
    clock_t start = clock();
    BOOLEAN result = sat_is_irrelevant_var(var);
    clock_t end = clock();

    timing[SAT_IS_IRRELEVANT_VAR] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_sat_var_count(const SatState* sat_state) {
    clock_t start = clock();
    c2dSize result = sat_var_count(sat_state);
    clock_t end = clock();

    timing[SAT_VAR_COUNT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Lit* time_sat_var2pliteral(const Var* var) {
    clock_t start = clock();
    Lit* result = sat_var2pliteral(var);
    clock_t end = clock();

    timing[SAT_VAR2PLITERAL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Lit* time_sat_var2nliteral(const Var* var) {
    clock_t start = clock();
    Lit* result = sat_var2nliteral(var);
    clock_t end = clock();

    timing[SAT_VAR2NLITERAL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

BOOLEAN time_sat_is_implied_literal(const Lit* lit) {
    clock_t start = clock();
    BOOLEAN result = sat_is_implied_literal(lit);
    clock_t end = clock();

    timing[SAT_IS_IMPLIED_LITERAL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dWmc time_sat_literal_weight(const Lit* lit) {
    clock_t start = clock();
    c2dWmc result = sat_literal_weight(lit);
    clock_t end = clock();

    timing[SAT_LITERAL_WEIGHT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Clause* time_sat_decide_literal(Lit* lit, SatState* sat_state) {
    clock_t start = clock();
    Clause* result = sat_decide_literal(lit, sat_state);
    clock_t end = clock();

    timing[SAT_DECIDE_LITERAL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_sat_undo_decide_literal(SatState* sat_state) {
    clock_t start = clock();
    sat_undo_decide_literal(sat_state);
    clock_t end = clock();

    timing[SAT_UNDO_DECIDE_LITERAL] += (double)(end - start) / CLOCKS_PER_SEC;
}

BOOLEAN time_sat_is_subsumed_clause(const Clause* clause) {
    clock_t start = clock();
    BOOLEAN result = sat_is_subsumed_clause(clause);
    clock_t end = clock();

    timing[SAT_IS_SUBSUMED_CLAUSE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_sat_clause_count(const SatState* sat_state) {
    clock_t start = clock();
    c2dSize result = sat_clause_count(sat_state);
    clock_t end = clock();

    timing[SAT_CLAUSE_COUNT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_sat_learned_clause_count(const SatState* sat_state) {
    clock_t start = clock();
    c2dSize result = sat_learned_clause_count(sat_state);
    clock_t end = clock();

    timing[SAT_LEARNED_CLAUSE_COUNT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Clause* time_sat_assert_clause(Clause* clause, SatState* sat_state) {
    clock_t start = clock();
    Clause* result = sat_assert_clause(clause, sat_state);
    clock_t end = clock();

    timing[SAT_ASSERT_CLAUSE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

SatState* time_sat_state_new(const char* file_name) {
    clock_t start = clock();
    SatState* result = sat_state_new(file_name);
    clock_t end = clock();

    timing[SAT_STATE_NEW] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_sat_state_free(SatState* sat_state) {
    clock_t start = clock();
    sat_state_free(sat_state);
    clock_t end = clock();

    timing[SAT_STATE_FREE] += (double)(end - start) / CLOCKS_PER_SEC;
}

BOOLEAN time_sat_assert_unit_clauses(SatState* sat_state) {
    clock_t start = clock();
    BOOLEAN result = sat_assert_unit_clauses(sat_state);
    clock_t end = clock();

    timing[SAT_ASSERT_UNIT_CLAUSES] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_sat_undo_assert_unit_clauses(SatState* sat_state) {
    clock_t start = clock();
    sat_undo_assert_unit_clauses(sat_state);
    clock_t end = clock();

    timing[SAT_UNDO_ASSERT_UNIT_CLAUSES] += (double)(end - start) / CLOCKS_PER_SEC;
}

BOOLEAN time_sat_at_assertion_level(const Clause* clause, const SatState* sat_state) {
    clock_t start = clock();
    BOOLEAN result = sat_at_assertion_level(clause, sat_state);
    clock_t end = clock();

    timing[SAT_AT_ASSERTION_LEVEL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

NnfManager* time_nnf_manager_new(c2dSize var_count, c2dSize capacity) {
    clock_t start = clock();
    NnfManager* result = nnf_manager_new(var_count, capacity);
    clock_t end = clock();

    timing[NNF_MANAGER_NEW] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_nnf_manager_free(NnfManager* manager) {
    clock_t start = clock();
    nnf_manager_free(manager);
    clock_t end = clock();

    timing[NNF_MANAGER_FREE] += (double)(end - start) / CLOCKS_PER_SEC;
}

c2dSize time_nnf_manager_memory(const NnfManager* manager) {
    clock_t start = clock();
    c2dSize result = nnf_manager_memory(manager);
    clock_t end = clock();

    timing[NNF_MANAGER_MEMORY] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

NNF_NODE time_nnf_literal2node(const Lit* lit, const NnfManager* manager) {
    clock_t start = clock();
    NNF_NODE result = nnf_literal2node(lit, manager);
    clock_t end = clock();

    timing[NNF_LITERAL2NODE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

NNF_NODE time_nnf_conjoin(NNF_NODE node1, NNF_NODE node2, NnfManager* manager) {
    clock_t start = clock();
    NNF_NODE result = nnf_conjoin(node1, node2, manager);
    clock_t end = clock();

    timing[NNF_CONJOIN] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

NNF_NODE time_nnf_disjoin(const Var* var, NNF_NODE node1, NNF_NODE node2, NnfManager* manager) {
    clock_t start = clock();
    NNF_NODE result = nnf_disjoin(var, node1, node2, manager);
    clock_t end = clock();

    timing[NNF_DISJOIN] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_nnf_count_nodes(NNF_NODE node, c2dSize* node_count, c2dSize* edge_count) {
    clock_t start = clock();
    nnf_count_nodes(node, node_count, edge_count);
    clock_t end = clock();

    timing[NNF_COUNT_NODES] += (double)(end - start) / CLOCKS_PER_SEC;
}

void time_nnf_manager_set_root(NNF_NODE node, NnfManager* manager) {
    clock_t start = clock();
    nnf_manager_set_root(node, manager);
    clock_t end = clock();

    timing[NNF_MANAGER_SET_ROOT] += (double)(end - start) / CLOCKS_PER_SEC;
}

NNF_NODE time_nnf_manager_get_root(const NnfManager* manager) {
    clock_t start = clock();
    NNF_NODE result = nnf_manager_get_root(manager);
    clock_t end = clock();

    timing[NNF_MANAGER_GET_ROOT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Nnf* time_nnf_manager_extract_nnf(NnfManager* manager) {
    clock_t start = clock();
    Nnf* result = nnf_manager_extract_nnf(manager);
    clock_t end = clock();

    timing[NNF_MANAGER_EXTRACT_NNF] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_nnf_manager_save_to_file(const char* fname, NnfManager* manager, c2dSize* node_count, c2dSize* edge_count) {
    clock_t start = clock();
    nnf_manager_save_to_file(fname, manager, node_count, edge_count);
    clock_t end = clock();

    timing[NNF_MANAGER_SAVE_TO_FILE] += (double)(end - start) / CLOCKS_PER_SEC;
}

Nnf* time_nnf_load_from_file(const char* fname) {
    clock_t start = clock();
    Nnf* result = nnf_load_from_file(fname);
    clock_t end = clock();

    timing[NNF_LOAD_FROM_FILE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_nnf_free(Nnf* nnf) {
    clock_t start = clock();
    c2dSize result = nnf_free(nnf);
    clock_t end = clock();

    timing[NNF_FREE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_nnf_node_count(const Nnf* nnf) {
    clock_t start = clock();
    c2dSize result = nnf_node_count(nnf);
    clock_t end = clock();

    timing[NNF_NODE_COUNT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_nnf_edge_count(const Nnf* nnf) {
    clock_t start = clock();
    c2dSize result = nnf_edge_count(nnf);
    clock_t end = clock();

    timing[NNF_EDGE_COUNT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

char* time_nnf_count_models(c2dSize var_count, const Nnf* nnf) {
    clock_t start = clock();
    char* result = nnf_count_models(var_count, nnf);
    clock_t end = clock();

    timing[NNF_COUNT_MODELS] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

BOOLEAN time_nnf_entails_cnf(const Nnf* nnf, const SatState* sat_state) {
    clock_t start = clock();
    BOOLEAN result = nnf_entails_cnf(nnf, sat_state);
    clock_t end = clock();

    timing[NNF_ENTAILS_CNF] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

BOOLEAN time_nnf_decomposable(const Nnf* nnf) {
    clock_t start = clock();
    BOOLEAN result = nnf_decomposable(nnf);
    clock_t end = clock();

    timing[NNF_DECOMPOSABLE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

VtreeManager* time_vtree_manager_new(const SatState* sat_state, const c2dOptions* options) {
    clock_t start = clock();
    VtreeManager* result = vtree_manager_new(sat_state, options);
    clock_t end = clock();

    timing[VTREE_MANAGER_NEW] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_vtree_manager_free(VtreeManager* manager) {
    clock_t start = clock();
    vtree_manager_free(manager);
    clock_t end = clock();

    timing[VTREE_MANAGER_FREE] += (double)(end - start) / CLOCKS_PER_SEC;
}

void time_vtree_save(const char* fname, const DVtree* vtree) {
    clock_t start = clock();
    vtree_save(fname, vtree);
    clock_t end = clock();

    timing[VTREE_SAVE] += (double)(end - start) / CLOCKS_PER_SEC;
}

void time_vtree_save_as_dot(const char* fname, const DVtree* vtree) {
    clock_t start = clock();
    vtree_save_as_dot(fname, vtree);
    clock_t end = clock();

    timing[VTREE_SAVE_AS_DOT] += (double)(end - start) / CLOCKS_PER_SEC;
}

void time_vtree_print_widths(const DVtree* vtree) {
    clock_t start = clock();
    vtree_print_widths(vtree);
    clock_t end = clock();

    timing[VTREE_PRINT_WIDTHS] += (double)(end - start) / CLOCKS_PER_SEC;
}

BOOLEAN time_vtree_is_leaf(const DVtree* vtree) {
    clock_t start = clock();
    BOOLEAN result = vtree_is_leaf(vtree);
    clock_t end = clock();

    timing[VTREE_IS_LEAF] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

BOOLEAN time_vtree_is_shannon_node(const DVtree* vtree) {
    clock_t start = clock();
    BOOLEAN result = vtree_is_shannon_node(vtree);
    clock_t end = clock();

    timing[VTREE_IS_SHANNON_NODE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Var* time_vtree_shannon_var(const DVtree* vtree) {
    clock_t start = clock();
    Var* result = vtree_shannon_var(vtree);
    clock_t end = clock();

    timing[VTREE_SHANNON_VAR] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}