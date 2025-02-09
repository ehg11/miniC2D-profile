import subprocess
import sys
import json
from typing import List, Dict
from datetime import datetime


def run_miniC2D() -> str:
    """Run miniC2D and capture its stdout."""
    result = subprocess.run(["./run_miniC2D.sh"], capture_output=True, text=True)
    print(result.stdout)
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
            data[function] = time

    return data


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

    json_stats = json.dumps(results, indent=4)
    timestamp = datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
    print(f'Saving stats to "stats-{timestamp}.json"')
    with open(f"stats-{timestamp}.json", "w") as f:
        f.write(json_stats)
