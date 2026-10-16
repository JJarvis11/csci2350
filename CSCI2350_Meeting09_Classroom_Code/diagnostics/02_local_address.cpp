// Slides 15-16: compile-only warning experiment. Do not run this executable.
#include <iostream>
int* badScore(int initial) {
    int local = initial;
    return &local;
}
int main() {
    int* owner = badScore(80);
    std::cout << *owner << '\n';
}
