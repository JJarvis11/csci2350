/*
CSCI 2350 / Meeting 6 / Activity 3
Initialization chooses the alias target. Assignment changes that object.

RUN (from the folder containing this file, in the course terminal)
  make 3
Or compile directly:
  g++ -std=c++17 -Wall -Wextra -Wpedantic 03_reference_assignment.cpp -o activity
  ./activity

EXAMPLE DATA
  No keyboard input. Use the values already in main.

BEFORE RUNNING
  After chosen = high: high ____, low ____, chosen names ____.
  After chosen = 95:   high 90, 95, low 60, chosen names high.
  Explain both rows; the second write can hide the first write.

AFTER THE CLASS DISCUSSION
  1. Run the original and check both lines.
  2. Bind chosen to high instead. Predict both lines again.
  3. Restore the binding to low. Remove chosen = 95 and run.
  4. Optional compile check: int& bad = 95; cannot bind this writable
     lvalue reference to a literal. Keep that test commented afterward.

Record: prediction, observed result, target object, and one changed test.
*/

#include <iostream>

int main() {
    // PREDICT-BEGIN
    //int& bad = 95;
    int high = 90, low = 60;
    int& chosen = high;
    chosen = low;
    std::cout << high << ' ' << low << '\n';
    //chosen = 95;
    std::cout << high << ' ' << low << '\n';
    // PREDICT-END
}
