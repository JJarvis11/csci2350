#include <iomanip>
#include <iostream>

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

        std::cout << std::fixed << std::setprecision(1)
                  << "student " << student
                  << ": total " << total
                  << ", count " << count
                  << ", average " << (double)total / count
                  << '\n';
    }
}
