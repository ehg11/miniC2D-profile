import os

import pandas as pd
from analysis import (
    average_stats,
    get_cnf_paths,
    get_function_stats,
    get_percentage_of_compile,
    get_total_stats,
    save_to_md,
)
from config import CNF_DIR
from stats import parse_stats, run_miniC2D, save_to_stats


def individual_cnfs():
    cnf_paths = get_cnf_paths(CNF_DIR)
    for cnf_path in cnf_paths:
        # getting stats
        stats = run_miniC2D(cnf_path)
        data = parse_stats(stats)

        # analysis
        pct_of_compile = get_percentage_of_compile(data)
        pct_of_compile_df = pd.DataFrame(pct_of_compile)
        avg_stats = average_stats(pct_of_compile_df)

        total_stats = get_total_stats(avg_stats)
        function_stats = get_function_stats(avg_stats)

        # persisting state
        cnf_basename = os.path.basename(cnf_path)
        save_to_stats(data, cnf_basename)
        save_to_md(cnf_basename, total_stats, function_stats)


if __name__ == "__main__":
    individual_cnfs()
