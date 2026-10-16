/*
CSCI 2350 / Meeting 15 / Demo
Slides: 32-33

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo14
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/14_copy_and_reference.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Choose the slide prediction before running. Draw the two objects and the reference.
Follow the accepted update before the rejected update.
Optional variation: change only Student& ref = b; to Student& ref = a; and trace again.
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
    Student a;
        a.setName("Ava");
        a.setScore(80);
        Student b = a;
        Student& ref = b;
        ref.setScore(95);
        bool ok = ref.setScore(101);
        std::cout << a.getScore() << ' '
                  << b.getScore() << ' '
                  << std::boolalpha << ok << '\n';
}
