/*
CSCI 2350 / Meeting 15 / Demo
Slides: 12-13

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo07
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/07_member_function.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Locate the complete Student definition and the separate main function.
Follow how a.setScore(95) identifies the receiver a and supplies the integer value.
*/

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
    bool setScore(int value) {
        if (value < 0 || value > 100) {
            return false;
        }
        score = value;
        return true;
    }
};

int main() {
    Student a{"Ava", 80};
        a.setScore(95);
        std::cout << a.score << '\n';
}
