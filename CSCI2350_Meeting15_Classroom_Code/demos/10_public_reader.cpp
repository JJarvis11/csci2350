/*
CSCI 2350 / Meeting 15 / Demo
Slides: 19-22

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo10
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/10_public_reader.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

This is Test 2 from slide 20. Test 1 is diagnostics/01_private_read.cpp.
Compile each as a separate program. Use the complete struct definition to explain each access.
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
        std::cout << s.getScore() << '\n';
}
