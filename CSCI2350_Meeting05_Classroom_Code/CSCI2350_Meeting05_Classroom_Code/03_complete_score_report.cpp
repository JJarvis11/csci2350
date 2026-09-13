#include <iomanip>
#include <iostream>

double calculateAverage(int total, int count);
char letterGrade(double average);
void printReport(int student, int total, int count);

int main() {
    for (int student = 1; student <= 2; ++student) {
        int total = 0;
        int count = 0;

        for (int quiz = 0; quiz < 3; ++quiz) {
            int score;
            do {
                std::cin >> score;
            } while (score < 0 || score > 100);

            total += score;
            ++count;
        }

        // Meeting 4 collection logic ends here.
        printReport(student, total, count);
    }
}

double calculateAverage(int total, int count) {
    return (double)total / count;
}

char letterGrade(double average) {
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= 60) return 'D';
    return 'F';
}

void printReport(int student, int total, int count) {
    // TODO 1: Call calculateAverage and store its returned value.
    // TODO 2: Pass the average to letterGrade and store the returned grade.
    // TODO 3: Print student, total, count, average, and grade.
    //
    // Expected format:
    // student 1: total 240, count 3, average 80.0, grade B
    double average = calculateAverage(total, count);
    char letter = letterGrade(average);
    std::cout << "student " << student << ": total " << total << ", count " << count << ", average " << average << ", grade " << letter << '\n';
}
