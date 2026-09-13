/*
Activity 1 — Comparisons and bool output
DO NOT EDIT. Predict first, then run: make 1
FOCUS: the expressions inside parentheses.
*/
#include <iostream>

int main() {
    const int score = 72;

    std::cout << "Before boolalpha: " << (score >= 60) << '\n';

    std::cout << std::boolalpha;
    std::cout << "score >= 60: " << (score >= 60) << '\n';
    std::cout << "score == 72: " << (score == 72) << '\n';
    std::cout << "score != 72: " << (score != 72) << '\n';
    return 0;
}
