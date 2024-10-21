#include <iostream>
using namespace std;
#include <cmath> // for M_PI constant

int main()
{
    double radius;
    // Input the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the diameter, circumference, and area
    double diameter = 2 * radius;
    double circumference = 2 * M_PI * radius; // Circumference = 2 * π * r
    double area = M_PI * radius * radius;     // Area = π * r^2

    // Output the results
    std::cout << "Diameter: " << diameter << std::endl;
    std::cout << "Circumference: " << circumference << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}

// #include <iostream>
// #include <cmath>  // for M_PI constant
// We include two libraries:
// iostream is used for input and output operations like cin (input) and cout (output).
// cmath is included to use mathematical constants and functions, specifically M_PI, which represents the value of
// 𝜋
// π (approximately 3.14159).
// cpp
// Copy code
// int main() {
//     double radius, circumference, diameter, area;
// The main() function is the entry point of the program.
// Four variables are declared here:
// radius: will store the radius of the circle entered by the user.
// circumference, diameter, and area: these will store the computed results.
// cpp
// Copy code
//     // Input the radius
//     std::cout << "Enter the radius of the circle: ";
//     std::cin >> radius;
// This part prompts the user to enter the radius of the circle.
// std::cout prints the message to the console.
// std::cin reads the user's input and stores it in the radius variable.
// cpp
// Copy code
//     // Calculate the diameter, circumference, and area
//     diameter = 2 * radius;
// Calculating the diameter:
// The formula for the diameter of a circle is:
// Diameter
// =
// 2
// ×
// Radius
// Diameter=2×Radius
// This is straightforward multiplication, and the result is stored in the diameter variable.
// cpp
// Copy code
//     circumference = 2 * M_PI * radius;  // Circumference = 2 * π * r
// Calculating the circumference:
// The formula for the circumference of a circle is:
// Circumference
// =
// 2
// ×
// 𝜋
// ×
// Radius
// Circumference=2×π×Radius
// M_PI is used to represent
// 𝜋
// π from the cmath library. The result is stored in the circumference variable.
// cpp
// Copy code
//     area = M_PI * radius * radius;      // Area = π * r^2
// Calculating the area:
// The formula for the area of a circle is:
// Area
// =
// 𝜋
// ×
// Radius
// 2
// Area=π×Radius
// 2

// This is calculated by multiplying
// 𝜋
// π (represented by M_PI) with the square of the radius (radius * radius). The result is stored in the area variable.
// cpp
// Copy code
//     // Output the results
//     std::cout << "Diameter: " << diameter << std::endl;
//     std::cout << "Circumference: " << circumference << std::endl;
//     std::cout << "Area: " << area << std::endl;
// After performing the calculations, the program outputs the computed values:
// The diameter, circumference, and area are printed to the console using std::cout.
// std::endl is used to move to the next line after each output, making the results easier to read.
// cpp
// Copy code
//     return 0;
// }
// The main() function ends by returning 0, which indicates that the program executed successfully.
// Summary of Computations:
// Diameter is calculated as
// 2
// ×
// radius
// 2×radius.
// Circumference is calculated as
// 2
// ×
// 𝜋
// ×
// radius
// 2×π×radius.
// Area is calculated as
// 𝜋
// ×
// radius
// 2
// π×radius
// 2
//  .
// Example:
// If the user inputs a radius of 5:
// Diameter =
// 2
// ×
// 5
// =
// 10
// 2×5=10
// Circumference =
// 2
// ×
// 3.14159
// ×
// 5
// =
// 31.4159
// 2×3.14159×5=31.4159
// Area =
// 3.14159
// ×
// 5
// 2
// =
// 78.5398
// 3.14159×5
// 2
//  =78.5398
// The program will output the diameter, circumference, and area based on the user-provided radius.