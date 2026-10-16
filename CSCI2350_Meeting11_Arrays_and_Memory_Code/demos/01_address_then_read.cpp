#include <iostream>
int main() {
    int scores[4] = {72, 95, 55, 100};

    // In this expression, scores converts to a pointer to scores[0].
    std::cout << std::boolalpha << (scores == &scores[0]) << '\n';

    int* p = scores;
    int* selected = p + 2;
    std::cout << scores[2] << ' ' << p[2] << ' ' << *(p + 2) << '\n';
    std::cout << *p << ' ' << *selected << '\n';
}
