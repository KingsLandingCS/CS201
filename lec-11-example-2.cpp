#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[10], z, i = 0;
    do
    {
        cout << "Enter Number : ";
        cin >> z;
        if (z != -1)
        {
            a[i] = z;
            i++;
        }

    } while (z != -1 && i < 10);

    cout << "You have entered -1. Loop terminated." << endl;

    for (int j = 0; j < i; j++)
    {
        cout << " " << a[j] << endl;
    }

    // getch();
    return 0;
}

// 1. #include <iostream>
// This line includes the iostream library, which is used for input and output operations in C++. It provides functionalities like cin (for input) and cout (for output).
// 2. using namespace std;
// This line tells the compiler to use the standard namespace, meaning we can directly use functions like cin and cout without prefixing them with std::.
// 3. int main()
// This defines the entry point of the program. The program execution starts from here.
// 4. int a[10], z, i = 0;
// a[10]: Declares an array a of size 10 to store the numbers entered by the user.
// z: Declares an integer variable z to store the number entered by the user.
// i = 0: Declares and initializes the variable i to 0, which will serve as the index for inserting values into the array a.
// 5. do { ... } while (z != -1 && i < 10);
// This is a do-while loop. It ensures the user is asked to input a number repeatedly until one of two conditions is met:
// The user enters -1, or
// The user has entered 10 numbers (because the array can hold only 10 values).
// Steps within the loop:

// cout << "Enter Number : ";: Prompts the user to input a number.
// cin >> z;: Takes the input from the user and stores it in the variable z.
// if (z != -1): Checks if the user has entered a number other than -1.
// If true:
// a[i] = z;: Stores the entered number in the array a at index i.
// i++;: Increments i to move to the next index for storing the next number.
// The loop continues until either the user enters -1 or the array is full (10 numbers).

// 6. cout << "You have entered -1. Loop terminated." << endl;
// After the loop terminates (when the user enters -1 or when the array is full), the program displays a message saying the loop has been terminated.
// 7. for (int j = 0; j < i; j++) { cout << " " << a[j] << endl; }
// This is a for loop that iterates over the elements stored in the array a and prints them.
// The loop runs from j = 0 to j < i (i.e., it runs i times, where i is the number of valid inputs).
// Inside the loop, cout << " " << a[j] << endl; prints each value of the array a stored at index j, followed by a new line.
// 8. return 0;
// This statement indicates the successful completion of the program. It returns 0 to the operating system.
// 9. (Commented code)
// #include <conio.h>: This is a commented-out line that would include the conio.h header file, which is typically used for console input/output functions like getch(). It’s not necessary for this program and is commented out.
// getch();: This is also commented-out and would be used to wait for a keypress before closing the program (commonly used in DOS-based systems), but since it’s commented out, it's not active.

// Current Code (with a[i] = z;)
// What it does: When the user inputs a number, the program stores that number in the array a at the current index i, and then increments i to move to the next index for the next number.
// Modified Code (with z = a[i];)
// What it does: Instead of storing the entered value in the array a, it assigns the value at the current index i of the array a to the variable z. This effectively doesn't change anything in the array because the array has not been populated yet. The result is that the variable z would be assigned some uninitialized or garbage value from the array a[i], which could lead to incorrect behavior.