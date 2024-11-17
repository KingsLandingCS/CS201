#include <iostream>
// #include <conio.h>
using namespace std;

int main()
{
    int a[5] = {15, 2, 7, 4, 1};
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
        }
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << " " << a[i] << endl;
    }

    // getch();
    return 0;
}

// Step-by-Step Explanation of the Code
// The provided code implements bubble sort, which is a sorting algorithm used to arrange elements of an array in ascending order. Let's break it down step by step, including the section where the swapping occurs without a temporary variable.

// 1. Initialization
// An integer array a[5] is defined: a[5] = {15, 2, 7, 4, 1}.
// The sorting involves nested for loops:
// The outer loop (variable i) runs through the array multiple times (from 0 to 4).
// The inner loop (variable j) compares adjacent elements in the array to ensure they are in the correct order.
// 2. Outer and Inner Loops
// Outer loop: for (int i = 0; i <= 4; i++)
// Repeats the process of comparing and swapping elements.
// Inner loop: for (int j = 0; j <= 3; j++)
// Goes through the array and compares adjacent elements a[j] and a[j + 1].
// The inner loop runs n-1 times for an array of size n because the largest value gets "bubbled" to its correct position in each iteration.
// 3. Swapping Without a Temporary Variable
// If a[j] > a[j + 1], the adjacent elements are swapped using mathematical operations (addition and subtraction) instead of a temporary variable:

// cpp
// Copy code
// a[j] = a[j] + a[j + 1];
// a[j + 1] = a[j] - a[j + 1];
// a[j] = a[j] - a[j + 1];
// Let's analyze and visualize this step:

// Visualization of the Swap Process
// Suppose a[j] = 15 and a[j+1] = 2.

// Step 1: Add a[j] and a[j+1] and store the result in a[j]:

// css
// Copy code
// a[j] = a[j] + a[j+1];  // a[j] = 15 + 2 = 17
// Now:

// css
// Copy code
// a[j] = 17, a[j+1] = 2
// Step 2: Subtract the new a[j+1] from a[j] and store the result in a[j+1]:

// css
// Copy code
// a[j+1] = a[j] - a[j+1];  // a[j+1] = 17 - 2 = 15
// Now:

// css
// Copy code
// a[j] = 17, a[j+1] = 15
// Step 3: Subtract the new a[j+1] from a[j] and store the result in a[j]:

// css
// Copy code
// a[j] = a[j] - a[j+1];  // a[j] = 17 - 15 = 2
// Now:

// css
// Copy code
// a[j] = 2, a[j+1] = 15
// This effectively swaps a[j] and a[j+1] without using a temporary variable.

// 4. Sorting Process
// The array goes through multiple passes as per bubble sort logic. Let's trace through the iterations:

// Initial array: [15, 2, 7, 4, 1]
// Pass 1 (Outer loop i = 0):

// Compare 15 and 2 → Swap → [2, 15, 7, 4, 1]
// Compare 15 and 7 → Swap → [2, 7, 15, 4, 1]
// Compare 15 and 4 → Swap → [2, 7, 4, 15, 1]
// Compare 15 and 1 → Swap → [2, 7, 4, 1, 15]
// Pass 2 (Outer loop i = 1):

// Compare 2 and 7 → No Swap → [2, 7, 4, 1, 15]
// Compare 7 and 4 → Swap → [2, 4, 7, 1, 15]
// Compare 7 and 1 → Swap → [2, 4, 1, 7, 15]
// Pass 3 (Outer loop i = 2):

// Compare 2 and 4 → No Swap → [2, 4, 1, 7, 15]
// Compare 4 and 1 → Swap → [2, 1, 4, 7, 15]
// Pass 4 (Outer loop i = 3):

// Compare 2 and 1 → Swap → [1, 2, 4, 7, 15]
// Final Array: [1, 2, 4, 7, 15]

// 5. Printing the Sorted Array
// After sorting, the second for loop (for (int i = 0; i <= 4; i++)) prints each element of the sorted array:
// Copy code
// 1
// 2
// 4
// 7
// 15