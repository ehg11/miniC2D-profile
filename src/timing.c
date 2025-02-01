#include <time.h>
#include "c2d.h"

double timing[SAT_FUNC_COUNT] = {0};

BOOLEAN time_sat_is_instantiated_var(const Var* var) {
    clock_t start = clock();
    BOOLEAN result = sat_is_instantiated_var(var);
    clock_t end = clock();

    timing[IS_INSTANTIATED_VAR] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

BOOLEAN time_sat_is_irrelevant_var(const Var* var) {
    clock_t start = clock();
    BOOLEAN result = sat_is_irrelevant_var(var);
    clock_t end = clock();

    timing[IS_IRRELEVANT_VAR] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_sat_var_count(const SatState* sat_state) {
    clock_t start = clock();
    c2dSize result = sat_var_count(sat_state);
    clock_t end = clock();

    timing[VAR_COUNT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Lit* time_sat_var2pliteral(const Var* var) {
    clock_t start = clock();
    Lit* result = sat_var2pliteral(var);
    clock_t end = clock();

    timing[VAR2PLITERAL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Lit* time_sat_var2nliteral(const Var* var) {
    clock_t start = clock();
    Lit* result = sat_var2nliteral(var);
    clock_t end = clock();

    timing[VAR2NLITERAL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

BOOLEAN time_sat_is_implied_literal(const Lit* lit) {
    clock_t start = clock();
    BOOLEAN result = sat_is_implied_literal(lit);
    clock_t end = clock();

    timing[IS_IMPLIED_LITERAL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dWmc time_sat_literal_weight(const Lit* lit) {
    clock_t start = clock();
    c2dWmc result = sat_literal_weight(lit);
    clock_t end = clock();

    timing[LITERAL_WEIGHT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Clause* time_sat_decide_literal(Lit* lit, SatState* sat_state) {
    clock_t start = clock();
    Clause* result = sat_decide_literal(lit, sat_state);
    clock_t end = clock();

    timing[DECIDE_LITERAL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_sat_undo_decide_literal(SatState* sat_state) {
    clock_t start = clock();
    sat_undo_decide_literal(sat_state);
    clock_t end = clock();

    timing[UNDO_DECIDE_LITERAL] += (double)(end - start) / CLOCKS_PER_SEC;
}

BOOLEAN time_sat_is_subsumed_clause(const Clause* clause) {
    clock_t start = clock();
    BOOLEAN result = sat_is_subsumed_clause(clause);
    clock_t end = clock();

    timing[IS_SUBSUMED_CLAUSE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_sat_clause_count(const SatState* sat_state) {
    clock_t start = clock();
    c2dSize result = sat_clause_count(sat_state);
    clock_t end = clock();

    timing[CLAUSE_COUNT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

c2dSize time_sat_learned_clause_count(const SatState* sat_state) {
    clock_t start = clock();
    c2dSize result = sat_learned_clause_count(sat_state);
    clock_t end = clock();

    timing[LEARNED_CLAUSE_COUNT] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

Clause* time_sat_assert_clause(Clause* clause, SatState* sat_state) {
    clock_t start = clock();
    Clause* result = sat_assert_clause(clause, sat_state);
    clock_t end = clock();

    timing[ASSERT_CLAUSE] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

SatState* time_sat_state_new(const char* file_name) {
    clock_t start = clock();
    SatState* result = sat_state_new(file_name);
    clock_t end = clock();

    timing[STATE_NEW] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_sat_state_free(SatState* sat_state) {
    clock_t start = clock();
    sat_state_free(sat_state);
    clock_t end = clock();

    timing[STATE_FREE] += (double)(end - start) / CLOCKS_PER_SEC;
}

BOOLEAN time_sat_assert_unit_clauses(SatState* sat_state) {
    clock_t start = clock();
    BOOLEAN result = sat_assert_unit_clauses(sat_state);
    clock_t end = clock();

    timing[ASSERT_UNIT_CLAUSES] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}

void time_sat_undo_assert_unit_clauses(SatState* sat_state) {
    clock_t start = clock();
    sat_undo_assert_unit_clauses(sat_state);
    clock_t end = clock();

    timing[UNDO_ASSERT_UNIT_CLAUSES] += (double)(end - start) / CLOCKS_PER_SEC;
}

BOOLEAN time_sat_at_assertion_level(const Clause* clause, const SatState* sat_state) {
    clock_t start = clock();
    BOOLEAN result = sat_at_assertion_level(clause, sat_state);
    clock_t end = clock();

    timing[AT_ASSERTION_LEVEL] += (double)(end - start) / CLOCKS_PER_SEC;

    return result;
}