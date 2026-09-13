/*
CSCI 2350 / Meeting 6 / Activity 4
A const reference provides read-only access to the same string.

RUN (from the folder containing this file, in the course terminal)
  make 4
Or compile directly:
  g++ -std=c++17 -Wall -Wextra -Wpedantic 04_const_reference.cpp -o activity
  ./activity

EXAMPLE DATA
  No keyboard input. Use the values already in main.

BEFORE RUNNING
  Predict the text printed through view: ____.
  How many string objects are declared in the prediction block?

AFTER THE CLASS DISCUSSION
  1. Uncomment view += "!"; and compile. Read the first useful error.
  2. Comment it again. Verify that the original builds.
  3. Replace const std::string& with const std::string (remove &).
     Predict whether the new view is a snapshot or an alias.
  4. Explain why const on view does not freeze a non-const name object.
  Knowledge point: for an existing string, binding this reference does not
  copy the string. Small inputs such as int are usually passed by value.

Record: prediction, observed result, target object, and one changed test.
*/

#include <iostream>
#include <string>

int main() {
    // PREDICT-BEGIN
    std::string name = "Jordan";
    const std::string view = name;
    name += " Kim";
    std::cout << view << '\n';
    // PREDICT-END

    // COMPILE-ERROR-EXPERIMENT: uncomment ONLY after predicting.
    //view += "!";
}
