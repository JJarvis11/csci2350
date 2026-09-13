/*
Activity 5 — Guard division with short-circuit AND
EDIT ONLY TODO 5. Then run: make 5
IMPORTANT: put the safe check on the LEFT of &&.
*/
#include <iostream>

int main() {
    const int earned = 70;
    const int possible = 100;  // Change to 100 after the first run.

    const bool possibleIsNonzero = possible != 0;

    // TODO 5: Guard the percentage calculation with possibleIsNonzero.
    const bool passed = possibleIsNonzero && (100 * earned / possible)>= 60;

    std::cout << std::boolalpha;
    std::cout << "earned / possible:    " << earned << " / " << possible << '\n';
    std::cout << "possibleIsNonzero: " << possibleIsNonzero << '\n';
    std::cout << "passed:            " << passed << '\n';
    return 0;
}
