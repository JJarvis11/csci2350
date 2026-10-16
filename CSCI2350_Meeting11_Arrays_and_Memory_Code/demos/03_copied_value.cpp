#include <iostream>
int main() {
    int* scores = new int[3]{10, 20, 30};
    int* selected = scores + 1;
    int saved = *selected;
    delete[] scores;
    scores = nullptr;
    selected = nullptr;
    std::cout << saved << '\n';
}
