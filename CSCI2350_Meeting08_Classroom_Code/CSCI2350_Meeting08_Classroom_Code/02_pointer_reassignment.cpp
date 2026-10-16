#include <iomanip>
#include <iostream>

void clearLocal(int* p) {
    p = nullptr;
    std::cout << std::boolalpha
              << "inside clearLocal, local p is nullptr: "
              << (p == nullptr) << '\n';
}

void resetByReference(int*& p) {
    p = nullptr;
}

void resetByPointer(int** pp) {
    if (pp != nullptr) {
        *pp = nullptr;
    }
}

int main() {
    int quiz = 80;
    int* selected = &quiz;

    clearLocal(selected);
    std::cout << std::boolalpha
              << "clearLocal reset selected: "
              << (selected == nullptr) << '\n';

    selected = &quiz;
    resetByReference(selected);
    std::cout << "resetByReference reset selected: "
              << (selected == nullptr) << '\n';

    selected = &quiz;
    resetByPointer(&selected);
    std::cout << "resetByPointer reset selected: "
              << (selected == nullptr) << '\n';

    resetByPointer(nullptr);  // Safe because resetByPointer checks pp.
    std::cout << "quiz remains " << quiz << '\n';

    // Practice experiment:
    // Temporarily replace *pp = nullptr with pp = nullptr.
    // Predict why selected then remains &quiz, run the program, and restore it.
}
