// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit5-02.cpp File, learning functions with parameters in C++.

#include <iostream>
#include <string>

int convertToMark(std::string (markAsLevel)) {
    // variables
    int markAsGrade;

    // process and output
    if (markAsLevel == "4+") {
        markAsGrade = 97;
    } else if (markAsLevel == "4") {
        markAsGrade = 90;
    } else if (markAsLevel == "4-") {
        markAsGrade = 83;
    } else if (markAsLevel == "3+") {
        markAsGrade = 78;
    } else if (markAsLevel == "3") {
        markAsGrade = 75;
    } else if (markAsLevel == "3-") {
        markAsGrade = 71;
    } else if (markAsLevel == "2+") {
        markAsGrade = 68;
    } else if (markAsLevel == "2") {
        markAsGrade = 65;
    } else if (markAsLevel == "2-") {
        markAsGrade = 61;
    } else if (markAsLevel == "1+") {
        markAsGrade = 58;
    } else if (markAsLevel == "1") {
        markAsGrade = 55;
    } else if (markAsLevel == "1-") {
        markAsGrade = 51;
    } else if (markAsLevel == "R") {
        markAsGrade = 25;
    } else if (markAsLevel == "NE") {
        markAsGrade = 0;
    } else {
        markAsGrade = -1;
    }
        return markAsGrade;
}

int main() {
    // creating variables
    std::string (markAsLevel);
    int markAsGrade;

    // input
    std::cout << "Enter the mark that you got as a level(4+, 3-, 2, R, NE): ";
    std::cin >> markAsLevel;
    std::cout << "\n";

    // proccess and output
    markAsGrade = convertToMark(std::string(markAsLevel));
    if (markAsGrade <= 100 && markAsGrade >= 0) {
        std::cout << "You got a mark of " << markAsGrade << "%.";
    } else if (markAsGrade == -1) {
        std::cout << "Please input a valid mark.";
    }

    std::cout << "\n\n\nDone.\n";
}
