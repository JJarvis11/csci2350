// CSCI 2350 - Meeting 04, Activity 2
// MOVE ONE UPDATE: Move ++count into the valid branch. Keep the read order and guard.
// Compare 90 150 60 -1 with 90 60 -1. Which exposes the bug?
// From this folder: make 2

#include <iostream>
#include <iomanip>

int main() {
    int score, total = 0, count = 0;
    // Provided input checks: leave them attached to the reads.
    if (!(std::cin >> score)) return 0;
    while (score != -1) {
        // TODO BEGIN: total and count must use the same valid scores.
        if (score >= 0 && score <= 100) {
            total += score;
            ++count;
        }
        // TODO END
        if (!(std::cin >> score)) return 0;
    }
    std::cout << "total: " << total << '\n';
    std::cout << "count: " << count << '\n';
    // The guard and conversion are already correct. Do not change them.
    if (count == 0) {
        std::cout << "No data\n";
    } else {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "average: " << double(total) / count << '\n';
    }
}
