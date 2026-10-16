// Slide 10, left-hand rejected program. make error-scope
#include <iostream>
void showQuiz() {
    std::cout << quiz << '\n'; // Error: quiz is not in this scope.
}
int main() {
    int quiz = 80;
    showQuiz();
}
