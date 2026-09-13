// CSCI 2350 - Assignment 1 - Task A and AI-use reflection
// Game Asset Memory Budget Monitor
//
// Name: Joseph Jarvis
// R number: TODO
//
// Write each answer after TODO. Keep every answer in this file as C++ comments.

// Assignment values:
// - Valid asset count: 1-5, inclusive
// - Valid asset size: 1-500 MB, inclusive
// - Status S (safe): total memory is 512 MB or less
// - Status W (warning): total memory is 513-1024 MB
// - Status O (over budget): total memory is more than 1024 MB

// A1. Boundary expression
// Write one C++ Boolean expression that is true exactly when assetSize is valid.
// Answer: assetSize <= 500 && assetSize >= 1;

// A2. Integer and decimal division
// Assume:
//     int totalMemory = 1001;
//     int assetCount = 4;
//
// Result of totalMemory / assetCount: 250
// Result after converting before division: 250.25
// Why the decimal result belongs in the report: The decimal result is a more accurate value representing the average asset size

// A3. Trace changing state
// totalMemory and largestAsset both start at 0.
// The valid asset sizes are 120, 300, and 200, in that order.
//
// After 120: totalMemory = 120; largestAsset = 120
// After 300: totalMemory = 420; largestAsset = 300
// After 200: totalMemory = 620; largestAsset = 300
// Value of assetNumber that stops assetNumber <= assetCount after three assets: 4

// A4. Repair a validation loop
// The original loop does not read a new value:
//
//     std::cin >> assetSize;
//     while (assetSize < 1 || assetSize > 500) {
//         std::cout << "Invalid asset size\n";
//     }
//
// Corrected loop:
// std::cin >> assetSize;
// while(assetSize < 1 || assetSize > 500){
//    std::cout << "Invalid asset size\n";
//    std::cin >> assetSize;
// }
//
// Why the original loop can repeat forever: It doesn't get a new input for assetSize. assetSize would always be invalid.

// AI-USE REFLECTION - REQUIRED ONLY IF YOU USED AI (I did not use AI for this assignment)
// If you used an AI tool at any point, answer all three prompts below.
// If you did not use AI, no reflection is required.
//
// Tool and what you asked it to do: TODO if AI was used
// One suggestion you accepted, changed, or rejected and why: TODO if AI was used
// How you verified the final code with the course make workflow: TODO if AI was used

int main() {
    return 0;
}
