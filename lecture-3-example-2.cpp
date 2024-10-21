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
    double a = 1.0;
    double b = 5.0;
    double c = 3.0;

    // Call the function and display the result
    double result = calculateExpression(a, b, c);
    cout << "The result is: " << result << endl;

    return 0;
}

// In your program, the function that runs first is always the **main** function.

// In C++, the main function serves as the entry point of the program. When the program is executed, the operating system starts by calling the main function. All the other functions are executed based on what is written inside main.

// Steps of execution:
// The main function is executed first.
// Inside main, the calculateExpression function is called with the values a = 1.0, b = 5.0, and c = 3.0.
// The calculateExpression function computes the result using the formula
// 𝑏
// 2
// −
// 4
// 𝑎
// 𝑐
// 2
// 𝑎
// 2a
// b
// 2
//  −4ac
// ​
//  .
// Once the calculation is complete, control returns to the main function, and the result is printed.
// Summary:
// The main function is the first to run.
// The calculateExpression function is called from within main. Therefore, it will be executed when its call occurs in the main function.