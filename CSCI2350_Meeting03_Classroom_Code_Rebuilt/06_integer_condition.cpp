/*
Activity 6 — Observe integer conditions
DO NOT EDIT. Predict first, then run: make 6
FOCUS: zero versus nonzero is not the same as nonpositive versus positive.
*/
#include <iostream>

int main() {
    const int zero = 0;
    const int negative = -1;
    const int positive = 2;

    std::cout << std::boolalpha;
    std::cout << "0 as bool:        " << static_cast<bool>(zero) << '\n';
    std::cout << "-1 as bool:       " << static_cast<bool>(negative) << '\n';
    std::cout << "2 as bool:        " << static_cast<bool>(positive) << '\n';
    std::cout << "-1 is positive:   " << (negative > 0) << '\n';
    return 0;
}
