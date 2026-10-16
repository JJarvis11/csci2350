// Practice 2 | slides 30-31. Diagnose, edit, then rerun.
// Initial student file deliberately reads after delete. Use make observe2 to observe it.
// Repair goal: output 72 while alive; one release; owner and view finish null.
#include <iostream>
int main() {
    int* owner = new int(72);
    int* view = owner;
    delete owner;
    std::cout << *view << '\n'; // Deliberate use after free; repair this order.
    owner = nullptr;
    view = nullptr;
    return 0;
}
