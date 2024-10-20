#include <iostream>
using namespace std;
#include <cmath> // for M_PI constant

int main()
{
    double radius, circumference, diameter, area;

    // Input the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the diameter, circumference, and area
    diameter = 2 * radius;
    circumference = 2 * M_PI * radius; // Circumference = 2 * π * r
    area = M_PI * radius * radius;     // Area = π * r^2

    // Output the results
    std::cout << "Diameter: " << diameter << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}