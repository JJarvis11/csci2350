/*
CSCI 2350 / Meeting 15 / Demo
Slides: 9

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo05
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/05_checked_free_function.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Follow the accepted path, then the rejected path. The ordinary function receives its Student by reference.
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
    bool first = setScore(a, 95);
    std::cout << std::boolalpha << first << ' ' << a.score << '\n';
    bool second = setScore(a, 140);
    std::cout << second << ' ' << a.score << '\n';
}
