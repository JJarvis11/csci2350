/*
Activity 3 — Apply De Morgan's law
EDIT ONLY TODO 3. Then run: make 3
GOAL: insideDirect must ask the same question as insideByNot.
*/
#include <iostream>

int main() {
    const int score = 72;  // Try 72 after the first run.

    const bool tooLow = score < 0;
    const bool tooHigh = score > 100;
    const bool outside = tooLow || tooHigh;
    const bool insideByNot = !outside;

    // TODO 3: Reverse both comparisons and connect them correctly.
    const bool insideDirect = (!tooLow && !tooHigh);

    std::cout << std::boolalpha;
    std::cout << "tooLow:       " << tooLow << '\n';
    std::cout << "tooHigh:      " << tooHigh << '\n';
    std::cout << "outside:      " << outside << '\n';
    std::cout << "insideByNot:  " << insideByNot << '\n';
    std::cout << "insideDirect: " << insideDirect << '\n';
    std::cout << "rules agree:  " << (insideByNot == insideDirect) << '\n';
    return 0;
}
