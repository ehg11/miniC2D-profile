import subprocess
import sys
import json
from typing import List, Dict


def run_miniC2D() -> str:
    """Run miniC2D and capture its stdout."""
    result = subprocess.run(["./run_miniC2D.sh"], capture_output=True, text=True)
    return result.stdout


def parse_stdout(stdout: str) -> Dict:
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
            if function == "total_time":
                data["sat_total_time"] = time
            else:
                data[f"sat_{function}"] = time

    return data


def average_percent_sat_time(results: List[Dict]) -> Dict:
    """Calculate the average percentage of time spent in SAT functions."""
    total_sat_time = 0
    total_compile_time = 0
    total_time = 0
    for result in results:
        total_sat_time += result["sat_total_time"]
        total_compile_time += result["compile_time"]
        total_time += result["total_time"]

    sat_percent_time = {}
    sat_percent_time["relative_to_compile"] = total_sat_time / total_compile_time
    sat_percent_time["relative_to_total"] = total_sat_time / total_time
    return sat_percent_time


def average_percent_sat_function_time(results: List[Dict]) -> Dict:
    """Calculate the average percentage of time spent in each SAT function."""
    sat_function_percent_time = {}
    sat_function_percent_time["relative_to_compile"] = {}
    sat_function_percent_time["relative_to_total"] = {}

    agg_sat_function_time = {}

    total_compile_time = 0
    total_time = 0
    for result in results:
        for function, time in result.items():
            if function.startswith("sat_") and function != "sat_total_time":
                agg_sat_function_time[function] = (
                    agg_sat_function_time.get(function, 0) + time
                )

        total_compile_time += result["compile_time"]
        total_time += result["total_time"]

    for function, time in agg_sat_function_time.items():
        sat_function_percent_time["relative_to_compile"][function] = (
            time / total_compile_time
        )
        sat_function_percent_time["relative_to_total"][function] = time / total_time

    return sat_function_percent_time


def main(iterations: int) -> List[Dict]:
    results = []
    for i in range(iterations):
        print("Running C2D Iteration:", i + 1)
        stdout = run_miniC2D()
        data = parse_stdout(stdout)
        results.append(data)
    return results


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python stats.py <iterations>")
        sys.exit(1)

    iterations = int(sys.argv[1])
    results = main(iterations)

    total_stats = average_percent_sat_time(results)
    function_stats = average_percent_sat_function_time(results)

    all_stats = {"total_stats": total_stats, "function_stats": function_stats}

    json_stats = json.dumps(all_stats, indent=4)
    print('Saving stats to "stat.json"')
    with open("stat.json", "w") as f:
        f.write(json_stats)
