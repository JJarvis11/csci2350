/*
CSCI 2350 / Meeting 15 / Demo
Slides: 22-23

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo15
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/15_equivalent_class.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Compare with demos/10_public_reader.cpp. Only struct becomes class.
The explicit access labels give both versions the same access policy and the same output.
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
    Student s;
        std::cout << s.getScore() << '\n';
}
