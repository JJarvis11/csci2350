#include <iostream>
#include <string>

int main() {
    std::string firstName;
    int quizScore = 0;

    // BUG 1: one input arrow points the wrong way.
    std::cin >> firstName >> quizScore;

    std::cout << "Student: " << firstName << '\n';

    // BUG 2: this prints a word instead of the value in quizScore.
    std::cout << "Quiz score: " << quizScore << '\n';
    return 0;
}
