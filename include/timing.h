#ifndef TIMING_H_
#define TIMING_H_

enum SatFunctions {
    IS_INSTANTIATED_VAR,
    IS_IRRELEVANT_VAR,
    VAR_COUNT,
    VAR2PLITERAL,
    VAR2NLITERAL,
    IS_IMPLIED_LITERAL,
    LITERAL_WEIGHT,
    DECIDE_LITERAL,
    UNDO_DECIDE_LITERAL,
    IS_SUBSUMED_CLAUSE,
    CLAUSE_COUNT,
    LEARNED_CLAUSE_COUNT,
    ASSERT_CLAUSE,
    STATE_NEW,
    STATE_FREE,
    ASSERT_UNIT_CLAUSES,
    UNDO_ASSERT_UNIT_CLAUSES,
    AT_ASSERTION_LEVEL,
    SAT_FUNC_COUNT,
};

extern double timing[SAT_FUNC_COUNT];

BOOLEAN time_sat_is_instantiated_var(const Var* var);
// static BOOLEAN time_sat_is_irrelevant_var(const Var* var);
// static c2dSize time_sat_var_count(const SatState* sat_state);
// static Lit* time_sat_var2pliteral(const Var* var);
// static Lit* time_sat_var2nliteral(const Var* var);
// static BOOLEAN time_sat_is_implied_literal(const Lit* lit);
// static c2dWmc time_sat_literal_weight(const Lit* lit);
// static Clause* time_sat_decide_literal(Lit* lit, SatState* sat_state);
// static void time_sat_undo_decide_literal(SatState* sat_state);
// static BOOLEAN time_sat_is_subsumed_clause(const Clause* clause);
// static c2dSize time_sat_clause_count(const SatState* sat_state);
// static c2dSize time_sat_learned_clause_count(const SatState* sat_state);
// static Clause* time_sat_assert_clause(Clause* clause, SatState* sat_state);
// static SatState* time_sat_state_new(const char* file_name);
// static void time_sat_state_free(SatState* sat_state);
// static BOOLEAN time_sat_assert_unit_clauses(SatState* sat_state);
// static void time_sat_undo_assert_unit_clauses(SatState* sat_state);
// static BOOLEAN time_sat_at_assertion_level(const Clause* clause, const SatState* sat_state);

#endif // TIMING_H_