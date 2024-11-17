#include <iostream>
// #include <conio.h>
using namespace std;

// bubble sort
int main()
{
    int a[5] = {15, 2, 7, 4, 1};

    // Outer loop for sorting passes
    for (int i = 0; i <= 4; i++)
    {
        // Inner loop for comparisons and swaps
        for (int j = 0; j <= 3; j++)
        {
            if (a[j] > a[j + 1])
            {
                // Swap using a temporary variable
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i <= 4; i++)
    {
        cout << " " << a[i] << endl;
    }

    return 0;
}

// Detailed Explanation with Visualization of the Swap
// The key part of the program is this block of code:

// cpp
// Copy code
// if (a[j] > a[j + 1])
// {
//     // Swap using a temporary variable
//     int temp = a[j];      // Step 1: Store a[j] in a temporary variable
//     a[j] = a[j + 1];      // Step 2: Assign the value of a[j+1] to a[j]
//     a[j + 1] = temp;      // Step 3: Assign the value from temp (original a[j]) to a[j+1]
// }
// This logic is executed every time the algorithm finds that two adjacent elements are in the wrong order (i.e., a[j] > a[j+1]).

// How It Works:
// Condition:
// The program checks if the current element a[j] is greater than the next element a[j+1].
// If true, it performs a swap to ensure the smaller element comes before the larger one.
// Visualization of the Swap Process
// Let’s take an example with a = {15, 2, 7, 4, 1} and walk through the first comparison:

// Initial State:
// plaintext
// Copy code
// a[0] = 15, a[1] = 2
// Condition Check:
// if (a[0] > a[1]) → if (15 > 2) → true
// Since the condition is true, we proceed to swap.

// Swap Process:

// Step 1: Store a[j] (15) in a temporary variable:
// cpp
// Copy code
// int temp = a[j]; // temp = 15
// Step 2: Assign a[j+1] (2) to a[j]:
// cpp
// Copy code
// a[j] = a[j + 1]; // a[0] = 2
// Array now: {2, 2, 7, 4, 1}
// Step 3: Assign the value stored in temp (15) to a[j+1]:
// cpp
// Copy code
// a[j + 1] = temp; // a[1] = 15
// Array now: {2, 15, 7, 4, 1}
// State After First Comparison:
// The first two elements have been swapped:

// plaintext
// Copy code
// a = {2, 15, 7, 4, 1}
// Example Walkthrough: Full First Pass
// Using the same array, let’s go through all comparisons in the first pass (i = 0):

// Initial Array:
// plaintext
// Copy code
// a = {15, 2, 7, 4, 1}
// First Comparison (j = 0):
// plaintext
// Copy code
// Compare a[0] (15) and a[1] (2):
// 15 > 2 → Swap
// Array after swap: {2, 15, 7, 4, 1}
// Second Comparison (j = 1):
// plaintext
// Copy code
// Compare a[1] (15) and a[2] (7):
// 15 > 7 → Swap
// Array after swap: {2, 7, 15, 4, 1}
// Third Comparison (j = 2):
// plaintext
// Copy code
// Compare a[2] (15) and a[3] (4):
// 15 > 4 → Swap
// Array after swap: {2, 7, 4, 15, 1}
// Fourth Comparison (j = 3):
// plaintext
// Copy code
// Compare a[3] (15) and a[4] (1):
// 15 > 1 → Swap
// Array after swap: {2, 7, 4, 1, 15}
// Array After First Pass:
// At the end of the first pass, the largest element 15 has been moved to its correct position:

// plaintext
// Copy code
// a = {2, 7, 4, 1, 15}
// Why Use the Temporary Variable?
// Without a Temporary Variable:
// If you directly swap values without a temporary variable, one of the original values would be lost. For example:

// Assigning a[j] = a[j+1] would overwrite the value of a[j], making it impossible to assign it to a[j+1].
// With a Temporary Variable:
// The temporary variable acts as a storage location for one value during the swap, ensuring that no data is lost.
