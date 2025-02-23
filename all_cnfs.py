import os
from analysis import (
    build_df,
    get_total_df,
    load_data,
    save_to_md,
)
from config import STATS_DIR


def all_cnfs():
    stdouts = []
    for f in os.listdir(STATS_DIR):
        if not f.endswith(".json"):
            continue

        json_data = load_data(f"{STATS_DIR}{f}")
        cnf_basename = os.path.basename(f)
        if cnf_basename.endswith(".json"):
            cnf_basename = cnf_basename[:-5]
        stdouts.append(json_data)

    timing_data = {}
    for s in stdouts:
        for k, v in s.items():
            timing_data[k] = timing_data.get(k, 0) + v

    total_function_stats = build_df(timing_data)
    total_total_stats = get_total_df(total_function_stats)

    save_to_md("all_cnfs", total_total_stats, total_function_stats)


if __name__ == "__main__":
    all_cnfs()
