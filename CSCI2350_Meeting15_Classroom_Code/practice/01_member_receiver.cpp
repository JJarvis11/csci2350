/*
CSCI 2350 / Meeting 15 / Practice 1
Slides: 16-17

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make 1
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic practice/01_member_receiver.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

TASK
  Complete only takeScoreFrom using one assignment. Keep main unchanged.
  Read the score of the argument and update the receiver's score.
  Keep both names unchanged. Remove the temporary (void)other line.
  Required output:
    Ava 95
    Bo 95

VARIATION AFTER THE BASIC TASK
  Restart with the fresh original objects in main. Reverse the call to
  b.takeScoreFrom(a). Identify the receiver and the source, then run it.
*/

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
    void takeScoreFrom(const Student& other) {
        // TODO: read the argument's score and update only the receiver's score.
        score = other.score;
    }
};

int main() {
    Student a{"Ava", 80};
    Student b{"Bo", 95};
    a.takeScoreFrom(b);
    std::cout << a.name << ' ' << a.score << '\n';
    std::cout << b.name << ' ' << b.score << '\n';
}
