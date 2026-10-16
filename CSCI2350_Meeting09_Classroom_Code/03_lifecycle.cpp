// Practice 3 | slides 42-44. Arrange the caller workflow.
// Supplied helpers: keep their definitions unchanged.
// Goals: same target changes 60 -> 92; report through view; one release; both pointers null.
// Use the supplied helpers. Do not hard-code output. Run make test3, then source review.
#include <iostream>

int* createScore(int initial) {
    return new int(initial);
}
void correctScore(int& score, int value) {
    score = value;
}
void reportScore(int score) {
    std::cout << score << '\n';
}
void releaseScore(int*& p) {
    delete p;
    p = nullptr;
}

int main() {
    int* owner = createScore(60);
    const int* view = owner;
    TODO_WORKFLOW; // Replace this token with the operation sequence.
    return 0;
}
