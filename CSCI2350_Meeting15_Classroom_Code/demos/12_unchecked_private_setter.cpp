/*
CSCI 2350 / Meeting 15 / Demo
Slides: 25

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo12
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/12_unchecked_private_setter.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Explain why this allowed public call still stores an invalid score.
The member is private, but the setter body does not validate the input.
*/

#include <iostream>
#include <string>

class Student {
private:
    std::string name = "";
    int score = 0;
public:
    int getScore() { return score; }
    bool setScore(int value) {
        score = value;
        return true;
    }
};

int main() {
    Student s;
        s.setScore(140);
        std::cout << s.getScore() << '\n';
}
