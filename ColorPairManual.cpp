#include "ColorPair.hpp"
#include <vector>
#include <iomanip>

void printColorCodingManual() {
    int pairNumber = 1;  // Start numbering from 1

    std::cout << "Color Code Reference Manual:\n";
    std::cout << std::setw(5) << "Pair" << std::setw(15) << "Major Color" << std::setw(15) << "Minor Color" << "\n";
    std::cout << "-------------------------------------------\n";

    // Iterate through all combinations of major and minor colors
    for (int majorIndex = 0; majorIndex < numberOfMajorColors; ++majorIndex) {
        for (int minorIndex = 0; minorIndex < numberOfMinorColors; ++minorIndex) {
            // Create a ColorPair object
            ColorPair colorPair(static_cast<MajorColor>(majorIndex), static_cast<MinorColor>(minorIndex));

            // Print the pair number and the color pair
            std::cout << std::setw(5) << pairNumber << std::setw(15)
                      << MajorColorNames[majorIndex] << std::setw(15)
                      << MinorColorNames[minorIndex] << "\n";
            pairNumber++;
        }
    }
}
int main()
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    const int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    const int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    
    printColorCodingManual();
    return 0;
}

