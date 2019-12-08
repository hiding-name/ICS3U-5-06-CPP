// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This program makes guessing number

#include <iostream>
#include <cmath>

void Round(float &number, int roundPosition) {
    // This'll round the number given by the position given

    // varibles
    int numberInt;
    numberInt = number * pow(10, roundPosition) + 0.5;
    number = numberInt / pow(10, roundPosition);
}

main() {
    // This is getting user number and running round()

    // variables
    float number;
    int roundPosition;

    // process
    std::cout << "What is the number: " << std::endl;
    std::cin >> number;
    std::cout << "What is the round position: " << std::endl;
    std::cin >> roundPosition;
    Round(number, roundPosition);

    // ouput
    std::cout << "\nThe answer is " << number << std::endl;
}
