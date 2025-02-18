import subprocess
import json
from typing import Dict
from datetime import datetime

from config import STATS_DIR


def run_miniC2D(cnf_path: str) -> str:
    """Run miniC2D and capture its stdout."""
    output = []
    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    print(f"[{timestamp}] Running miniC2D on {cnf_path}")

    # NOTE: using default vtree method (0) requires special libraries for
    # hypergraph partitioning. We use min-fill elimination order (4) instead.
    process = subprocess.Popen(
        [
            "./bin/linux/miniC2D",
            "--vtree_method",
            4,  # min-fill elimination order
            "--cnf",
            cnf_path,
        ],
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )

    for line in process.stdout:
        print(line, end="")
        output.append(line)

    process.wait()
    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    print(f"[{timestamp}] {cnf_path} finished")

    return "".join(output)


def parse_stats(stdout: str) -> Dict:
    """Parse the stdout and extract the required information."""
    data = {}
    lines = stdout.strip().splitlines()

    for line in lines:
        line = line.strip()
        if line.startswith("Compile Time"):
            data["compile_time"] = float(line.rsplit(maxsplit=1)[1].rstrip("s"))
        elif line.startswith("Total Time:"):
            data["total_time"] = float(line.rsplit(maxsplit=1)[1].rstrip("s"))

    # Extract the block between =TIMESTART= and =TIMEEND=
    in_block = False
    for line in lines:
        if line.strip() == "=TIMESTART=":
            in_block = True
            continue
        if line.strip() == "=TIMEEND=":
            in_block = False
            continue
        if in_block:
            function, time = line.strip().rsplit(maxsplit=1)
            time = float(time.rstrip("s"))
            data[function] = time

    return data


def save_to_stats(data: Dict, cnf: str):
    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    stats_file = f"{STATS_DIR}{cnf}.json"
    print(f"[{timestamp}] Saving stats to {stats_file}...")

    with open(stats_file, "w") as f:
        json.dump(data, f, indent=4)

    timestamp = datetime.now().strftime("%Y-%m-%d_%H:%M:%S")
    print(f"[{timestamp}] Stats saved to {stats_file}")
