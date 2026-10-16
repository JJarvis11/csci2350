# CSCI 2350 / Meeting 15 / Classroom code

Open the complete folder in VS Code through WSL. Open a terminal in the folder
that contains this README and the Makefile. Each `.cpp` file is an independent
program with its own `main` and its own version of `Student`. Compile the selected
file, rather than combining the files into one program.

Every source file includes its direct `g++` command. `make` lists the shortcuts.
No program requires keyboard input.

## Two classroom practices

| Practice | Slides | File | Run |
| --- | --- | --- | --- |
| Receiver and argument | 16-17 | `practice/01_member_receiver.cpp` | `make 1` |
| Checked score update | 30-31 | `practice/02_score_updater.cpp` | `make 2` |

Both starters compile and run. Their behavior is incomplete. Each file states
the required result and which part to edit. Complete the basic task before its
optional variation. Solutions are in the instructor package.

## Worked examples and demonstrations

`demos/04_copy_and_reference.cpp` is a complete worked example for slide 8.
It has no fill-in task or prediction activity.

| Slides | File | Run |
| --- | --- | --- |
| 3-4 | `demos/01_parallel_arrays.cpp` | `make demo01` |
| 6 | `demos/02_dot_member.cpp` | `make demo02` |
| 7 | `demos/03_record_swap.cpp` | `make demo03` |
| 8 | `demos/04_copy_and_reference.cpp` | `make demo04` |
| 9 | `demos/05_checked_free_function.cpp` | `make demo05` |
| 10-11 | `demos/06_public_bypass.cpp` | `make demo06` |
| 12-13 | `demos/07_member_function.cpp` | `make demo07` |
| 14-15 | `demos/08_member_receivers.cpp` | `make demo08` |
| 18 | `demos/09_public_member_bypass.cpp` | `make demo09` |
| 19-22 | `demos/10_public_reader.cpp` | `make demo10` |
| 24 | `demos/11_public_interface.cpp` | `make demo11` |
| 25 | `demos/12_unchecked_private_setter.cpp` | `make demo12` |
| 26-29 | `demos/13_checked_class.cpp` | `make demo13` |
| 32-33 | `demos/14_copy_and_reference.cpp` | `make demo14` |
| 22-23 | `demos/15_equivalent_class.cpp` | `make demo15` |

The `Student` definitions change as the lesson introduces data members, member
functions, and access control. The early examples use `struct`. Access control
is also first shown with `struct`. The later examples use `class` after the
explicit comparison on slide 22.

## Separate compiler diagnostics

These files intentionally fail to compile. Run them individually. A compile
error is their expected original result, and the original program has no output.

| Slides | File | Run |
| --- | --- | --- |
| 20-21 | `diagnostics/01_private_read.cpp` | `make diag01` |
| 21 | `diagnostics/02_private_write.cpp` | `make diag02` |
| 23 | `diagnostics/03_private_initialization.cpp` | `make diag03` |

Use `make clean` to remove locally generated executables.
