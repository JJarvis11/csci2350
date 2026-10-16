#include <iostream>
void printScores(const int* values, int count) {
    for (int i = 0; i < count; ++i)
        std::cout << values[i] << ' ';
    std::cout << '\n';
}
void addFiveToFirst(int* values) {
    *values += 5;
}
int main() {
    int scores[4] = {72, 95, 55, 100};

    // scores converts to &scores[0]; the address and count are copied.
    printScores(scores, 4);
    addFiveToFirst(scores);
    printScores(scores, 4);
}
