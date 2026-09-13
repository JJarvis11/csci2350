// CSCI 2350 - Meeting 04, Activity 6
// COMPLETE THREE TODOS: Reset per student; retry invalid input; count each accepted score.
// Trace the two student groups before running. Keep the supplied loops.
// From this folder: make 6

#include <iostream>
#include <iomanip>

int main() {
    const int students = 2;
    const int quizzes = 3;
    int total = 0, count = 0, score;
    std::cout << std::fixed << std::setprecision(1);

    for (int s = 1; s <= students; ++s) {
        // TODO 1: start this student's total and count at zero.
        total = 0;
        count = 0;
        for (int q = 0; q < quizzes; ++q) {
            do {
                // Provided input safety check: leave it with the read.
                if (!(std::cin >> score)) return 0;
            } while (score < 0 || score > 100); // TODO 2: retry while score is outside 0..100.

            total += score;
            // TODO 3: count this one accepted score.
            ++count;
        }

        // The report runs after this student's score loop.
        std::cout << "student " << s << ": count " << count << '\n';
        std::cout << "total " << total << '\n';
        if (count == 0) {
            std::cout << "No data\n";
        } else {
            std::cout << "average " << double(total) / count << '\n';
        }
    }
}
