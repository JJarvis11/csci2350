/*
CSCI 2350 / Meeting 7 / Practice 4 / Slides 20-22
Reproduce, diagnose, and repair a null-pointer read.

Part A: reproduce
1. Run the starter unchanged. It should print the selected score, 80.
2. Enable only p = nullptr. Keep the unguarded read and run again.
3. Record what actually happens. A warning or crash is not guaranteed because
   dereferencing a null pointer has undefined behavior.

Part B: diagnose
4. With p = nullptr still enabled, run make 4-ubsan.
5. Use the diagnostic to identify the invalid read line.

Part C: repair and verify
6. Replace the unguarded read with your own branch. Test p, not *p.
7. The repaired program must pass all three separate cases:
   score 80 with p selecting score -> print 80
   score 0 with p selecting score  -> print 0
   p == nullptr                    -> print missing

Run: make 4
Or: g++ -std=c++17 -Wall -Wextra -Wpedantic 04_null_guard.cpp -o activity
    ./activity
Use the WSL/Ubuntu or macOS terminal. For native Windows, see README.md.
*/

#include <iostream>

int main() {
    int score = 80;
    int* p = &score;

    // Enable one experiment at a time. Each run starts from these declarations.
    //*p = 0;        // A live selected score whose value is zero.
     //p = nullptr;   // No selected object.

    // INTENTIONALLY UNSAFE STARTER: keep this read while reproducing the bug.
    //std::cout << *p << '\n';

    // TODO: after the diagnostic run, replace the unguarded read with a branch
    // that prints "missing" for nullptr and otherwise prints the selected score.
    if(p == nullptr){
        std::cout << "missing";
    }else{
        std::cout << *p << '\n';  
    }  
}
