# CSCI 2350 / Meeting 08: Pointer Parameters and Reassignment

This package matches the 32-slide **Const Clarified** revision. Each program is
complete. Predict the baseline before making the requested change.

| Program | Concept slides | Practice slide | Run |
| --- | --- | --- | --- |
| `01_pointer_copy_and_write.cpp` | 3-11 | 12 | `make 1` |
| `02_pointer_reassignment.cpp` | 13-19 | 20 | `make 2` |
| `03_const_access.cpp` | 21-28 | 29 | `make 3` |

Use the course WSL/Linux terminal. `make all` builds all three programs with
`-std=c++17 -Wall -Wextra -Wpedantic`. On a system without make, compile a file
directly with these flags and your C++ compiler.

## Practice 1

Trace local p, caller selected, quiz, and exam. Run the baseline. Move `*p = 95`
before `p = other` inside choose, predict and run, then restore the original order.

## Practice 2

Every call starts with selected pointing to quiz. Compare clearLocal,
resetByReference, and resetByPointer. Temporarily change `*pp = nullptr` to
`pp = nullptr`, predict and run, then restore it. Resetting a pointer does not
change or destroy quiz.

## Practice 3: const

| Section | Slide | Question |
| --- | --- | --- |
| A | 21 | Why are const int and int const the same type? |
| B | 22 | Can both const int* and int const* retarget? |
| C | 23 | Can exam change directly while p and q give read-only access? |
| D | 24 | What can an int* const pointer change? |
| E | 25 | What happens when both type layers are const? |
| F | 26 | Which const protects the helper's local pointer copy? |

Each block starts fresh except C, which explicitly continues B.
Run the baseline, then test CHECK C3, C5, C8, and C9 one at a time. Remove only
the leading comment marker on that statement, compile, explain the error, and
restore the comment before the next check. C1, C2, C4, C6, and C7 are extra review.
Every CHECK should fail to compile. A failed build does not create a new working
program. Restore the comment and rebuild successfully before running again.

`const int*` and `int const*` give read-only access through the pointer; they do
not make an originally writable int globally const. `int* const` fixes the
pointer's stored address while permitting writes to its non-const int target.
As a value parameter, `int* const` protects the helper's local copy only.

The helper copyScore requires valid live targets; it has no null-handling branch.
All calls in this package meet their contracts. See `ANSWERS.md` for exact output,
pointer targets, score changes, and explanations of each compiler check.
