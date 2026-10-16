#include <iostream>
int main() {
    int scores[4] = {};
    for (int i = 0; i < 4; ++i) {
        std::cout << i << ':' << scores[i] << '\n';
    }
}
