import json
import os
import pandas as pd
from datetime import datetime

from config import MD_DIR, STATS_DIR


def get_cnf_paths(cnf_dir):
    cnfs = [os.path.join(cnf_dir, f) for f in os.listdir(cnf_dir) if f.endswith(".cnf")]

    # remove CNFs that have already been processed
    cnfs = [
        f for f in cnfs if not os.path.exists(f"{STATS_DIR}{os.path.basename(f)}.json")
    ]

    # sort in order of smallest->biggest
    # makes it easier to see progress
    cnfs.sort(key=os.path.getsize)

    return cnfs


def load_data(filename):
    with open(filename) as f:
        data = json.load(f)

    return data


def get_percentage_of_compile(single_run_data):
    compile_time = single_run_data["compile_time"]

    res = {}
    total_api_time = 0
    total_sat_time = 0
    total_nnf_time = 0
    total_vtree_time = 0
    for function, time in single_run_data.items():
        if function == "compile_time":
            continue
        if function == "total_time":
            continue

        total_api_time += time
        if function.startswith("sat_"):
            total_sat_time += time
        elif function.startswith("nnf_"):
            total_nnf_time += time
        elif function.startswith("vtree_"):
            total_vtree_time += time
        res[function] = time / compile_time * 100

    res["total_api_time"] = total_api_time / compile_time * 100
    res["total_sat_time"] = total_sat_time / compile_time * 100
    res["total_nnf_time"] = total_nnf_time / compile_time * 100
    res["total_vtree_time"] = total_vtree_time / compile_time * 100

    # NOTE: the pandas DF expects this as a list
    return [res]


def average_stats(multi_run_data: pd.DataFrame):
    averages = multi_run_data.copy().mean()
    averages = averages.reset_index()
    averages.columns = ["function", "pct_cmp_time"]

    # sort in desc order
    averages = averages.sort_values(
        by=["pct_cmp_time", "function"], ascending=[False, True], ignore_index=True
    )

    # remove zero values
    averages = averages[averages["pct_cmp_time"] > 0]

    return averages


def get_total_stats(average_stats: pd.DataFrame):
    totals = average_stats.copy()[
        average_stats["function"].str.startswith("total_")
    ].reset_index(drop=True)

    return totals


def get_function_stats(average_stats: pd.DataFrame):
    functions = average_stats.copy()[
        ~average_stats["function"].str.startswith("total_")
    ].reset_index(drop=True)

    return functions


def save_to_md(cnf: str, totals: pd.DataFrame, functions: pd.DataFrame):
    totals.columns = ["Function", "Percentage of Compile Time"]
    functions.columns = ["Function", "Percentage of Compile Time"]

    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    filename = f"{MD_DIR}{cnf}.md"

    print(f"[{timestamp}] Saving MD tables to {filename}...")
    with open(filename, "w") as f:
        f.write(f"# Stats for {cnf}\n\n")
        f.write("## Aggregate Stats\n")
        f.write(totals.to_markdown(index=False))
        f.write("\n\n")
        f.write("## Function Stats\n")
        f.write(functions.to_markdown(index=False))

    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    print(f"[{timestamp}] MD tables saved to {filename}")
