# CSCI 2350 Meeting 02 Classroom Code

This package matches the revised Meeting 02 slides and study guide.

## Open the exact folder

```bash
cd ~/csci2350/CSCI2350_Meeting02_Classroom_Code
pwd
ls -a
code .
make list
```

The folder contains eight small activities. Each activity has one purpose.

| Activity | File | Command | Purpose |
|---:|---|---|---|
| 1 | `activity01_hello_workflow.cpp` | manual `g++`, then `make 1` | See what Make repeats for us |
| 2 | `activity02_program_anatomy.cpp` | `make 2` | Identify the parts of a program |
| 3 | `activity03_output_prediction.cpp` | `make 3` | Predict exact output |
| 4 | `activity04_variable_state.cpp` | `make 4` | Follow declaration, initialization, assignment, and `const` |
| 5 | `activity05_typed_input.cpp` | `make 5`, then enter the shown tokens | Trace typed input |
| 6 | `activity06_data_path_debug.cpp` | `make 6` | Repair an input arrow and an output value |
| 7 | `activity07_division_prediction.cpp` | `make 7` | Predict division from operand types |
| 8 | `activity08_course_snapshot.cpp` | `make 8` | Repair one integrated Course Snapshot |

## Important behavior

- Activity 01 is compiled manually once so you can see what `g++` creates. After that, `make 1` repeats the compile-and-run recipe.
- Activity 05 asks you to enter `Ada 00123456 90 88 85` so the class can compare the same evidence while still practicing interactive input.
- Activity 06 has two different bugs. First repair the input operator so the program compiles. Then run it and repair the incorrect output value.
- Activity 08 contains three TODOs. `make 8` runs two tests. The second test exposes integer-division fraction loss.

## The workflow after Activity 01

For Activities 2–8, use the same class routine:

1. Predict one detail.
2. Edit and save the source file.
3. Run `make N` for that activity number.
4. Compare the evidence with your prediction.
5. Explain what happened.

`make` is not the compiler. It reads the recipe in `Makefile`, runs `g++` when the source needs rebuilding, and then runs the activity command.

Use `make clean` to remove generated executables.
