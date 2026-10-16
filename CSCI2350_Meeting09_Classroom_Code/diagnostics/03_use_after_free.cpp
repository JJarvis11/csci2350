// Slide 29: an intentional read after release.
// Run make error-use to obtain an AddressSanitizer report.
// Find the read, release and original allocation in that report.
// No numeric result is specified for the invalid read.

// Start with a fresh allocation for this demonstration.
#include <iostream>
int main() {
    int* owner = new int(80);
    int* view = owner;

    delete owner;
    owner = nullptr;

    // owner is null. view still contains the former target address.
    // The report points to the read below, then to delete and new above.


    std::cout << *view << '\n';
}
