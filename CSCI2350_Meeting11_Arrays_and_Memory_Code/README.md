# CSCI 2350 / Meeting 11: Arrays and Their Memory

This folder matches the 35-slide Meeting 11 deck.

## Start here

1. Extract the entire ZIP file.
2. Keep every file inside `CSCI2350_Meeting11_Arrays_and_Memory_Code`.
3. Open that folder in VS Code.
4. In the course WSL/Linux terminal, run `make list`.

Each `.cpp` file is a separate program with its own `main`. The Makefile uses
C++17 and enables compiler warnings.

## Lecture demonstrations

| Slides | File | Command | Expected output |
| --- | --- | --- | --- |
| 9–13 | `demos/01_address_then_read.cpp` | `make demo1` | `true`, then `55 55 55`, then `72 55` |
| 17–22 | `demos/02_function_calls.cpp` | `make demo2` | Original scores, then `77 95 55 100` |
| 34–35 | `demos/03_copied_value.cpp` | `make demo3` | `20` |

The first demo shows array-to-pointer conversion directly. In the comparison,
`scores` supplies the same first-element address as `&scores[0]`. Its declared
type remains `int[4]`.

## Practice 1: array initialization

File: `practice/01_array_initialization.cpp`  
Slides: 7–8

Predict all four values before running. The supplied partial initializer prints:

```text
0:72
1:0
2:0
3:0
```

Then change the initializer to `{}` and predict again. All four values should be
zero. Use `make 1` to run the current file.

## Practice 2: update each requested element

File: `practice/02_add_bonus.cpp`  
Slides: 23–24

Complete `addBonus`. It must add five to each of the `count` elements without
changing the pointer variable or creating another array.

Required final output:

```text
77 100 60 105 
5 
```

Use `make 2` to run the current file. Use `make test2` after completing the TODO.

## Practice 3: dynamic array workflow

File: `practice/03_dynamic_workflow.cpp`  
Slides: 32–33

Complete the four TODO steps in order:

1. create `count` zero-initialized elements;
2. fill element `i` with `70 + i`;
3. call `addBonus`, then `printScores`;
4. release the array after the final read.

Expected cases:

| Input | Output |
| --- | --- |
| `4` | `75 76 77 78` |
| `1` | `75` |
| `0` | `count must be 1..8` |

Use `make 3` for the count-four classroom case. Use `make test3` after completing
the workflow.

## Commands

- `make list`: display the available targets.
- `make all`: compile every demo and practice file without running them.
- `make demo1` through `make demo3`: run one lecture demonstration.
- `make 1`, `make 2`, or `make 3`: run the current practice file.
- `make test1`, `make test2`, or `make test3`: check one practice.
- `make check`: run all practice checks.
- `make clean`: remove generated files.

`make check` is expected to fail until Practices 2 and 3 are complete. The
unfinished Practice 3 starter is safe to run and prints a TODO message. The
package contains no completed practice solution.

## Direct compilation

If `make` is unavailable, compile one file at a time:

```text
g++ -std=c++17 -Wall -Wextra -Wpedantic practice/01_array_initialization.cpp -o practice1
./practice1
```
