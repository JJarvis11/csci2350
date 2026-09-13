/*
Activity 8 — Complete an else-if grade ladder
EDIT ONLY TODO 8. Then run: make 8
GOAL: exactly one grade; test thresholds from highest to lowest.
*/
#include <iostream>

int main() {
    const int score = 90;  // Try 59, 60, and 90 later.
    char grade = 'F';

    // ==================== TODO 8: EDIT BELOW ========================
    // Add A, B, C, and D using one if / else if ladder.
    if (score >= 90){
        grade = 'A';
    }
    else if(score >= 80){
        grade = 'B';
    }
    else if(score >= 70){
        grade = 'C';
    }
    else if(score >= 60){
        grade = 'D';
    }

    // ==================== STOP EDITING HERE =========================

    std::cout << "score: " << score << '\n';
    std::cout << "grade: " << grade << '\n';
    return 0;
}
