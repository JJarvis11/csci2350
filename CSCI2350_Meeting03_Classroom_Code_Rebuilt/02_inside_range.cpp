/*
Activity 2 — Build an inside-range rule
EDIT ONLY TODO 2. Then run: make 2
After the first run, change only score to test a boundary.
*/
#include <iostream>

int main() {
    const int score = 72;  // Try -1, 0, 100, and 101 later.

    const bool atLeastZero = score >= 0;
    const bool atMost100 = score <= 100;

    // ==================== TODO 2: EDIT THIS LINE ====================
    const bool insideRange = atLeastZero && atMost100;
    // ==================== STOP EDITING HERE =========================

    std::cout << std::boolalpha;
    std::cout << "atLeastZero: " << atLeastZero << '\n';
    std::cout << "atMost100:   " << atMost100 << '\n';
    std::cout << "insideRange: " << insideRange << '\n';
    return 0;
}
