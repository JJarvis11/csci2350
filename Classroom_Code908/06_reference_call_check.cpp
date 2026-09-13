/*
CSCI 2350 / Meeting 6 / Extension 6
Which calls can bind an int& parameter?

Before running: write your prediction and name the object being changed.
1. Run the valid call.
2. Uncomment one rejected call at a time and compile; restore its comment.
3. Explain why score + 1 does not provide the same argument as score.

Run: make 6
Or: g++ -std=c++17 -Wall -Wextra -Wpedantic 06_reference_call_check.cpp -o activity
    ./activity
Use the WSL/Ubuntu or macOS terminal. For native Windows, see README.md.
*/


#include <iostream>

void addFive(int& value) {
    value += 5;
}

int main() {
    int score = 70;
    addFive(score);          // 1
    std::cout << score << '\n';

    // COMPILE CHECKS: enable ONE at a time, then restore the comment.
    //addFive(70);          // 2
    //addFive(score + 1);   // 3
}
