// CSCI 2350 - Meeting 04, Activity 7
// REPLACE THE TODO: Use one collection loop that stops at -1 or after three accepted scores.
// Other out-of-range integers must be retried without changing total or count.
// Test first with: 90 120 80 70 150 -1 60 50
// From this folder: make 7

#include <iostream>
#include <iomanip>

int main() {
    const int students = 2;
    const int maxScores = 3;
    int score;

    std::cout << std::fixed << std::setprecision(1);

    for (int s = 1; s <= students; ++s) {
        int total = 0;
        int count = 0;

        // TODO BEGIN: replace this complete collection block.
        // The starter deliberately uses break in the wrong loop.
        for (int q = 0; q < maxScores; ++q) {
            do {
                // Provided input safety check: leave it with the read.
                if (!(std::cin >> score)) return 0;
                if (score == -1) break;
            } while (score < 0 || score > 100);

            total += score;
            ++count;
        }
        // TODO END

        std::cout << "student " << s << ": count " << count << '\n';
        std::cout << "total " << total << '\n';
        if (count == 0) {
            std::cout << "No data\n";
        } else {
            std::cout << "average " << double(total) / count << '\n';
        }
    }
}
