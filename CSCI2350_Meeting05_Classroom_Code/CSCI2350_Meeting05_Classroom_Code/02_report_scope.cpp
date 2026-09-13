#include <iomanip>
#include <iostream>

double calculateAverage(int total, int count) {
    return (double)total / count;
}

void printReport(int studentNumber,
                 int sum,
                 int numberOfScores) {
    // TODO: Use only the supplied parameters to calculate and print one report.
    // Keep the parameter names as written.
    // Expected format:
    // student 1: total 240, count 3, average 80.0
    std::cout << "Student " << studentNumber << ": total " << sum << ", count " << numberOfScores << ", average " << calculateAverage(sum, numberOfScores) << '\n';
}

int main() {
    int firstTotal = 240;
    int firstCount = 3;

    int secondTotal = 210;
    int secondCount = 3;

    printReport(1, firstTotal, firstCount);
    printReport(2, secondTotal, secondCount);
}
