/*
CSCI 2350 / Meeting 15 / Demo
Slides: 14-15

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo08
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/08_member_receivers.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Choose the slide prediction before running. Identify the receiver of each member call.
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
    Student b{"Bo", 90};
    a.setScore(95);
    b.setScore(70);
    std::cout << a.score << ' ' << b.score << '\n';
}
