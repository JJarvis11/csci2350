#include <iostream>

int main() {
    int score;  // Declared, but do not read it before assigning a value.
    score = 80;
    int attempts = 1;
    const int MAX_SCORE = 100;

    score = 87;
    attempts = attempts + 1;

    std::cout << "score: " << score << '\n';
    std::cout << "attempts: " << attempts << '\n';
    std::cout << "maximum: " << MAX_SCORE << '\n';
    return 0;
}
