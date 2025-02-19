from datetime import datetime
import os

import pandas as pd
from analysis import (
    average_stats,
    get_cnf_paths,
    get_function_stats,
    get_percentage_time,
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
        pct_time = get_percentage_time(data)
        pct_time_df = pd.DataFrame(pct_time)
        avg_stats = average_stats(pct_time_df)

        total_stats = get_total_stats(avg_stats)
        function_stats = get_function_stats(avg_stats)

        # persisting state
        cnf_basename = os.path.basename(cnf_path)
        save_to_stats(data, cnf_basename)
        save_to_md(cnf_basename, total_stats, function_stats)

        # remove any .nnf files
        # they can get really large and exceed disk usage

        # remove the .nnf file
        nnf_file = f"{cnf_path}.nnf"
        if os.path.exists(nnf_file):
            timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
            print(f"[{timestamp}] Removing {cnf_path}.nnf...")
            os.remove(nnf_file)
            timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
            print(f"[{timestamp}] Removed {cnf_path}.nnf")


if __name__ == "__main__":
    individual_cnfs()
