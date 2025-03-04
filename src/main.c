/******************************************************************************
 * The miniC2D Package
 * miniC2D version 1.0.0, Sep 27, 2015
 * http://reasoning.cs.ucla.edu/minic2d
 ******************************************************************************/

#include "c2d.h"

//getopt.c
c2dOptions* get_options(int argc, char** argv);
//compile.c
NnfManager* compile_vtree(VtreeManager* manager, SatState* sat_state);
//count.c
c2dWmc count_vtree(VtreeManager* manager, SatState* sat_state);
//cache.c
void print_vtree_cache_stats(VtreeCache* vtree_cache);
//utilities.c
void pprint_bytes(const char* string, c2dSize bytes);
char* extended_file_name(const char* fname, const char* new_extension);
const char* vtree_type(const c2dOptions* options);

// printing sat function times
void print_time() {
  printf("\n");
  printf("=TIMESTART=\n");
  // SAT functions
  printf("sat_is_instantiated_var\t%fs\n",timing[SAT_IS_INSTANTIATED_VAR]);
  printf("sat_is_irrelevant_var\t%fs\n",timing[SAT_IS_IRRELEVANT_VAR]);
  printf("sat_var_count\t%fs\n",timing[SAT_VAR_COUNT]);
  printf("sat_var2pliteral\t%fs\n",timing[SAT_VAR2PLITERAL]);
  printf("sat_var2nliteral\t%fs\n",timing[SAT_VAR2NLITERAL]);
  printf("sat_is_implied_literal\t%fs\n",timing[SAT_IS_IMPLIED_LITERAL]);
  printf("sat_literal_weight\t%fs\n",timing[SAT_LITERAL_WEIGHT]);
  printf("sat_decide_literal\t%fs\n",timing[SAT_DECIDE_LITERAL]);
  printf("sat_undo_decide_literal\t%fs\n",timing[SAT_UNDO_DECIDE_LITERAL]);
  printf("sat_is_subsumed_clause\t%fs\n",timing[SAT_IS_SUBSUMED_CLAUSE]);
  printf("sat_clause_count\t%fs\n",timing[SAT_CLAUSE_COUNT]);
  printf("sat_learned_clause_count\t%fs\n",timing[SAT_LEARNED_CLAUSE_COUNT]);
  printf("sat_assert_clause\t%fs\n",timing[SAT_ASSERT_CLAUSE]);
  printf("sat_state_new\t%fs\n",timing[SAT_STATE_NEW]);
  printf("sat_state_free\t%fs\n",timing[SAT_STATE_FREE]);
  printf("sat_assert_unit_clauses\t%fs\n",timing[SAT_ASSERT_UNIT_CLAUSES]);
  printf("sat_undo_assert_unit_clauses\t%fs\n",timing[SAT_UNDO_ASSERT_UNIT_CLAUSES]);
  printf("sat_at_assertion_level\t%fs\n",timing[SAT_AT_ASSERTION_LEVEL]);

  // NNF functions
  printf("nnf_manager_new\t%fs\n",timing[NNF_MANAGER_NEW]);
  printf("nnf_manager_free\t%fs\n",timing[NNF_MANAGER_FREE]);
  printf("nnf_manager_memory\t%fs\n",timing[NNF_MANAGER_MEMORY]);
  printf("nnf_literal2node\t%fs\n",timing[NNF_LITERAL2NODE]);
  printf("nnf_conjoin\t%fs\n",timing[NNF_CONJOIN]);
  printf("nnf_disjoin\t%fs\n",timing[NNF_DISJOIN]);
  printf("nnf_count_nodes\t%fs\n",timing[NNF_COUNT_NODES]);
  printf("nnf_manager_set_root\t%fs\n",timing[NNF_MANAGER_SET_ROOT]);
  printf("nnf_manager_get_root\t%fs\n",timing[NNF_MANAGER_GET_ROOT]);
  printf("nnf_manager_extract_nnf\t%fs\n",timing[NNF_MANAGER_EXTRACT_NNF]);
  printf("nnf_manager_save_to_file\t%fs\n",timing[NNF_MANAGER_SAVE_TO_FILE]);
  printf("nnf_load_from_file\t%fs\n",timing[NNF_LOAD_FROM_FILE]);
  printf("nnf_free\t%fs\n",timing[NNF_FREE]);
  printf("nnf_node_count\t%fs\n",timing[NNF_NODE_COUNT]);
  printf("nnf_edge_count\t%fs\n",timing[NNF_EDGE_COUNT]);
  printf("nnf_count_models\t%fs\n",timing[NNF_COUNT_MODELS]);
  printf("nnf_entails_cnf\t%fs\n",timing[NNF_ENTAILS_CNF]);
  printf("nnf_decomposable\t%fs\n",timing[NNF_DECOMPOSABLE]);

  // Vtree functions
  printf("vtree_manager_new\t%fs\n",timing[VTREE_MANAGER_NEW]);
  printf("vtree_manager_free\t%fs\n",timing[VTREE_MANAGER_FREE]);
  printf("vtree_save\t%fs\n",timing[VTREE_SAVE]);
  printf("vtree_save_as_dot\t%fs\n",timing[VTREE_SAVE_AS_DOT]);
  printf("vtree_print_widths\t%fs\n",timing[VTREE_PRINT_WIDTHS]);
  printf("vtree_is_leaf\t%fs\n",timing[VTREE_IS_LEAF]);
  printf("vtree_is_shannon_node\t%fs\n",timing[VTREE_IS_SHANNON_NODE]);
  printf("vtree_shannon_var\t%fs\n",timing[VTREE_SHANNON_VAR]);

  printf("=TIMEEND=\n");

  double total_time = 0;
  for(int i = 0; i < FUNC_COUNT; i++) {
    total_time += timing[i];
  }
  printf("Total API time: %fs\n", total_time);
  printf("Total API calls: %lu\n", num_api_calls);
}

/******************************************************************************
 * start
 ******************************************************************************/

int main(int argc, char* argv[]) {

  //get options from command line (and defaults)
  c2dOptions* options = get_options(argc,argv);

  VtreeManager* manager;
  SatState* sat_state;
  clock_t start_t;
  clock_t start_total_t;

  //construct CNF
  start_total_t = start_t = clock();
  printf("\nConstructing CNF...");
  sat_state = time_sat_state_new(options->cnf_filename);
  clock_t sat_t = clock()-start_t;
  printf(" DONE");
  printf("\nCNF stats: ");
  printf("\n  Vars=%"PRIvS" / ",sat_var_count(sat_state));
  printf("Clauses=%"PRIvS"",sat_clause_count(sat_state));
  printf("\n  CNF Time\t%0.3fs",((double)(sat_t))/CLOCKS_PER_SEC);

  //construct Vtree
  start_t = clock();
  printf("\nConstructing vtree (from %s)...",vtree_type(options)); fflush(stdout);
  manager = time_vtree_manager_new(sat_state,options);
  clock_t vtree_t = clock()-start_t;
  printf(" DONE");
  printf("\nVtree stats:");
  printf("\n  "); time_vtree_print_widths(manager->vtree);
  printf("\n  Vtree Time\t%0.3fs",((double)(vtree_t))/CLOCKS_PER_SEC);
  fflush(stdout);

  if(options->vtree_out_filename!=NULL) {
    printf("\nSaving vtree...");
    time_vtree_save(options->vtree_out_filename,manager->vtree);
    printf(" DONE");
  }
  if(options->vtree_dot_filename!=NULL) {
    printf("\nSaving vtree (dot)...");
    time_vtree_save_as_dot(options->vtree_dot_filename,manager->vtree);
    printf(" DONE");
  }

  //(weighted) model counting
  if(options->model_counter) {
    start_t = clock();
    printf("\nCounting..."); fflush(stdout);
    c2dWmc count = count_vtree(manager,sat_state);
    clock_t count_t = clock()-start_t;
    printf(" DONE");
    printf("\n  Learned clauses      \t%"PRIvS"",sat_learned_clause_count(sat_state));
    print_vtree_cache_stats(manager->cache);
    printf("\nCount stats:");
    printf("\n  Count Time\t%0.3fs",((double)(count_t))/CLOCKS_PER_SEC);
    printf("\n  Count \t%0.3"PRIwmcS"",count);
    printf("\nTotal Time: %0.3fs\n\n",((double)clock()-start_total_t)/CLOCKS_PER_SEC);
    free(options);
    time_vtree_manager_free(manager);
    time_sat_state_free(sat_state);

    print_time();
    return 0;
  }

  //compile CNF into a Decision-DNNF
  start_t = clock();
  printf("\nCompiling..."); fflush(stdout);
  NnfManager* nnf_manager = compile_vtree(manager,sat_state);
  clock_t comp_t = clock()-start_t;
  printf(" DONE");
  pprint_bytes("\n  NNF memory      \t",time_nnf_manager_memory(nnf_manager));
  printf("\n  Learned clauses      \t%"PRIvS"",sat_learned_clause_count(sat_state));
  print_vtree_cache_stats(manager->cache);
  printf("\n  Compile Time\t%0.3fs",((double)(comp_t))/CLOCKS_PER_SEC);

  char* nnf_fname = extended_file_name(options->cnf_filename,".nnf");

  if(options->in_memory==0) { //save NNF to file
    start_t = clock();
    printf("\nSaving compiled NNF to file...");
    c2dSize n_count, e_count;
    time_nnf_manager_save_to_file(nnf_fname,nnf_manager,&n_count,&e_count);
    printf(" DONE");
    printf("\n  Save Time       \t%0.3fs",((double)clock()-start_t)/CLOCKS_PER_SEC);
    printf("\nNNF stats:");
    printf("\n  Nodes           \t%"PRIvS"",n_count);
    printf("\n  Edges           \t%"PRIvS"",e_count);
    time_nnf_manager_free(nnf_manager); //manager should be freed as NNF destroyed
  }

  Nnf* nnf = NULL;
  if(options->count_models || options->check_entail) { //further processing is needed
    printf("\nPost compilation");
    if(options->in_memory) { //nnf is in memory
      start_t = clock();
      printf("\n  Extracting NNF...");
      nnf = time_nnf_manager_extract_nnf(nnf_manager);
      printf(" DONE");
      printf("\n  Extract Time    \t%0.3fs",((double)clock()-start_t)/CLOCKS_PER_SEC);
      time_nnf_manager_free(nnf_manager); //manager should be freed as NNF destroyed
    }
    else { //nnf was already saved to file
      start_t = clock();
      //load nnf from file: different format for nnf
      printf("\n  Loading NNF from file...");
      nnf = time_nnf_load_from_file(nnf_fname);
      printf(" DONE");
      printf("\n  Load Time       \t%0.3fs",((double)clock()-start_t)/CLOCKS_PER_SEC);
    }

    printf("\nNNF stats:");
    printf("\n  Nodes           \t%"PRIvS"",time_nnf_node_count(nnf));
    printf("\n  Edges           \t%"PRIvS"",time_nnf_edge_count(nnf));
  }
  else { //done: no further processing
    if(options->in_memory) {
      c2dSize n_count = 0; c2dSize e_count = 0;
      NNF_NODE root = time_nnf_manager_get_root(nnf_manager);
      time_nnf_count_nodes(root,&n_count,&e_count);
      time_nnf_manager_free(nnf_manager);
      printf("\nNNF stats:");
      printf("\n  Nodes           \t%"PRIvS"",n_count);
      printf("\n  Edges           \t%"PRIvS"",e_count);
    }
    printf("\nTotal Time: %0.3fs\n\n",((double)clock()-start_total_t)/CLOCKS_PER_SEC);
    free(options);
    free(nnf_fname);
    time_vtree_manager_free(manager);
    time_sat_state_free(sat_state);

    print_time();
    return 0;
  }

  //further processing of the nnf is required
  if(options->count_models) {
    start_t = clock();
    printf("\n  Counting...");
    c2dSize var_count = sat_var_count(sat_state);
    char* str = time_nnf_count_models(var_count,nnf);
    printf(" %s models / ",str);
    printf("%0.3fs",((double)clock()-start_t)/CLOCKS_PER_SEC);
    free(str);
  }

  if(options->check_entail) {
    BOOLEAN decomposable = 1;
    start_t = clock();
    printf("\n  Checking decomposability... "); fflush(stdout);
    if(time_nnf_decomposable(nnf)) printf("OK / ");
    else {
      decomposable = 0;
      printf("Failed!!! / ");
    }
    printf("%0.3fs",((double)clock()-start_t)/CLOCKS_PER_SEC);
    start_t = clock();
    printf("\n  Checking entailment... "); fflush(stdout);
    if(time_nnf_entails_cnf(nnf,sat_state)) printf("OK / ");
    else if(decomposable==1) printf("Failed!!! / ");
    else printf("Cannot decide!!! / ");
    printf("%0.3fs",((double)clock()-start_t)/CLOCKS_PER_SEC);
  }

  printf("\nTotal Time: %0.3fs\n\n",((double)clock()-start_total_t)/CLOCKS_PER_SEC);

  free(options);
  free(nnf_fname);
  time_nnf_free(nnf);
  time_vtree_manager_free(manager);
  time_sat_state_free(sat_state);

  print_time();
  return 0;
}

/******************************************************************************
 * end
 ******************************************************************************/
