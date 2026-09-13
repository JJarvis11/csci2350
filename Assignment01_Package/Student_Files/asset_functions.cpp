#include <iomanip>
#include <iostream>

int largerAssetSize(int currentLargest, int assetSize);
double calculateAverageAssetSize(int totalMemory, int assetCount);
char budgetStatus(int totalMemory);
void printBudgetReport(int totalMemory,
                       int assetCount,
                       double averageAssetSize,
                       int largestAsset,
                       char status);

int main() {
    const int assetSize1 = 120;
    const int assetSize2 = 300;
    const int assetSize3 = 200;
    const int assetCount = 3;

    int totalMemory = 0;
    int largestAsset = 0;

    totalMemory += assetSize1;
    largestAsset = largerAssetSize(largestAsset, assetSize1);

    totalMemory += assetSize2;
    // TODO 1: The returned value is currently ignored. Store it.
    largestAsset = largerAssetSize(largestAsset, assetSize2);

    totalMemory += assetSize3;
    largestAsset = largerAssetSize(largestAsset, assetSize3);

    // TODO 2: Call calculateAverageAssetSize and store its returned value.
    double averageAssetSize = calculateAverageAssetSize(totalMemory, assetCount);

    // TODO 3: Call budgetStatus with the correct data and store its return.
    char status = budgetStatus(totalMemory);

    printBudgetReport(totalMemory,
                      assetCount,
                      averageAssetSize,
                      largestAsset,
                      status);
    return 0;
}

int largerAssetSize(int currentLargest, int assetSize) {
    // TODO 4: Fix the branch so the larger value is returned.
    if (assetSize > currentLargest) {
        currentLargest = assetSize;
    }
    return currentLargest;
}

double calculateAverageAssetSize(int totalMemory, int assetCount) {
    // TODO 5: Return a decimal average. Assume assetCount is positive.
    return (double)totalMemory / assetCount;
}

char budgetStatus(int totalMemory) {
    // TODO 6: Return S, W, or O at the specified boundaries.
    if (totalMemory <= 512) {
        return 'S';
    }else if(totalMemory <= 1024){
        return 'W';
    }
    return 'O';
}

void printBudgetReport(int totalMemory,
                       int assetCount,
                       double averageAssetSize,
                       int largestAsset,
                       char status) {
    // TODO 7: Print the five required lines using the values passed by main.
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Asset count: " << assetCount << "\nTotal memory: "
              << totalMemory << " MB\nAverage asset size: " << averageAssetSize << " MB\nLargest asset: "
              << largestAsset << " MB\nBudget status: " << status << '\n';
}
