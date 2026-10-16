/*
CSCI 2350 / Meeting 15 / Access diagnostic
Slides: 21

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make diag02
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic diagnostics/02_private_write.cpp -o activity
  ./activity

This diagnostic intentionally fails to compile.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

This separate diagnostic checks a direct write from main.
Private access restricts direct reading and direct writing from this caller.
*/

#include <iostream>
#include <string>

struct Student {
private:
    std::string name = "";
    int score = 0;
public:
    int getScore() {
        return score;
    }
};

int main() {
    Student s;
        s.score = 95;
        std::cout << s.getScore() << '\n';
}
