// CSCI 2350 - Meeting 04, Activity 1
// REORDER THE TODO: Put the first read before while; put the next read after the updates.
// Predict total and count for 80 100 -1, before and after repair.
// From this folder: make 1

#include <iostream>

int main() {
    int score = 0, total = 0, count = 0;
    // TODO BEGIN: reorder the reads and updates in this block.
    std::cin >> score;
    while (score != -1) {
        total += score;
        ++count;
        if (!(std::cin >> score)) return 0;
    }
    // TODO END. Keep each safety check attached to its read.
    std::cout << "total: " << total << '\n';
    std::cout << "count: " << count << '\n';
}
