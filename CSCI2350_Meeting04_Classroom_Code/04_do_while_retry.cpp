// CSCI 2350 - Meeting 04, Activity 4
// REWRITE THE INPUT BLOCK: Replace the marked while input block with an equivalent do-while.
// Predict whether the accepted scores change for 90 120 80 70.
// From this folder: make 4

#include <iostream>

int main() {
    int total = 0, count = 0, score;
    for (int i = 0; i < 3; ++i) {
        // TODO BEGIN: this input block works. Rewrite it using do-while.
        do{
            if (!(std::cin >> score)) return 0;
        }while(score < 0 || score > 100);
        // TODO END. Keep the safety check with each read.
        total += score;
        ++count;
    }
    std::cout << "count: " << count << '\n';
    std::cout << "total: " << total << '\n';
}
