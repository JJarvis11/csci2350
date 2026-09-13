/*
Activity 4 — Repair a chained comparison
EDIT ONLY TODO 4. Then run: make 4
FOCUS: C++ does not read 0 <= score <= 100 as one range question.
*/
#include <iostream>

int main() {
    const int score = -20;

    const bool chainedResult = 0 <= score <= 100;

    // TODO 4: Write the correct C++ rule for 0 through 100.
    const bool correctResult = score >= 0 && score <= 100;

    std::cout << std::boolalpha;
    std::cout << "chained result: " << chainedResult << '\n';
    std::cout << "correct result: " << correctResult << '\n';
    return 0;
}
