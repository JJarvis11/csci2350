// Slide 11: access before and after the inner block ends.
// Run make error-lifetime with AddressSanitizer.
#include <iostream>
int main() {
    int* view = nullptr;
    {
        int quiz = 80;
        view = &quiz;
        std::cout << *view << std::endl;
    }
    std::cout << *view << '\n';
}
