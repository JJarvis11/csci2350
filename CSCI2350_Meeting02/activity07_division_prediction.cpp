#include <iostream>

int main() {
    int total = 263;

    std::cout << total / 3 << '\n';
    std::cout << double(total) / 3 << '\n';

    double storedLater = total / 3;
    std::cout << storedLater << '\n';
    return 0;
}
