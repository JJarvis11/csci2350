/*
CSCI 2350 / Meeting 15 / Demo
Slides: 10-11

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo06
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/06_public_bypass.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Choose the slide prediction before running. Track the saved Boolean separately from the later direct write.
*/

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
};

bool setScore(Student& target, int value) {
    if (value < 0 || value > 100) {
        return false;
    }
    target.score = value;
    return true;
}

int main() {
    Student a{"Ava", 80};
    bool ok = setScore(a, 95);
    a.score = 140;
    std::cout << std::boolalpha << ok << ' ' << a.score << '\n';
}
