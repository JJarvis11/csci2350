// Slides 16 and 35: two independent repairs. Run make repairs.
#include <cassert>
#include <iostream>

int scoreValue(int initial) {
    return initial;
}

int main() {
    { // Return a value when the caller needs a number.
        int score = scoreValue(80);
        std::cout << score << '\n';
        assert(score == 80);
    }
    { // Keep the original allocation and change its value.
        int* owner = new int(80);
        *owner = 95;
        assert(*owner == 95);
        delete owner;
        owner = nullptr;
        assert(owner == nullptr);
    }
    std::cout << "All repaired examples passed.\n";
}
