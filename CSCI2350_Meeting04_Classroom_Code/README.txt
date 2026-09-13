CSCI 2350 - MEETING 04: ONE SCORE RECORDER, STEP BY STEP
Revision: coherent lesson / explicit answers / optional extension, 2026-09-01.
Use these seven activities with the expanded Meeting 4 deck.

THE SAME PROGRAM GROWS THROUGH FOUR CORE REQUIREMENTS
1. Stop before processing a sentinel.
2. Put only valid scores into both total and count.
3. Obtain exactly three valid scores; separate attempts from score slots.
4. Repeat the report for each student, with fresh summary state.

OPTIONAL COMBINED CHALLENGE
5. Combine an early sentinel with validation, a maximum accepted count, and grouping.

WORKFLOW
Open the file named on the slide. Predict before running. Make the marked edit.
Run make N from this folder for just that activity. Compare the actual result
with the expected result after repair. Then use a boundary or changed input.

Activities 1-2: -1 stops input. Activity 1 assumes the other scores are valid.
Activity 2 rejects other out-of-range integers without adding or counting them.
Activities 3-6: the policy changes to three scores per student. Here -1 is an
invalid attempt, not a stop signal. Valid scores are 0 through 100, inclusive.
Activity 5 assumes all six inputs are valid to isolate reset placement.
Activity 6 combines two students, three valid scores each, and input retries.
Activity 7 changes the policy again: -1 ends the current student early, while
other invalid integers are retried. Each student accepts at most three scores.

Activity 4 is a correct-program rewrite: its starter and solution should agree.
The other starters contain deliberate logic errors. All starters compile.
Input safety checks are supplied. Leave them with the reads. They stop on EOF
or non-integer input; handling malformed input is not today's focus.

RUN
Use the course terminal with g++ and GNU make. make N compiles and runs one file.
Type integer input in that terminal. Press Ctrl+C if an accidental loop will not stop.
Manual alternative: g++ -Wall -Wextra -Wpedantic -std=c++17 FILE.cpp -o activity
Then run ./activity. Do not edit the Makefile.

Existing assignments, interfaces, grading and submission rules are unchanged.
Activities 1-6 form the 75-minute core sequence. Activity 7 is an optional combined challenge.

FILES
1. 01_stop_before_processing.cpp
   Put the first read before while; put the next read after the updates.
   Predict total and count for 80 100 -1, before and after repair.

2. 02_count_valid_scores.cpp
   Move ++count into the valid branch. Keep the read order and guard.
   Compare 90 150 60 -1 with 90 60 -1. Which exposes the bug?

3. 03_three_valid_scores.cpp
   Replace the invalid branch with a retry loop. Keep the outer for.
   For 90 120 80 70, decide which input completes each slot.

4. 04_do_while_retry.cpp
   Replace the marked while input block with an equivalent do-while.
   Predict whether the accepted scores change for 90 120 80 70.

5. 05_student_totals.cpp
   Reset total at the TODO inside the student loop, before the quiz loop.
   Use 90 80 70 60 80 100. Predict both totals before and after.

6. 06_complete_score_recorder.cpp
   Reset per student; retry invalid input; count each accepted score.
   Trace the two student groups before running. Keep the supplied loops.


7. 07_early_stop_score_recorder.cpp
   Replace the marked nested collection block with one loop that stops at -1
   or after three accepted scores. Other invalid values must not use a slot.
   Test first with 90 120 80 70 150 -1 60 50. The correct reports are
   student 1: count 3, total 240, average 80.0; student 2: No data.
