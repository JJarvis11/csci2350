/*
CSCI 2350 / Meeting 7 / Activity 2
Does a saved value follow a later pointer write?

Before running: write your prediction and name the object being changed.
1. Complete TODO 1 so before receives the current value reached through p.
2. Complete TODO 2 so the selected score becomes 75 through p.
3. Predict before, quiz, exam, and the target check before running.
4. Explain why before stays 80 after quiz changes to 75.

Run: make 2
Or: g++ -std=c++17 -Wall -Wextra -Wpedantic 02_dereference_write.cpp -o activity
    ./activity
Use the WSL/Ubuntu or macOS terminal. For native Windows, see README.md.
*/


#include <iostream>

int main() {
    int quiz = 80, exam = 90;
    int* p = &quiz;

    int before = 0;  // Safe placeholder until TODO 1 is completed.
    // TODO 1: save the current selected value in before.
    before = *p;
    // TODO 2: write 75 into the selected object through p.
    *p = 75;

    std::cout << "before: " << before << '\n'
              << "quiz: " << quiz << '\n'
              << "exam: " << exam << '\n';
    std::cout << "still selects quiz: " << std::boolalpha
              << (p == &quiz) << '\n';
}
