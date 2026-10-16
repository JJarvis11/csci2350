/*
CSCI 2350 / Meeting 15 / Demo
Slides: 7

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo03
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/03_record_swap.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Follow the worked example. Each assignment copies a whole Student value, including its name and score.
*/

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
};

int main() {
    Student roster[2] = {{"Ava", 80}, {"Bo", 95}};
    Student temp = roster[0];
    roster[0] = roster[1];
    roster[1] = temp;
    std::cout << roster[0].name << ' ' << roster[0].score << '\n';
}
