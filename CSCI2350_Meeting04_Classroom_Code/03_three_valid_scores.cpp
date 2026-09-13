// CSCI 2350 - Meeting 04, Activity 3
// REPLACE THE TODO: Replace the invalid branch with a retry loop. Keep the outer for.
// For 90 120 80 70, decide which input completes each slot.
// From this folder: make 3

#include <iostream>

int main() {
    int total = 0, count = 0, score;
    for (int i = 0; i < 3; ++i) {
        // Provided safety check: leave it attached to the read.
        if (!(std::cin >> score)) return 0;
        // TODO BEGIN: retry inside this slot until score is valid.
        if (score < 0 || score > 100){
            while(score < 0 || score> 100){
                std::cin >> score;
            }
        };

        // TODO END. Leave the outer loop and both updates alone.
        total += score;
        ++count;
    }
    std::cout << "count: " << count << '\n';
    std::cout << "total: " << total << '\n';
}
