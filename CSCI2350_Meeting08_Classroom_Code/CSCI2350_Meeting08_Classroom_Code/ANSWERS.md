# Meeting 08 answers

## Practice 1 / slide 12

Baseline:

```text
inside clearLocal, local p is nullptr: true
after clearLocal, selected is nullptr: false
after choose, selected still points to quiz: true
quiz = 80, exam = 95
```

ClearLocal changes only local p. Selected still points to quiz; quiz stays 80.
Choose changes local p to &exam, then writes 95 into exam. Selected is not reset
or retargeted. Moving the write before the retarget changes the last line to
`quiz = 95, exam = 90`. Selected still points to quiz.

## Practice 2 / slide 20

```text
inside clearLocal, local p is nullptr: true
clearLocal reset selected: false
resetByReference reset selected: true
resetByPointer reset selected: true
quiz remains 80
```

| Call, each starting at &quiz | selected afterward | quiz | Caller reset? |
| --- | --- | --- | --- |
| clearLocal(selected) | &quiz | 80 | no |
| resetByReference(selected) | nullptr | 80 | yes |
| resetByPointer(&selected) | nullptr | 80 | yes |

The reference p aliases selected. The outer value parameter pp stores &selected,
so *pp names selected. Changing the resetByPointer body to `pp = nullptr` changes
only the local outer pointer: its reset result becomes false, selected remains
&quiz, and quiz remains 80. The direct nullptr call is safe because the helper
checks pp before evaluating *pp.

## Practice 3 / slide 29

Baseline:

```text
A | a=80, b=80
B | p->exam=true, q->exam=true, quiz=80, exam=90
C | reads=95 95, p->exam=true, q->exam=true, quiz=80, exam=95
D | p->quiz=true, quiz=85, exam=90
E | p->quiz=true, read=80, quiz=80
F | selected->quiz=true, selected_is_null=false, quiz=90, exam=90
```

- A: a and b have the same const int type and remain 80.
- B: p and q have the same pointer-to-const type. Both retarget to exam. Neither
  score changes; neither pointer is reset to null.
- C continues B: exam changes directly to 95. Both pointers keep &exam, and both
  reads see 95. Quiz stays 80. Const restricts this access path; exam was not
  declared const.
- D starts fresh: p keeps &quiz; *p changes quiz to 85. Exam stays 90.
- E starts fresh: p keeps &quiz; quiz stays 80. The normal code only reads.
- F starts fresh: source points to exam; destination is a const local pointer
  copy pointing to quiz. Quiz receives 90, exam remains 90, selected keeps &quiz,
  and the caller pointer is not reset or retargeted.

### Compiler checks

| CHECK | Statement | Why compilation fails |
| --- | --- | --- |
| C1 | a = 85 | a is a const int |
| C2 | b = 85 | int const is the same const int type |
| C3 | *p = 95 | const int* gives read-only access through *p |
| C4 | *q = 95 | int const* gives the identical restriction through *q |
| C5 | p = &exam | p itself is a const pointer |
| C6 | p = nullptr | p itself is a const pointer |
| C7 | *p = 85 | this access to the int is read-only |
| C8 | *source = 0 | source gives read-only access to its int target |
| C9 | destination = nullptr | destination is a const local pointer parameter |

A program with any enabled CHECK has a compile error; it has no new runtime
result. The baseline outputs above apply only with all CHECK statements commented.

## Slide 27 prediction / slide 28 answer

Correct answer: **B, lines 1 and 4**. Lines 2 and 3 are compile errors.
Run each valid line separately from quiz=80, exam=90, p=&quiz, q=&quiz:

| Valid line | p afterward | q afterward | quiz | exam |
| --- | --- | --- | --- | --- |
| 1: p = &exam | &exam | &quiz | 80 | 90 |
| 4: *q = 85 | &quiz | &quiz | 85 | 90 |

No function is called and neither pointer is reset to null.

## Exit ticket / slides 31-32

1. clearLocal leaves selected=&quiz and quiz=80. The caller pointer is not reset.
2. T*& aliases selected; T** holds its address and reaches it through *pp. Both
   can reset selected while quiz stays 80. Prefer T*& here for one required C++
   caller pointer: it directly names that pointer and avoids an outer null case.
3. const int and int const are the same type; pointers to either are also the
   same type. Both permit retargeting and forbid writes through that pointer.
4. int* const makes the pointer itself const. Its stored address cannot be
   reassigned. Its non-const int target may still be changed through *p.
