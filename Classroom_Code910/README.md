# CSCI 2350 / Meeting 7: Pointer Fundamentals

Open the **Classroom_Code** folder. Each program is independent and uses C++17.
Complete Practices 1–5 in order. The pointer-copy example now belongs to the
Meeting 8 opening and is not included in this package.

| Practice | File | Slide |
| --- | --- | --- |
| 1: values and addresses | `01_address_value.cpp` | 9 |
| 2: saved copy and pointer write | `02_dereference_write.cpp` | 14 |
| 3: selection and operation order | `03_retarget_pointer.cpp` | 18 |
| 4: reproduce, diagnose, and guard a null access | `04_null_guard.cpp` | 20–22 |
| 5: persistent audio mixer | `05_pointer_state_table.cpp` | 26–30 |

## Predict, edit, and check

Before every run, record the pointer target and the integer values that should
change. After the run, find the first output row that differs from the prediction.
The unfinished starters compile, but their output is not the completed answer.

## Run in WSL, Ubuntu, or macOS

```bash
make list
make 1
```

Use `make 2` through `make 5` for the remaining activities. You can also compile
one file directly:

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic 01_address_value.cpp -o activity
./activity
```

Replace the filename for another practice. On macOS, `clang++` accepts the same
warning flags.

## Practice 4: diagnostic experiment

Run the unchanged starter first. It should read the selected score and print 80.
Then enable only `p = nullptr;` and keep the unguarded read. Run `make 4` and
record the actual result. Null-pointer dereference has undefined behavior, so the
C++ language does not guarantee a compiler error or a crash.

With the null assignment still enabled, run:

```bash
make 4-ubsan
```

The sanitizer should identify the invalid read line. GCC 13.3 reports:

```text
runtime error: load of null pointer of type 'int'
```

Next, replace the unguarded read with your own branch. Pass these three separate
tests:

| Pointer state | Score value | Required output |
| --- | ---: | --- |
| `p == &score` | 80 | `80` |
| `p == &score` | 0 | `0` |
| `p == nullptr` | 80 | `missing` |

Checking `*p != 0` is incorrect. It attempts an access before proving that a
target exists, and it rejects the valid score value 0.

## Practice 5: audio mixer protocol

The program starts with `musicVolume = 80`, `micVolume = 90`, and
`active = nullptr`. It reads commands until end of input:

| Command | Behavior |
| --- | --- |
| `m` | Activate the music channel. Do not change a volume. |
| `v` | Activate the microphone channel. Do not change a volume. |
| `n` | Clear the active channel. Do not change a volume. |
| `s value` | Set the active volume through the pointer, or report and skip. |

`make 5` supplies the required trace:

```text
m
s 85
s 0
v
s 95
n
s 999
```

The final state must be music volume 0, microphone volume 95, and no active
channel. Then rerun
`./.activity_5` and test these additional cases:

```text
s 77
```

```text
m
s 85
n
v
s 95
```

```text
m
s 85
s 70
```

The first case must skip the update. The second must allow a new active channel
after clearing. The third must show that setting a volume does not change the
active channel.

## Native Windows PowerShell

With an existing native C++ compiler, compile directly:

```powershell
g++ -std=c++17 -Wall -Wextra -Wpedantic 01_address_value.cpp -o activity.exe
.\activity.exe
```

The Makefile uses a Unix shell. Use the direct command pattern in native
PowerShell. GCC and Clang sanitizer availability depends on the installed toolchain.
