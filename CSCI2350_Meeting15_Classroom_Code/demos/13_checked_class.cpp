/*
CSCI 2350 / Meeting 15 / Demo
Slides: 26-29

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo13
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/13_checked_class.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Use the complete class to explain the initial value, the accepted update, and the rejected update.
Choose the slide 28 prediction before running.
*/

#include <iostream>
#include <string>

class Student {
private:
    std::string name = "";
    int score = 0;
public:
    void setName(std::string value) {
        name = value;
    }
    std::string getName() { return name; }
    int getScore() { return score; }
    bool setScore(int value) {
        if (value < 0 || value > 100) {
            return false;
        }
        score = value;
        return true;
    }
};

int main() {
    Student s;
    std::cout << std::boolalpha;
    std::cout << s.getScore() << '\n';
    bool first = s.setScore(95);
    std::cout << first << ' ' << s.getScore() << '\n';
    bool second = s.setScore(140);
    std::cout << second << ' ' << s.getScore() << '\n';
}
