/*
CSCI 2350 / Meeting 6 / Activity 1
Compare a separate value parameter with a reference to the caller object.

RUN (from the folder containing this file, in the course terminal)
  make 1
Or compile directly:
  g++ -std=c++17 -Wall -Wextra -Wpedantic 01_value_parameter.cpp -o activity
  ./activity

EXAMPLE DATA
  No keyboard input. Use the values already in main.

BEFORE RUNNING
  Predict the printed score: 80.
  Draw the caller object and the value-parameter object.

AFTER THE CLASS DISCUSSION
  1. Run the original and explain the unchanged caller score.
  2. Change only int score in the parameter list to int& score.
     Keep the void return type and the call addTen(score). Predict, then run.
  3. Start with 70. Predict the caller value after this reference call.
  4. Compare with the Meeting 5 approach: restore the value parameter,
     change void to int, add return score, and use score = addTen(score).
     Remove only the caller assignment and explain the difference.

  KNOWLEDGE POINTS
    Local reference syntax: T& alias = object; T stands for the object type.
    Example: double average = 82.5; double& result = average;
    A reference parameter binds to its argument when the function is called.
    A write through that parameter reaches the same caller object.
    A value parameter is a separate object. Returning its value is another
    valid design; the caller must store the result to update its own score.

Record: prediction, observed result, target object, and one changed test.
*/

#include <iostream>

// SLIDE-FUNCTION-BEGIN
void addTen(int& score) {
    score += 10;
}
// SLIDE-FUNCTION-END

int main() {
    // PREDICT-BEGIN
    int score = 70;
    addTen(score);
    std::cout << score << '\n';
    // PREDICT-END
}
