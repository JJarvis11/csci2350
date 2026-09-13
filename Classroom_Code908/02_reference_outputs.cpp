/*
CSCI 2350 / Meeting 6 / Activity 2
Parameter types decide which existing objects a helper can modify.

RUN (from the folder containing this file, in the course terminal)
  make 2
Or compile directly:
  g++ -std=c++17 -Wall -Wextra -Wpedantic 02_reference_outputs.cpp -o activity
  ./activity

EXAMPLE DATA
  No keyboard input. Use the values already in main.

BEFORE RUNNING
  Predict high and low: _72__ __101_.
  For hi and lo, mark either an alias or a separate object.

AFTER THE CLASS DISCUSSION
  1. Repair only the low parameter so both caller values initialize.
  2. Try first score 65.
  3. Keep lo repaired as int& lo. Remove & only from hi.
     Restore the starting values in main, use first score 72, and predict.
  Knowledge point: the reference binds at the call; call syntax stays ordinary.
  The starter may warn that lo is set but not used. This is expected: its
  local value is written, then discarded. This warning is not a compile error.

Record: prediction, observed result, target object, and one changed test.
*/

#include <iostream>

// SLIDE-FUNCTION-BEGIN
void setFirst(int s, int hi, int& lo) {
    hi = s;
    lo = s;
}
// SLIDE-FUNCTION-END

int main() {
    // PREDICT-BEGIN
    int high = -1, low = 101;
    setFirst(65, high, low);
    std::cout << high << ' ' << low << '\n';
    // PREDICT-END
    // Change only the declaration of lo in setFirst.
}
