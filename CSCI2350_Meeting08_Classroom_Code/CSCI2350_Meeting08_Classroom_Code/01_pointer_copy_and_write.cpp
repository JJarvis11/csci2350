#include <iomanip>
#include <iostream>

void clearLocal(int* p) {
    p = nullptr;
    std::cout << std::boolalpha
              << "inside clearLocal, local p is nullptr: "
              << (p == nullptr) << '\n';
}

// Both arguments point to live writable ints. Aliasing is allowed. This
// exercise contract also keeps the write-before-retarget experiment valid.
void choose(int* p, int* other) {
    *p = 95;    // Changes the int currently reached through p.
    p = other;  // Changes the local pointer p.

}

int main() {
    int quiz = 80;
    int exam = 90;
    int* selected = &quiz;

    clearLocal(selected);
    std::cout << std::boolalpha
              << "after clearLocal, selected is nullptr: "
              << (selected == nullptr) << '\n';

    choose(selected, &exam);
    std::cout << "after choose, selected still points to quiz: "
              << (selected == &quiz) << '\n';
    std::cout << "quiz = " << quiz << ", exam = " << exam << '\n';

    // Practice experiment:
    // Move *p = 95 before p = other inside choose.
    // Predict which score changes and whether selected ever retargets.
}
