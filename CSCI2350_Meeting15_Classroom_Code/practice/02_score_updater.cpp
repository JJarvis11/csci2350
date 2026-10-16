/*
CSCI 2350 / Meeting 15 / Practice 2
Slides: 30-31

RUN from the folder containing this package's Makefile (WSL / Ubuntu):
  make 2
Or compile this file directly from that same folder:
  g++ -std=c++17 -Wall -Wextra -Wpedantic practice/02_score_updater.cpp -o activity
  ./activity

This is an independent, complete program.
No keyboard input is required. Each file has its own Student definition and main.
Compile one file at a time.

TASK
  Repair only setScore. Keep the supplied main unchanged while repairing it.
  A valid input in [0,100] is stored and returns true.
  An invalid input returns false and preserves the previous score.
  Each test creates a fresh Student and first sets its score to 80.
  Required output:
    -1 false 80
    0 true 0
    100 true 100
    101 false 80

VARIATION AFTER ALL SUPPLIED TESTS PASS
  Change one input in main to 80. Explain whether true means accepted or changed.
  The expected Boolean for a valid input does not depend on whether the value changes.
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
      if(value < 0 || value > 100) return false;
        score = value;
        return true;
    }
};

int main() {
    int inputs[] = {-1, 0, 100, 80};
    std::cout << std::boolalpha;
    for (int i = 0; i < 4; ++i) {
        Student s; // Fresh object for every independent test.
        s.setName("Ava");
        bool setupOk = s.setScore(80);
        if (!setupOk) {
            std::cout << inputs[i] << " setup failed\n";
            continue;
        }
        bool ok = s.setScore(inputs[i]);
        std::cout << inputs[i] << ' ' << ok << ' ' << s.getScore() << '\n';
    }
}
