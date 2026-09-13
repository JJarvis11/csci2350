// CSCI 2350 - Meeting 04, Activity 5
// ADD ONE RESET: Reset total at the TODO inside the student loop, before the quiz loop.
// Use 90 80 70 60 80 100. Predict both totals before and after.
// From this folder: make 5

#include <iostream>

int main() {
    int total = 0, score;
    for (int s = 1; s <= 2; ++s) {
        // TODO: reset total once for this student, before reading quizzes.
        total = 0;
        for (int q = 1; q <= 3; ++q) {
            // Provided input safety check.
            if (!(std::cin >> score)) return 0;
            total += score;
        }
        std::cout << "student " << s << ": " << total << '\n';
    }
}
