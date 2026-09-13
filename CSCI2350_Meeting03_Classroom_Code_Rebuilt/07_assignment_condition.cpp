/*
Activity 7 — Observe assignment in a condition
DO NOT EDIT. Predict first, then run: make 7
FOCUS: one equal sign assigns; two equal signs compare.
*/
#include <iostream>

int main() {
    int score = 0;
    bool branchRan = false;

    // FOCUS HERE: this line intentionally uses assignment.
    if (score = 60) {
        branchRan = true;
    }

    std::cout << std::boolalpha;
    std::cout << "score after condition: " << score << '\n';
    std::cout << "branch ran:            " << branchRan << '\n';
    return 0;
}
