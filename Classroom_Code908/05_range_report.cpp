/*
CSCI 2350 / Meeting 6 / Practice 5
Design and implement the score report helpers.

RUN (from the folder containing this file, in the course terminal)
  make 5
Fixed sample:
  make 5-demo

IMPORTANT
  This starter does not compile until you write both functions above main.
  Do not change main. Do not use global variables.

FUNCTION 1: updateRange
  - Receive one new score and the existing high and low from main.
  - Update high or low when the new score extends the range.
  - Return true when either bound changes; otherwise return false.

FUNCTION 2: printReport
  - Read the report name, high, low, and range-change count.
  - Do not change any caller object.
  - Print exactly this four-line form:
      Jordan Kim
      high 95
      low 55
      range changes 2

BEFORE CODING
  1. List every parameter needed by each function.
  2. Choose value, T&, or const T& for each parameter.
  3. Write one sentence explaining each choice.

REQUIRED TESTS
  72 95 55 80   -> high 95, low 55, changes 2
  72 72 72 72   -> high 72, low 72, changes 0
  90 80 70 60   -> high 90, low 60, changes 3
  Add one test of your own and write its expected result before running it.
*/

#include <iostream>
#include <string>

// Write both complete function definitions here, above main.
bool updateRange(int score, int& high, int& low){
    if(score > high){
      high = score;
      return true;
    }
    if(score < low){
      low = score;
      return true;
    }
    return false;
}
void printReport(const std::string& name, const int& high, const int& low, const int& rangeChanges){
    std::cout << name << '\n' << "high " << high << "\nlow " << low << "\nrange changes " << rangeChanges;
}

int main() {
    int firstScore, next1, next2, next3;
    std::cout << "Enter four integer scores: " << std::flush;
    if (!(std::cin >> firstScore >> next1 >> next2 >> next3)) {
        std::cerr << "Enter four integer scores.\n";
        return 1;
    }

    const std::string reportName = "Jordan Kim";
    int high = firstScore;
    int low = firstScore;
    int changeCount = 0;

    std::cout << std::boolalpha;
    std::cout << high << ' ' << low << " start\n";

    bool changed = updateRange(next1, high, low);
    if (changed) {
        ++changeCount;
    }
    std::cout << high << ' ' << low << ' ' << changed << '\n';

    changed = updateRange(next2, high, low);
    if (changed) {
        ++changeCount;
    }
    std::cout << high << ' ' << low << ' ' << changed << '\n';

    changed = updateRange(next3, high, low);
    if (changed) {
        ++changeCount;
    }
    std::cout << high << ' ' << low << ' ' << changed << '\n';

    printReport(reportName, high, low, changeCount);
}
