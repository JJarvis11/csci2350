/*
Activity 9 — Complete a switch statement
EDIT ONLY TODO 9. Then run: make 9
Choice 1 prints grade. Choice 2 prints score and grade.
*/
#include <iostream>

int main() {
    const int score = 89;
    const char grade = 'B';
    const int reportChoice = 9;  // Try 2 and 9 later.

    // ==================== TODO 9: EDIT BELOW ========================
    switch (reportChoice) {
        case 1:
            std::cout << "Grade: " << grade << '\n';
            break;
        case 2:
            std::cout << "Score: " << score << '\n';
            std::cout << "Grade: " << grade << '\n';
            break;
        default:
            std::cout << "Invalid report choice.\n";
    }
    // ==================== STOP EDITING HERE =========================

    return 0;
}
