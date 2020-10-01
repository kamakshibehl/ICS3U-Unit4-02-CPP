// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program can find the factorial of a number using a while loop

#include <iostream>
using namespace std;

int main() {
    // This function can find the factorial of a number using a while loop

    // Variables
    int positiveInteger;
    int factorial = 1;
    int counter = 0;

    // Input
    cout << "Enter a positive integer here:" << std::endl;
    cin >> positiveInteger;
    cout << "" << std::endl;

    // Process
    do {
        counter++;
        factorial = factorial*counter;
    } while (positiveInteger > counter);

    // Output
    cout << "The factorial of " << positiveInteger << " is " << \
        factorial << endl;
}
