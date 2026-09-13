#include <iostream>
#include <string>

int main() {
    const int QUIZ_COUNT = 3;
    std::string firstName;
    std::string studentId;
    int quiz1 = 0;
    int quiz2 = 0;
    int quiz3 = 0;

    std::cin >> firstName >> studentId >> quiz1 >> quiz2 >> quiz3;

    // TODO 1: include all three quiz scores.
    int quizTotal = quiz1 + quiz2 + quiz3;
    int integerAverage = quizTotal / QUIZ_COUNT;

    // TODO 2: use double(quizTotal) before division.
    double decimalAverage = double(quizTotal) / QUIZ_COUNT;

    // TODO 3: replace this compact output with five labeled lines:
    // name, student ID, quiz total, integer average, and decimal average.
    std::cout << "Name: " << firstName << "Student ID: " << studentId << "quiz total: " << "Integer average: " << integerAverage << "Decimal average: " << decimalAverage << '\n';
    return 0;
}
