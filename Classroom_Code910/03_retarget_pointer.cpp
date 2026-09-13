/*
CSCI 2350 / Meeting 7 / Activity 3
Which target is selected when the write happens?

Before running: write your prediction and name the object being changed.
1. Predict both scores and the final target of p.
2. Move *p = 95 before p = &exam. Predict and run again.
3. Restore the original. Then extend the block so the intermediate states are:
   a. after the first write: quiz = 85, exam = 90, p selects quiz;
   b. after the switch: quiz = 85, exam = 90, p selects exam;
   c. after the second write: quiz = 85, exam = 95, p selects exam.
4. Explain the target at each write and the final target separately.

Run: make 3
Or: g++ -std=c++17 -Wall -Wextra -Wpedantic 03_retarget_pointer.cpp -o activity
    ./activity
Use the WSL/Ubuntu or macOS terminal. For native Windows, see README.md.
*/


#include <iostream>

int main() {
    int quiz = 80, exam = 90;
    int* p = &quiz;

    // First run this two-statement sequence. Then complete the variations above.
    *p = 85;
    p = &exam;
    *p = 95;
    std::cout << quiz << ' ' << exam << '\n';
    std::cout << "finally selects exam: " << std::boolalpha
              << (p == &exam) << '\n';
}
