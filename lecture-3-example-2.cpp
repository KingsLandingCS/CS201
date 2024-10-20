#include <iostream>
using namespace std;

double calculateExpression(double a, double b, double c)
{
    // Formula: (b * b - 4 * a * c) / (2 * a)
    double result = (b * b - 4 * a * c) / (2 * a);
    return result;
}

int main()
{
    // Example values for a, b, and c
    double a = 1.0, b = 5.0, c = 3.0;

    // Call the function and display the result
    double result = calculateExpression(a, b, c);
    std::cout << "The result is: " << result << std::endl;

    return 0;
}