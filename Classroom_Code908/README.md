# CSCI 2350 / Meeting 6: References and Parameter Effects

Start with the file named on the practice slide. Practices 1–4 keep the original sequence, Practice 5 is the new capstone task, and file 6 is a short extension. Each program is independent and uses C++17.

| Activity | File | Revised slide |
| --- | --- | --- |
| 1 | `01_value_parameter.cpp` | 10 |
| 2 | `02_reference_outputs.cpp` | 13 |
| 3 | `03_reference_assignment.cpp` | 17 |
| 4 | `04_const_reference.cpp` | 22 |
| 5 | `05_range_report.cpp` | 24 |
| 6 | `06_reference_call_check.cpp` | 8–9 (extension) |

## How to work

Read the short example, predict before running, and name the object changed by each statement. Run the starter, make the requested change, then predict and test a variation.

Practice 5 is the capstone task. Its starter intentionally has no helper declarations or definitions. Before compiling it, choose the parameter types and write both `updateRange` and `printReport` above `main`. Do not change `main`. The required tests and exact report format are in the source comments.

## Run in WSL / Ubuntu or macOS

You may keep this folder in the WSL home file system or under a Windows path such as `/mnt/c/...`. Both locations work on many computers.

Use `make list`, then `make 1` through `make 6`. `make 5` waits for four integer scores from the keyboard. Run it again for each test sequence. Use `make 5-demo` only when you want the fixed sample input `72 95 55 80`.

If `./.activity_N` reports `Permission denied`, first run `pwd`. When the path starts with `/mnt/`, the program is stored on a Windows drive. WSL must follow that drive's mount options, Windows permissions, security policy, and sometimes OneDrive behavior. These settings differ across computers. That is why the same package may run normally for one student but require extra permission work for another.

`chmod +x .activity_N` may work when the mount supports Linux permission metadata. If it does not work, or if the problem returns after recompiling, copy the folder to the WSL home file system and build it again:

```bash
mkdir -p ~/csci2350/meeting06
cp -r . ~/csci2350/meeting06/Classroom_Code
cd ~/csci2350/meeting06/Classroom_Code
make 5
```

The WSL home file system uses normal Linux execute permissions, so programs built there usually run without `chmod`. Moving the folder is a fallback for a permission error, not a requirement for every student.

You can also compile one file directly; no make is required:

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic 01_value_parameter.cpp -o activity
./activity
```

Replace the filename to run another activity. For Activity 5, enter the documented input after starting the program. On macOS, `clang++` with the same flags is also suitable.

## Native Windows PowerShell

The course's WSL terminal is the default. If you already have a native C++ compiler available in PowerShell, compile directly:

```powershell
g++ -std=c++17 -Wall -Wextra -Wpedantic 01_value_parameter.cpp -o activity.exe
.\activity.exe
```

Use the same pattern for Activity 5, then type its input. The Makefile uses a Unix shell; it is not required for these direct commands.

## Compiler experiments

Lines marked COMPILE CHECK intentionally fail when enabled. Enable one at a time and restore the comment afterward. Practice 5 also fails to compile until both required functions are written. That compile failure is part of the design task. The other working starters may emit unused-parameter warnings; those are distinct from errors.
