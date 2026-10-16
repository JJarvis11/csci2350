#include <iostream>
void printScores(const int* values, int count) {
    for (int i = 0; i < count; ++i)
        std::cout << values[i] << ' ';
    std::cout << '\n';
}
void addBonus(int* values, int count) {
    for (int i = 0; i < count; ++i)
        values[i] += 5;
}
int main() {
    int count;
    if (!(std::cin >> count) || count < 1 || count > 8) {
        std::cout << "count must be 1..8\n";
        return 0;
    }
    // TODO: create the array
    int* values = new int[count]{};
    // TODO: fill element i with 70 + i
    for(int i = 0; i < count; i++){
        values[i] = 70 + i;
    }
    // TODO: call addBonus, then printScores
    addBonus(values, count);
    printScores(values, count);
    // TODO: release the array
    delete[] values;
    values = nullptr;
}
