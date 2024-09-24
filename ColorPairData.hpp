#ifndef COLORPAIRDATA_H
#define COLORPAIRDATA_H

#include <iostream>
#include <string>

    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    extern const int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    extern const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    extern const int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
#endif 
