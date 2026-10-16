// CSCI 2350 - Assignment 2 - Task B
// Name: Joseph Jarvis
// R number: TODO
#include <iostream>

int maxScore(const int* scores, int count);
bool updateScore(int* scores, int count, int index, int replacement);


void printScores(const int* scores, int count) {
    for (int i = 0; i < count; ++i) {
        if (i > 0) std::cout << ' ';
        std::cout << scores[i];
    }
    std::cout << '\n';
}


int main() {
    int count = 0;
    int* working = nullptr;
    int score = 0;
    int replacement = -1;
    int index = -1;

    // Write the Task B program here. The handout gives the input,
    // error messages, report, and cleanup requirements.
    // Remove these two unused-variable lines when you write the program.
    std::cin >> count;
    std::cout << std::boolalpha;
    if(count >= 1 && count <= 20){
        working = new int[count];
        for(int i = 0; i < count; i++){
            std::cin >> score;
            if(score >= 0 && score <= 100){
                working[i] = score;
            }else{
                std::cout << "Invalid score data\n";
                delete[] working;
                working = nullptr;
                return 0;
            }
        }
        std::cin >> index;
        if(index < 0 || index >= count){
            //print output instead of error? I thought this case would have no output printed except the error message?
            //03_rejected_index says FAIL if I print the error.
            std::cout << "correction applied: " << false << "\nworking scores: ";
            printScores(working, count);
            std::cout << "working max: " << maxScore(working, count) << '\n';
            delete[] working;
            working = nullptr;
            std::cout << "owner cleared: " << (working == nullptr) << '\n';
            //std::cout << "Invalid correction data\n";
            return 0;
        }
        std::cin >> replacement;
        if(replacement < 0 || replacement > 100){
            std::cout << "Invalid correction data\n";
            delete[] working;
            working = nullptr;
            return 0;
        }
        bool update = updateScore(working, count, index, replacement);
        std::cout << "correction applied: " << update << "\nworking scores: ";
        printScores(working, count);
        std::cout << "working max: " << maxScore(working, count) << '\n';
        delete[] working;
        working = nullptr;
        std::cout << "owner cleared: " << (working == nullptr) << '\n';
        return 0;
    }
    std::cout << "Invalid score count\n";
    delete[] working;
    working = nullptr;
    return 0;
}
