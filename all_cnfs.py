import os
import pandas as pd

from analysis import (
    average_stats,
    get_function_stats,
    get_percentage_time,
    get_total_stats,
    load_data,
    save_to_md,
)
from config import STATS_DIR
from stats import save_to_stats


def all_cnfs():
    # read all stats
    stdouts = []
    for f in os.listdir(STATS_DIR):
        if f.endswith(".json"):
            json_data = load_data(f"{STATS_DIR}{f}")
            stdouts.append(json_data)

    stats = []
    for s in stdouts:
        pct_time = get_percentage_time(s)

        # get_percent_time returns a list
        # this just appends
        stats += pct_time

    pct_time_df = pd.DataFrame(stats)
    avg_stats = average_stats(pct_time_df)

    total_stats = get_total_stats(avg_stats)
    function_stats = get_function_stats(avg_stats)

    # persisting state
    cnf_basename = "all_cnfs"
    save_to_md(cnf_basename, total_stats, function_stats)


if __name__ == "__main__":
    all_cnfs()
