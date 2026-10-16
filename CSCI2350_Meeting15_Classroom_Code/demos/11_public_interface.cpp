/*
CSCI 2350 / Meeting 15 / Demo
Slides: 24

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo11
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/11_public_interface.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Locate the complete class and the separate main. Follow setName, then the two getters.
The get/set names describe roles; they are not special C++ keywords.
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
    std::string getName() {
        return name;
    }
    int getScore() { return score; }
};

int main() {
    Student s;
        s.setName("Ava");
        std::cout << s.getName() << ' ' << s.getScore() << '\n';
}
