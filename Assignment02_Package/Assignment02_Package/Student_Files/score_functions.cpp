// CSCI 2350 - Assignment 2 - Task A
// Name: Joseph Jarvis
// R number: TODO
// Keep these function headers. Do not add main to this file.

int maxScore(const int* scores, int count) {
    // Write this function using the Task A contract in the handout.
    // Replace the following stub.
    if(scores != nullptr && count > 0){
        int max = scores[0];
        for(int i = 0; i < count; i++){
            if(scores[i] > max) max = scores[i];
        }
        return max;
    }
    return -1;
}

bool updateScore(int* scores, int count, int index, int replacement) {
    // Write this function using the Task A contract in the handout.
    // Replace the following stub.
    if(scores != nullptr && count > 0){
        if(index >= 0 && index < count){
            if(replacement >= 0 && replacement <= 100){
                scores[index] = replacement;
                return true;
            }
        }
    }
    return false;
}
