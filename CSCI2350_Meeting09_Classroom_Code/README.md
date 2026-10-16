# CSCI 2350 / Meeting 09: Dynamic Memory and Cleanup

Start with the file named on the practice slide. Use `make list`, then the
corresponding command below in the course WSL/Linux terminal.

| Practice | File | Slides | Run |
| --- | --- | --- | --- |
| 1 | `01_lifetime.cpp` | 23–24 | `make 1` |
| 2 | `02_repair_read.cpp` | 30–31 | `make observe2`, repair, `make 2` |
| 3 | `03_lifecycle.cpp` | 42–44 | Complete `TODO_WORKFLOW`, `make 3` |

1. Predict and run the complete Practice 1 baseline. Add five before printing,
   then try starting at 70. Restore initial 80 with the update for `make test1`.
2. Practice 2 intentionally reads after delete. Run `make observe2`, find the
   invalid read, repair its order, and use `make test2`. Finish with both pointers null.
3. Use the supplied helpers in Practice 3 to change 60 to 92, report through view,
   release once, and leave both pointers null. Then run `make test3`.

## Classroom demonstrations

| Slides | File | Command |
| --- | --- | --- |
| 10 | `diagnostics/06_scope_name.cpp` | `make error-scope` |
| 10 | `examples/04_scope.cpp` | `make scope` |
| 11 | `diagnostics/07_block_lifetime.cpp` | `make error-lifetime` |
| 15–16 | `diagnostics/02_local_address.cpp` | `make error-local` (compile only) |
| 29 | `diagnostics/03_use_after_free.cpp` | `make error-use` |
| 35 | `diagnostics/05_lost_allocation.cpp` | `make error-leak` |
| 16, 35 | `examples/03_repaired_errors.cpp` | `make repairs` |

The Makefile compiles C++ directly with C++17 and warnings. Memory-error
demonstrations and `test1`, `test2`, `test3` use GCC AddressSanitizer in WSL/Linux.
The tests compare final stdout (85, 72, 92) and stop on detected memory errors.
Explain the release order, pointer resets and required helper use from the source.
The tests do not count allocations or inspect local pointer variables.

`observe2` expects the original fault; after repair, use `make 2` or `make test2`.
Only Practice 3 has an incomplete TODO. A failed build does not run an older binary.
Diagnostics appear in the terminal and `bin/*.log`. Undefined behavior has no
required numeric output. `error-local` never executes the invalid caller.

Read `ANSWERS.md` after attempting the activity. `make clean` removes generated files.

The slide 11 lifetime example keeps view alive outside the inner block. Its first read
prints 80 in the instrumented run; the final read is UB and produces the expected
stack-use-after-scope report. The original quiz object ended at the inner closing brace.
