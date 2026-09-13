#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::string studentId;
    int quiz1 = 0;
    int quiz2 = 0;
    int quiz3 = 0;

    std::cin >> firstName >> studentId >> quiz1 >> quiz2 >> quiz3;

    std::cout << "name: " << firstName << '\n';
    std::cout << "student ID: " << studentId << '\n';
    std::cout << "scores: " << quiz1 << ' ' << quiz2 << ' ' << quiz3 << '\n';
    return 0;
}
