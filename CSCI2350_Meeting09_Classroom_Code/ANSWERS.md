# Meeting 09 answers

## Practice 1 / slides 23–24

| Version | Exact stdout |
| --- | --- |
| Supplied baseline | `80` |
| Add `*owner += 5;` before printing | `85` |
| Keep update, change initial value to 70 | `75` |

Restore initial 80 with the update before `make test1`. The factory's local pointer
ends on return. The dynamic int remains alive until the caller deletes it.
The following assignment resets owner to nullptr. One target, one release.

## Practice 2 / slides 30–31

The starter reads after delete: undefined behavior. `make observe2` reports
heap-use-after-free. A complete repair after the declarations is:

```cpp
std::cout << *view << '\n';
view = nullptr;
delete owner;
owner = nullptr;
```

Output: `72`. Read before release. One int is released once; both pointers finish
null. Resetting owner alone would leave view dangling.

## Practice 3 / slides 42–44

Replace `TODO_WORKFLOW` with:

```cpp
correctScore(*owner, 92);
reportScore(*view);
view = nullptr;
releaseScore(owner);
```

Output: `92`. The reference parameter updates the original int from 60 to 92.
The report receives its value through view. Clearing view releases nothing.
ReleaseScore deletes the target and resets the caller's owner through int*&.
One target is released once; both caller pointers finish null.

## Classroom demonstrations

| Command | Result and reason |
| --- | --- |
| `make error-scope` | Compile error: showQuiz cannot use main's local name quiz. No runtime result. |
| `make scope` | Output `80`. score receives a copy; caller quiz remains 80. |
| `make error-lifetime` | ASan stack-use-after-scope at the final read. The valid first read prints 80 in this run. view survives the inner block; quiz does not. No numeric result is required for the invalid read. |
| `make error-local` | Compiler warning at return &local. Returning its address cannot extend the local int's lifetime. The invalid caller is not executed. |
| `make error-use` | ASan heap-use-after-free. Read at line 19 follows release at line 12; allocation was at line 9. Owner is null, view dangles, target has ended. |
| `make error-leak` | LSan identifies allocation A at line 7. Owner was retargeted to B; delete released B. A's value stays 80 but its last saved address is lost. Owner is left dangling after B's release. |
| `make repairs` | Prints `80`, then `All repaired examples passed.` The first independent case returns a value. The second changes the same target from 80 to 95, releases it and resets owner; it prints nothing. |

Sanitizer reports identify faults in these runs; undefined behavior has no required
numeric output. Pointer resets and helper use must be explained from the code.
