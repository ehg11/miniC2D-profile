import pandas as pd
from analysis import (
    average_stats,
    get_function_stats,
    get_percentage_of_compile,
    get_total_stats,
    load_data,
    save_to_md,
)
from config import STATS_DIR


def main():
    cnf_basename = "s1423.bench.cnf"
    data = load_data(f"{STATS_DIR}{cnf_basename}.json")

    # analysis
    pct_of_compile = get_percentage_of_compile(data)
    pct_of_compile_df = pd.DataFrame(pct_of_compile)
    avg_stats = average_stats(pct_of_compile_df)

    total_stats = get_total_stats(avg_stats)
    function_stats = get_function_stats(avg_stats)

    save_to_md(cnf_basename, total_stats, function_stats)


if __name__ == "__main__":
    main()
