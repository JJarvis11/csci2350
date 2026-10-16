#include <iostream>

// Section F / slide 26. Requires a live readable source int and a live
// writable destination int. The same target is allowed. No address is retained.
// These are value parameters: destination is a const LOCAL pointer copy.
void copyScore(const int* source, int* const destination) {
    *destination = *source;
    // *source = 0;             // CHECK C8: write through a pointer to const.
    // destination = nullptr;   // CHECK C9: assign the const local pointer.
}

int main() {
    std::cout << std::boolalpha;

    // A / slide 21: same int type, different objects.
    {
        const int a = 80;
        int const b = 80;
        // a = 85;  // CHECK C1: assign a const int.
        // b = 85;  // CHECK C2: assign a const int with the other spelling.
        std::cout << "A | a=" << a << ", b=" << b << '\n';
    }

    // B / slide 22: independent example, with two equivalent pointer types.
    {
        int quiz = 80, exam = 90;
        const int* p = &quiz;
        int const* q = &quiz;
        p = &exam;
        q = &exam;
        //*p = 95;  // CHECK C3: read-only access through const int*.
        // *q = 95;  // CHECK C4: identical restriction through int const*.
        std::cout << "B | p->exam=" << (p == &exam)
                  << ", q->exam=" << (q == &exam)
                  << ", quiz=" << quiz << ", exam=" << exam << '\n';

        // C / slide 23: CONTINUE B. The target exam itself is not const.
        exam = 95;
        std::cout << "C | reads=" << *p << ' ' << *q
                  << ", p->exam=" << (p == &exam)
                  << ", q->exam=" << (q == &exam)
                  << ", quiz=" << quiz << ", exam=" << exam << '\n';
    }

    // D / slide 24: start again. The pointer's stored address is fixed.
    {
        int quiz = 80, exam = 90;
        int* const p = &quiz;
        *p = 85;
        // p = &exam;  // CHECK C5: assign a const pointer.
        std::cout << "D | p->quiz=" << (p == &quiz)
                  << ", quiz=" << quiz << ", exam=" << exam << '\n';
    }

    // E / slide 25: independent example, both restrictions on this access.
    {
        int quiz = 80;
        int const* const p = &quiz;  // Same as const int* const.
        // p = nullptr;  // CHECK C6: the pointer is const.
        // *p = 85;      // CHECK C7: the int is read-only THROUGH p.
        std::cout << "E | p->quiz=" << (p == &quiz)
                  << ", read=" << *p << ", quiz=" << quiz << '\n';
    }

    // F / slide 26: independent helper call with the full definition above.
    {
        int quiz = 80, exam = 90;
        int* selected = &quiz;
        copyScore(&exam, selected);
        std::cout << "F | selected->quiz=" << (selected == &quiz)
                  << ", selected_is_null=" << (selected == nullptr)
                  << ", quiz=" << quiz << ", exam=" << exam << '\n';
        // selected itself is still an ordinary writable caller pointer.
    }
}

// Practice / slide 29:
// 1. Predict each section, then run the original program.
// 2. Test CHECK C3, C5, C8, and C9 one at a time. Restore each comment.
// 3. Name the assigned object: pointer variable or int through the pointer.
// 4. Use C1, C2, C4, C6, and C7 for additional review.
// Every CHECK is an intentional compile error when enabled. Do not run a stale
// executable after a failed build; restore the comment and rebuild successfully.
