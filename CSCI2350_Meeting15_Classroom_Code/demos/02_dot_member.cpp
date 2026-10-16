/*
CSCI 2350 / Meeting 15 / Demo
Slides: 6

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo02
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/02_dot_member.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Read a.score as the score member of a. Follow the shown assignment and the two object records.
*/

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
};

int main() {
    Student a{"Ava", 80};
    Student b{"Bo", 95};
    a.score = 90;
    std::cout << a.name << ' ' << a.score << '\n';
    std::cout << b.name << ' ' << b.score << '\n';
}
