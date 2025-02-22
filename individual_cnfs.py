from datetime import datetime
import os

import pandas as pd
from analysis import (
    build_df,
    get_cnf_paths,
    get_total_df,
    save_to_md,
)
from config import CNF_DIR
from stats import parse_stats, run_miniC2D, save_to_stats


def individual_cnfs():
    cnf_paths = get_cnf_paths(CNF_DIR)
    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    print(f"[{timestamp}] Found {len(cnf_paths)} CNF files: {cnf_paths}")
    timed_out = []
    for cnf_path in cnf_paths:
        # getting stats
        stats, timeout = run_miniC2D(cnf_path)
        if timeout:
            timed_out.append(cnf_path)
            continue
        data = parse_stats(stats)

        # analysis
        function_stats = build_df(data)
        total_stats = get_total_df(function_stats)

        # persisting state
        cnf_basename = os.path.basename(cnf_path)
        save_to_stats(data, cnf_basename)
        save_to_md(cnf_basename, total_stats, function_stats)

        # remove any .nnf files
        # they can get really large and exceed disk usage
        nnf_file = f"{cnf_path}.nnf"
        if os.path.exists(nnf_file):
            timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
            print(f"[{timestamp}] Removing {cnf_path}.nnf...")
            os.remove(nnf_file)
            timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
            print(f"[{timestamp}] Removed {cnf_path}.nnf")


if __name__ == "__main__":
    individual_cnfs()
