/*
CSCI 2350 / Meeting 15 / Demo
Slides: 3-4

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make demo01
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic demos/01_parallel_arrays.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

Before running, choose the slide prediction. Then locate which array each assignment changes.
*/

#include <iostream>
#include <string>



int main() {
    std::string names[2] = {"Ava", "Bo"};
    int scores[2] = {80, 95};
    int temp = scores[0];
    scores[0] = scores[1];
    scores[1] = temp;
    std::cout << names[0] << ' ' << scores[0] << '\n';
}
