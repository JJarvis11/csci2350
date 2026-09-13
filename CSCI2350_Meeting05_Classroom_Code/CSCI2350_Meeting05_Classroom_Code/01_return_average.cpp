#include <iomanip>
#include <iostream>

double calculateAverage(int total, int count) {
    double average = (double)total / count;

    // TODO: Return the calculated local value instead of 0.0.
    return average;
}

int main() {
    double firstAverage = calculateAverage(240, 3);
    double secondAverage = calculateAverage(269, 3);

    std::cout << std::fixed << std::setprecision(1)
              << "First average: " << firstAverage << '\n'
              << "Second average: " << secondAverage << '\n';
}
