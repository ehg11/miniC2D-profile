import json
import os
import pandas as pd
from datetime import datetime

from config import MD_DIR, STATS_DIR, STDOUTS_DIR


def get_cnf_paths(cnf_dir):
    cnfs = [os.path.join(cnf_dir, f) for f in os.listdir(cnf_dir) if f.endswith(".cnf")]

    # remove CNFs that have already been processed
    cnfs = [
        f for f in cnfs if not os.path.exists(f"{STDOUTS_DIR}{os.path.basename(f)}.txt")
    ]

    return cnfs


def load_data(filename):
    with open(filename) as f:
        data = json.load(f)

    return data


def build_df(data: dict, del_compile_time=True):
    # NOTE: some vtree functions are not included in compile time
    # remove compile time key
    if del_compile_time and "compile_time" in data:
        del data["compile_time"]

    timing_df = pd.DataFrame.from_dict(data, orient="index").reset_index()
    timing_df.columns = ["function", "time"]

    # add percentage time
    total_time = timing_df.loc[timing_df["function"] == "total_time", "time"].values[0]
    timing_df["pct_total_time"] = timing_df["time"] / total_time * 100

    if not del_compile_time:
        compile_time = timing_df.loc[
            timing_df["function"] == "compile_time", "time"
        ].values[0]
        timing_df["pct_compile_time"] = timing_df["time"] / compile_time * 100

    # remove unnecessary rows
    timing_df = timing_df[timing_df["time"] != 0]

    timing_df = timing_df.sort_values(
        by=["pct_total_time", "function"], ascending=[False, True]
    ).reset_index(drop=True)

    return timing_df


def get_total_df(timing_df: pd.DataFrame):
    grouped_timing_df = timing_df.copy()
    grouped_timing_df["category"] = (
        grouped_timing_df["function"]
        .str.split("_")
        .str[0]
        .map(
            {"sat": "sat_functions", "vtree": "vtree_functions", "nnf": "nnf_functions"}
        )
    )

    grouped_timing_df = (
        grouped_timing_df.groupby("category")[["time", "pct_total_time"]]
        .sum()
        .reset_index()
    )

    all_api_time = grouped_timing_df["time"].sum()
    all_api_pct = grouped_timing_df["pct_total_time"].sum()

    all_api_df = pd.DataFrame(
        [{"category": "all_apis", "time": all_api_time, "pct_total_time": all_api_pct}]
    )

    final_df = pd.concat([grouped_timing_df, all_api_df]).reset_index(drop=True)
    return final_df


def save_to_md(cnf: str, totals: pd.DataFrame, functions: pd.DataFrame):
    totals.columns = ["Category", "Elapsed Time", "Percentage of Total Time"]
    functions.columns = ["Function", "Elapsed Time", "Percentage of Total Time"]

    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    filename = f"{MD_DIR}{cnf}.md"

    print(f"[{timestamp}] Saving MD tables to {filename}...")
    os.makedirs(MD_DIR, exist_ok=True)
    with open(filename, "w+") as f:
        f.write(f"# Stats for {cnf}\n\n")
        f.write("## Aggregate Stats\n\n")
        f.write(totals.to_markdown(index=False))
        f.write("\n\n")
        f.write("## Function Stats\n\n")
        f.write(functions.to_markdown(index=False))
        f.write("\n")

    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    print(f"[{timestamp}] MD tables saved to {filename}")


def save_to_txt(data: str, cnf: str):
    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    stdout_file = f"{STDOUTS_DIR}{cnf}.json"
    print(f"[{timestamp}] Saving stdouts to {stdout_file}...")

    os.makedirs(STDOUTS_DIR, exist_ok=True)
    with open(stdout_file, "w+") as f:
        f.write(data)

    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    print(f"[{timestamp}] Stdout saved to {stdout_file}")
