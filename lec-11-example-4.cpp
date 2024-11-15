#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int search, found = 0;
    cout << "Enter Search Value : ";
    cin >> search;

    for (int i = 0; i <= 4; i++)
    {
        if (search == a[i])
        {
            found++;
            break; // it will brings out of the loop
        }
    }
    if (found == 0)
    {
        cout << "Value not Found " << ", Match found " << found << endl;
    }
    else
    {
        cout << " Value is Found" << ", Match found " << found << endl;
    }

    // getch();
    return 0;
}

// 1. int main()
// This is the main function, where the execution of the program starts.

// 2. int a[5] = {10, 20, 30, 40, 50};
// A static array of size 5 is declared and initialized with the values {10, 20, 30, 40, 50}.
// This means a[0] = 10, a[1] = 20, a[2] = 30, a[3] = 40, and a[4] = 50.
// 3. int search, found = 0;
// Two integer variables are declared:
// search: This will store the value that the user wants to search for in the array.
// found: This is a flag variable initialized to 0. It will be used to indicate whether the search value was found in the array or not.
// 4. cout << "Enter Search Value : ";
// This line outputs the prompt "Enter Search Value : " to the console, asking the user to input a number to search for in the array.
// 5. cin >> search;
// This line takes the user's input and stores it in the variable search.
// 6. for (int i = 0; i <= 4; i++)
// This starts a for loop that will iterate over the array. It runs for each index from 0 to 4 (inclusive), which corresponds to the 5 elements in the array a[5].
// 7. if (search == a[i])
// Inside the loop, there is a conditional if statement to check whether the value entered by the user (search) matches the element at the current index i of the array a.
// If a match is found, the following happens:
// found++: The found variable is incremented, indicating that the value has been found at least once.
// break;: The break statement is used to exit the loop early, as there is no need to continue searching once the value is found.
// 8. if (found == 0)
// After the loop completes, this conditional checks whether found is still 0. This means that the search value was not found in the array, and the program will print:
// "Value not Found, Match found 0"
// found == 0 means the search value was not present in the array.
// 9. else
// If found is not 0 (i.e., the search value was found), the program will print:
// "Value is Found, Match found 1"
// This indicates that the search value was found at least once.
// 10. return 0;
// The program ends by returning 0 from the main function, indicating successful execution.
// Summary of Execution:
// The program initializes an array a[] and asks the user for a number to search.
// It loops through the array to check if the entered value exists.
// If found, it sets found to 1 and exits the loop.
// If not found, it completes the loop and keeps found as 0.
// Based on whether the value was found or not, it displays an appropriate message.
// Example Scenario:
// If the user enters 30, the program will print "Value is Found, Match found 1" because 30 is in the array at index 2.
// If the user enters 100, the program will print "Value not Found, Match found 0" because 100 is not in the array.