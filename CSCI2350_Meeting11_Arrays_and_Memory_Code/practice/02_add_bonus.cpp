#include <iostream>
void printScores(const int* values, int count) {
    for (int i = 0; i < count; ++i)
        std::cout << values[i] << ' ';
    std::cout << '\n';
}
void addBonus(int* values, int count) {
    // TODO: add five to each of the count elements.
    for(int i = 0; i < count; i++){
        values[i] += 5;
    }
}
int main() {
    int scores[4] = {72, 95, 55, 100};
    addBonus(scores, 4);
    printScores(scores, 4);
    int one[1] = {0};
    addBonus(one, 1);
    printScores(one, 1);
}
