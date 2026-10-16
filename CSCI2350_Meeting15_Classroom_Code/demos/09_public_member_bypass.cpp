/*
CSCI 2350 / Meeting 15 / Demo
Slides: 18

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo09
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/09_public_member_bypass.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Return to the checked member from slide 12. Only the member call runs its validation;
the direct public write still bypasses it.
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
    bool ok = a.setScore(95);
    a.score = 140;
    std::cout << std::boolalpha << ok << ' ' << a.score << '\n';
}
