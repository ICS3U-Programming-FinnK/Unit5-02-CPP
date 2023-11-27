// Created by: Finn Kitor
// Created on: November 26th, 2023
// this program calculates the base and height of the triangle using
// a function with parameters.
#include <iostream>
#include <stdexcept>

double CalcArea(double base, double height) {
    if (base <= 0 || height <= 0) {
        throw std::invalid_argument("Invalid input. Base and height must be greater than zero.");
    }

    return 0.5 * base * height;
}

int main() {
    double base, height;

    // Prompt the user to enter the base and height of the triangle
    std::cout << "Enter the base of the triangle in cm: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle in cm: ";
    std::cin >> height;

    try {
        // Calculate the area of the triangle
        double area = CalcArea(base, height);

        // Print the result
        std::cout << "The area of the triangle is: " << area << " cm^2." << std::endl;
    } catch (const std::invalid_argument& e) {
        // Handle invalid input
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}