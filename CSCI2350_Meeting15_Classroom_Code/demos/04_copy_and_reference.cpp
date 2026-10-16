/*
CSCI 2350 / Meeting 15 / Demo
Slides: 8

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo04
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/04_copy_and_reference.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

WORKED EXAMPLE: follow the explanation on slide 8. No edit or prediction task is required.
The two blocks keep the examples independent. The copy example has two Students;
the reference example has one Student with two names.
*/

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
};

int main() {
    std::cout << "Value copy:\n";
    {
        Student a{"Ava", 80};
        Student b = a;
        b.score = 95;
        std::cout << a.name << ' ' << a.score << '\n';
        std::cout << b.name << ' ' << b.score << '\n';
    }

    std::cout << "Reference:\n";
    {
        Student a{"Ava", 80};
        Student& ref = a;
        ref.score = 95;
        std::cout << a.name << ' ' << a.score << '\n';
    }
}
