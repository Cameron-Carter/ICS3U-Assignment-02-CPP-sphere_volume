// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: April 2021
// This program calculates the circumference of a circle with inputted radius

#include <iostream>
#include <cmath>

int main() {
    // This function calculates sphere volume
    float radius;
    float volume;

    // Input:
    std::cout << "This program calculates the volume of a sphere." << std::endl;
    std::cout << "Enter the radius of a sphere: ";
    std::cin >> radius;

    // Process
    volume = (4 * M_PI * pow(radius, 3)) / 3;

    // Output
    std::cout << "\nThe volume is " << volume << " cm³." << std::endl;
    std::cout << "\nDone." << std::endl;
}
