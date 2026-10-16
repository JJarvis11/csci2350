/*
CSCI 2350 / Meeting 15 / Access diagnostic
Slides: 20-21

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make diag01
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic diagnostics/01_private_read.cpp -o activity
  ./activity

This diagnostic intentionally fails to compile.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

This is Test 1 from slide 20. The compile error is the intended result.
Compare with demos/10_public_reader.cpp, which calls the public getter.
There is no runtime output from this original program.
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
        std::cout << s.score << '\n';
}
