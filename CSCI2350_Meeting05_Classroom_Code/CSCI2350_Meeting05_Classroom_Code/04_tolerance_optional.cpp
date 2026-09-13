#include <cmath>
#include <iomanip>
#include <iostream>

bool approximatelyEqual(double actual,
                        double expected,
                        double tolerance) {
    // TODO: Return true when the absolute difference is less than tolerance.
    if((std::abs(actual) - expected < tolerance)) return true;
    return false;
}

int main() {
    double result = 0.1 + 0.2;

    std::cout << std::setprecision(17)
              << "Result: " << result << '\n';

    std::cout << std::boolalpha
              << "Exact 0.3: " << (result == 0.3) << '\n'
              << "Close to 0.3: "
              << approximatelyEqual(result, 0.3, 1e-9) << '\n'
              << "Close to 0.31: "
              << approximatelyEqual(result, 0.31, 1e-9) << '\n';
}
