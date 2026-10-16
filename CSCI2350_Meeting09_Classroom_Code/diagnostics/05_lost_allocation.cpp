// Slide 35: an intentional lost allocation.
// Run make error-leak to obtain a LeakSanitizer report.
// Identify which new expression created the unreleased object.

// Both allocations succeed in this teaching example.
int main() {
    int* owner = new int(80); // A
    owner = new int(95);     // B
    delete owner;
}
