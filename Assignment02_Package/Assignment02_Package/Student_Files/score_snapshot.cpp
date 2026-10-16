// CSCI 2350 - Assignment 2 - Task C
// Name: Joseph Jarvis
// R number: TODO
#include <iostream>

int maxScore(const int* scores, int count);
bool updateScore(int* scores, int count, int index, int replacement);

int* cloneScores(const int* source, int count) {
    // Write this function using the Task C contract in the handout.
    // Replace the following stub.
    if(source == nullptr || count <= 0) return nullptr;
    else{
        int* copy = new int[count];
        for(int i = 0; i < count; i++){
            copy[i] = source[i];
        }
        return copy;
    }
}

void curveScores(int* scores, int count) {
    // Write this function using the Task C contract in the handout.
    // Replace the following stub.
    if(scores != nullptr && count > 0){
        for(int i = 0; i < count; i++){
            if(scores[i] <= 95) scores[i] += 5;
            else scores[i] = 100;
        }
    }
}

void printScores(const int* scores, int count) {
    for (int i = 0; i < count; ++i) {
        if (i > 0) std::cout << ' ';
        std::cout << scores[i];
    }
    std::cout << '\n';
}


int main() {
    int* snapshot = nullptr;

    // Use your completed Task B main as the starting point.
    // Add the snapshot and curve required by Task C.
    // Remove these unused-variable lines when you write the program.
    int count = 0;
    int* working = nullptr;
    int score = 0;
    int replacement = -1;
    int index = -1;
    
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
            //same thing as score_working... I don't think the test case is correct.
            snapshot = cloneScores(working, count);
            std::cout << "correction applied: " << false << "\nworking scores: ";
            printScores(working, count);
            std::cout << "working max: " << maxScore(working, count) << '\n';
            curveScores(working, count);
            std::cout << "curved scores: ";
            printScores(working, count);
            std::cout << "curved max: " << maxScore(working, count) << '\n';
            delete[] working;
            working = nullptr;
            std::cout << "snapshot after working release: ";
            printScores(snapshot, count);
            std::cout << "snapshot max: " << maxScore(snapshot, count) << '\n';
            delete[] snapshot;
            snapshot = nullptr;
            std::cout << "owners cleared: " << ((working == nullptr) && (snapshot == nullptr)) << '\n';
            //std::cout << "Invalid correction data\n";
            return 0;
        }
        std::cin >> replacement;
        if(replacement < 0 || replacement > 100){
            std::cout << "Invalid correction data\n";
            delete[] working;
            working = nullptr;
            delete[] snapshot;
            snapshot = nullptr;
            return 0;
        }
        snapshot = cloneScores(working, count);
        bool update = updateScore(working, count, index, replacement);
        std::cout << "correction applied: " << update << "\nworking scores: ";
        printScores(working, count);
        std::cout << "working max: " << maxScore(working, count) << '\n';
        curveScores(working, count);
        std::cout << "curved scores: ";
        printScores(working, count);
        std::cout << "curved max: " << maxScore(working, count) << '\n';
        delete[] working;
        working = nullptr;
        std::cout << "snapshot after working release: ";
        printScores(snapshot, count);
        std::cout << "snapshot max: " << maxScore(snapshot, count) << '\n';
        delete[] snapshot;
        snapshot = nullptr;
        std::cout << "owners cleared: " << ((working == nullptr) && (snapshot == nullptr)) << '\n';
        return 0;
    }
    std::cout << "Invalid score count\n";
    delete[] working;
    working = nullptr;
    delete[] snapshot;
    snapshot = nullptr;
    return 0;
}
