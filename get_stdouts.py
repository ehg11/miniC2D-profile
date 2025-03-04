from datetime import datetime
import sys
import os

from analysis import get_cnf_paths
from config import CNF_DIR, STDOUTS_DIR
from stats import run_miniC2D


def log(*args, sep=" ", end="\n", file=sys.stdout, flush=False):
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    print(f"[{timestamp}]", *args, sep=sep, end=end, file=file, flush=flush)


def main():
    cnfs = get_cnf_paths(CNF_DIR)
    log(f"Found {len(cnfs)} CNFs: {cnfs}\n")

    for i, cnf_path in enumerate(cnfs):
        log(f"On CNF: ({i + 1}/{len(cnfs)})...")
        output, _ = run_miniC2D(cnf_path)
        output = output.strip()
        with open(f"{STDOUTS_DIR}{os.path.basename(cnf_path)}.txt", "w+") as f:
            f.write(output)

        # remove any .nnf files
        # they can get really large and exceed disk usage
        nnf_file = f"{cnf_path}.nnf"
        if os.path.exists(nnf_file):
            log(f"Removing {cnf_path}.nnf...")
            os.remove(nnf_file)


if __name__ == "__main__":
    main()
