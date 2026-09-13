/*
CSCI 2350 / Meeting 7 / Activity 1
What is a score, and what is an address?

Before running: write your prediction and name the object being changed.
1. Add labeled prints for quiz, &quiz, and p at the TODO.
2. Set quiz to 85 after those prints. Print p == &quiz again.
3. Predict relationships between addresses, not their hexadecimal digits.

Run: make 1
Or: g++ -std=c++17 -Wall -Wextra -Wpedantic 01_address_value.cpp -o activity
    ./activity
Use the WSL/Ubuntu or macOS terminal. For native Windows, see README.md.
*/


#include <iostream>

int main() {
    int quiz = 80;
    int* p = &quiz;
    std::cout << std::boolalpha
              << (p == &quiz) << '\n';

    // TODO: print quiz, &quiz, and p with labels.
    std::cout << "quiz: " << quiz;
    std::cout << "\n&quiz: " << &quiz;
    std::cout << "\np: " << p;
    // TODO: assign 85 to quiz; print its new value and p == &quiz.
    quiz = 85;
    std::cout << "\nquiz: " << quiz << '\n';
    std::cout << std::boolalpha << (p == &quiz);
}
