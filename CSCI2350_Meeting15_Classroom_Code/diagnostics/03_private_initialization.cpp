/*
CSCI 2350 / Meeting 15 / Initialization diagnostic
Slides: 23

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make diag03
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic diagnostics/03_private_initialization.cpp -o activity
  ./activity

This diagnostic intentionally fails to compile.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

The earlier public-record initialization does not work for this private-data definition.
This type has no matching two-argument constructor.
Replace Student a{"Ava", 80}; with Student a; to observe its default score.
*/

#include <iostream>
#include <string>

class Student {
private:
    std::string name = "";
    int score = 0;
public:
    int getScore() {
        return score;
    }
};

int main() {
    Student a{"Ava", 80};
        std::cout << a.getScore() << '\n';
}
