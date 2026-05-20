import os
import subprocess
import sys


def main():
    if len(sys.argv) != 2:
        print("Usage: objdiff.py {source/target object path}", file=sys.stderr)
        sys.exit(1)

    script_dir = os.path.dirname(os.path.abspath(__file__))
    project_root = os.path.abspath(os.path.join(script_dir, "source"))

    wsl_work_dir = "/home/kimo/sc52-decomp"
    compiler_bin = "./ee-gcc/bin/ee-gcc"

    for path in ["source"]:
        os.makedirs(path, exist_ok=True)
        for root, _, files in os.walk(path):
            for file_name in files:
                if file_name.endswith(".o"):
                    os.remove(os.path.join(root, file_name))

    o_path = sys.argv[1]

    folder, file_name = os.path.split(o_path)
    base_name = os.path.splitext(file_name)[0]

    c_file = base_name + ".c"

    print(f"Compiling {c_file}")

    if folder == "source":
        # Using '.' instead of a hardcoded file list forces tar to copy 
        # all subdirectories (like sdk/) recursively into WSL.
        sync_cmd = \
        (
            f'wsl --cd "{wsl_work_dir}" rm -rf source && '
            f'tar -cf - -C "{project_root}" . | '
            f'wsl --cd "{wsl_work_dir}" sh -c "mkdir -p source && tar -xf - -C source"'
        )

        try:
            subprocess.run(sync_cmd, shell=True, check=True, capture_output=True, text=True)

        except subprocess.CalledProcessError as e:
            print(f"STDOUT: {e.stdout}\n"
                  f"STDERR: {e.stderr}", file=sys.stderr)
            sys.exit(1)

        ########################################################################

        # Added '-Isource' so ee-gcc can resolve nested includes like "sdk/ninja.h"
        compile_cmd = \
        (
            "wsl", "--cd", wsl_work_dir, compiler_bin,
            "-c", "-G0", "-O1", "-Isource", "-Wimplicit-function-declaration", "-Werror", f"{folder}/{c_file}", "-o", o_path
        )

        try:
            subprocess.run(compile_cmd, shell=True, check=True, capture_output=True, text=True)

        except subprocess.CalledProcessError as e:
            print(f"STDOUT: {e.stdout}\n"
                  f"STDERR: {e.stderr}", file=sys.stderr)
            sys.exit(1)

        # Pure Python replacement for wslpath to prevent Windows backslash mangling crashes
        cleaned_dir = script_dir.replace('\\', '/')
        if len(cleaned_dir) > 1 and cleaned_dir[1] == ':':
            drive = cleaned_dir[0].lower()
            win_dest_for_wsl = f"/mnt/{drive}{cleaned_dir[2:]}"
        else:
            win_dest_for_wsl = cleaned_dir

        pull_cmd = \
        [
            "wsl", "--cd", wsl_work_dir,
            "cp", o_path, f"{win_dest_for_wsl}/{o_path}"
        ]

        try:
            subprocess.run(pull_cmd, shell=True, check=True, capture_output=True, text=True)

        except subprocess.CalledProcessError as e:
            print(f"STDOUT: {e.stdout}\n"
                  f"STDERR: {e.stderr}", file=sys.stderr)
            sys.exit(1)

        print()

    elif folder == "target":
        sys.exit(1)

    else:
        sys.exit(1)

    sys.exit(0)


if __name__ == "__main__":
    if len(sys.argv) == 1:
        sys.argv.append("source/dg_math.o")

    main()