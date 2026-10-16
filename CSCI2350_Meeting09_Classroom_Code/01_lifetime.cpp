// Practice 1 | slides 23-24. Run the complete baseline, then make one update.
// Baseline: 80. Add five before printing: 85. Start at 70 with the update: 75.
#include <iostream>

int* createScore(int initial) {
    int* local = new int(initial);
    return local;
}
int main() {
    int* owner = createScore(80);
    std::cout << *owner << '\n';
    delete owner;
    owner = nullptr;
    return 0;
}
