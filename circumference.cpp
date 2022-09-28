// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in September 2022
// A program that finds the circumference of circle using user input

#include <iostream>

const double TAU = 6.28318531;
int radiusOfCircle;
double circumferenceOfCircle;

int main() {
    std::cout << "Enter radius of the circle (cm): ";
    std::cin >> radiusOfCircle;
    std::cout << std::endl;
    circumferenceOfCircle = TAU * radiusOfCircle;
    std::cout << std::endl;
    std::cout << "This circle's circumference is " << circumferenceOfCircle;
    std::cout << "cm" << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
