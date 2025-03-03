#include <time.h>
#include "c2d.h"

double timing[FUNC_COUNT] = {0};

BOOLEAN time_sat_is_instantiated_var(const Var* var) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = sat_is_instantiated_var(var);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_IS_INSTANTIATED_VAR] += elapsed;

    return result;
}

BOOLEAN time_sat_is_irrelevant_var(const Var* var) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = sat_is_irrelevant_var(var);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_IS_IRRELEVANT_VAR] += elapsed;

    return result;
}

c2dSize time_sat_var_count(const SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    c2dSize result = sat_var_count(sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_VAR_COUNT] += elapsed;

    return result;
}

Lit* time_sat_var2pliteral(const Var* var) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    Lit* result = sat_var2pliteral(var);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_VAR2PLITERAL] += elapsed;

    return result;
}

Lit* time_sat_var2nliteral(const Var* var) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    Lit* result = sat_var2nliteral(var);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_VAR2NLITERAL] += elapsed;

    return result;
}

BOOLEAN time_sat_is_implied_literal(const Lit* lit) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = sat_is_implied_literal(lit);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_IS_IMPLIED_LITERAL] += elapsed;

    return result;
}

c2dWmc time_sat_literal_weight(const Lit* lit) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    c2dWmc result = sat_literal_weight(lit);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_LITERAL_WEIGHT] += elapsed;

    return result;
}

Clause* time_sat_decide_literal(Lit* lit, SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    Clause* result = sat_decide_literal(lit, sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_DECIDE_LITERAL] += elapsed;

    return result;
}

void time_sat_undo_decide_literal(SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    sat_undo_decide_literal(sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_UNDO_DECIDE_LITERAL] += elapsed;
}

BOOLEAN time_sat_is_subsumed_clause(const Clause* clause) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = sat_is_subsumed_clause(clause);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_IS_SUBSUMED_CLAUSE] += elapsed;

    return result;
}

c2dSize time_sat_clause_count(const SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    c2dSize result = sat_clause_count(sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_CLAUSE_COUNT] += elapsed;

    return result;
}

c2dSize time_sat_learned_clause_count(const SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    c2dSize result = sat_learned_clause_count(sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_LEARNED_CLAUSE_COUNT] += elapsed;

    return result;
}

Clause* time_sat_assert_clause(Clause* clause, SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    Clause* result = sat_assert_clause(clause, sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_ASSERT_CLAUSE] += elapsed;

    return result;
}

SatState* time_sat_state_new(const char* file_name) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    SatState* result = sat_state_new(file_name);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_STATE_NEW] += elapsed;

    return result;
}

void time_sat_state_free(SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    sat_state_free(sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_STATE_FREE] += elapsed;
}

BOOLEAN time_sat_assert_unit_clauses(SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = sat_assert_unit_clauses(sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_ASSERT_UNIT_CLAUSES] += elapsed;

    return result;
}

void time_sat_undo_assert_unit_clauses(SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    sat_undo_assert_unit_clauses(sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_UNDO_ASSERT_UNIT_CLAUSES] += elapsed;
}

BOOLEAN time_sat_at_assertion_level(const Clause* clause, const SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = sat_at_assertion_level(clause, sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[SAT_AT_ASSERTION_LEVEL] += elapsed;

    return result;
}

NnfManager* time_nnf_manager_new(c2dSize var_count, c2dSize capacity) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    NnfManager* result = nnf_manager_new(var_count, capacity);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_MANAGER_NEW] += elapsed;

    return result;
}

void time_nnf_manager_free(NnfManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    nnf_manager_free(manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_MANAGER_FREE] += elapsed;
}

c2dSize time_nnf_manager_memory(const NnfManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    c2dSize result = nnf_manager_memory(manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_MANAGER_MEMORY] += elapsed;

    return result;
}

NNF_NODE time_nnf_literal2node(const Lit* lit, const NnfManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    NNF_NODE result = nnf_literal2node(lit, manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_LITERAL2NODE] += elapsed;

    return result;
}

NNF_NODE time_nnf_conjoin(NNF_NODE node1, NNF_NODE node2, NnfManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    NNF_NODE result = nnf_conjoin(node1, node2, manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_CONJOIN] += elapsed;

    return result;
}

NNF_NODE time_nnf_disjoin(const Var* var, NNF_NODE node1, NNF_NODE node2, NnfManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    NNF_NODE result = nnf_disjoin(var, node1, node2, manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_DISJOIN] += elapsed;

    return result;
}

void time_nnf_count_nodes(NNF_NODE node, c2dSize* node_count, c2dSize* edge_count) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    nnf_count_nodes(node, node_count, edge_count);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_COUNT_NODES] += elapsed;
}

void time_nnf_manager_set_root(NNF_NODE node, NnfManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    nnf_manager_set_root(node, manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_MANAGER_SET_ROOT] += elapsed;
}

NNF_NODE time_nnf_manager_get_root(const NnfManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    NNF_NODE result = nnf_manager_get_root(manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_MANAGER_GET_ROOT] += elapsed;

    return result;
}

Nnf* time_nnf_manager_extract_nnf(NnfManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    Nnf* result = nnf_manager_extract_nnf(manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_MANAGER_EXTRACT_NNF] += elapsed;

    return result;
}

void time_nnf_manager_save_to_file(const char* fname, NnfManager* manager, c2dSize* node_count, c2dSize* edge_count) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    nnf_manager_save_to_file(fname, manager, node_count, edge_count);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_MANAGER_SAVE_TO_FILE] += elapsed;
}

Nnf* time_nnf_load_from_file(const char* fname) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    Nnf* result = nnf_load_from_file(fname);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_LOAD_FROM_FILE] += elapsed;

    return result;
}

c2dSize time_nnf_free(Nnf* nnf) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    c2dSize result = nnf_free(nnf);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_FREE] += elapsed;

    return result;
}

c2dSize time_nnf_node_count(const Nnf* nnf) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    c2dSize result = nnf_node_count(nnf);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_NODE_COUNT] += elapsed;

    return result;
}

c2dSize time_nnf_edge_count(const Nnf* nnf) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    c2dSize result = nnf_edge_count(nnf);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_EDGE_COUNT] += elapsed;

    return result;
}

char* time_nnf_count_models(c2dSize var_count, const Nnf* nnf) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    char* result = nnf_count_models(var_count, nnf);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_COUNT_MODELS] += elapsed;

    return result;
}

BOOLEAN time_nnf_entails_cnf(const Nnf* nnf, const SatState* sat_state) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = nnf_entails_cnf(nnf, sat_state);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_ENTAILS_CNF] += elapsed;

    return result;
}

BOOLEAN time_nnf_decomposable(const Nnf* nnf) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = nnf_decomposable(nnf);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[NNF_DECOMPOSABLE] += elapsed;

    return result;
}

VtreeManager* time_vtree_manager_new(const SatState* sat_state, const c2dOptions* options) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    VtreeManager* result = vtree_manager_new(sat_state, options);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[VTREE_MANAGER_NEW] += elapsed;

    return result;
}

void time_vtree_manager_free(VtreeManager* manager) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    vtree_manager_free(manager);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[VTREE_MANAGER_FREE] += elapsed;
}

void time_vtree_save(const char* fname, const DVtree* vtree) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    vtree_save(fname, vtree);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[VTREE_SAVE] += elapsed;
}

void time_vtree_save_as_dot(const char* fname, const DVtree* vtree) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    vtree_save_as_dot(fname, vtree);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[VTREE_SAVE_AS_DOT] += elapsed;
}

void time_vtree_print_widths(const DVtree* vtree) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    vtree_print_widths(vtree);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[VTREE_PRINT_WIDTHS] += elapsed;
}

BOOLEAN time_vtree_is_leaf(const DVtree* vtree) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = vtree_is_leaf(vtree);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
    timing[VTREE_IS_LEAF] += elapsed;

    return result;
}

BOOLEAN time_vtree_is_shannon_node(const DVtree* vtree) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    BOOLEAN result = vtree_is_shannon_node(vtree);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
    timing[VTREE_IS_SHANNON_NODE] += elapsed;

    return result;
}

Var* time_vtree_shannon_var(const DVtree* vtree) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    Var* result = vtree_shannon_var(vtree);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    timing[VTREE_SHANNON_VAR] += elapsed;

    return result;
}