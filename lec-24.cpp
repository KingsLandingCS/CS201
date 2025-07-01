#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numberOfStudent, totalAges = 0, *ptr1, *ptr2;
    cout << "How many students ages you want to store? ";
    cin >> numberOfStudent;
    ptr1 = (int *)malloc(numberOfStudent * sizeof(int)); // You're multiplying: numberOfStudent → total number of integers you want to store (e.g., 5 students), sizeof(int) → size (in bytes) of one integer (typically 4 bytes on most systems)
    // returns a void* → a generic pointer (doesn’t know what type of data it’s pointing to).But you want to store int values in that memory.So you cast the pointer to the right type
    // Hey, treat this generic block of memory as an int* — a pointer to integers
    if (ptr1 == NULL)
    {
        cout << "Dynamic Memory Not Allocated" << endl;
        return 1;
    }

    // 📌 What is ptr2?
    // ptr2 is a pointer to an int, which means it stores the address of a memory location where an int lives.

    //     🧠 What is *ptr2?
    // *ptr2 is the value stored at the memory location that ptr2 points to.
    // This is called dereferencing the pointer.
    ptr2 = ptr1;
    for (int i = 1; i <= numberOfStudent; i++)
    {
        cout << "Enter Age of Student " << i << ": ";
        cin >> *ptr2;
        totalAges = totalAges + *ptr2;
        ptr2++;
    }

    //     ▶️ Loop Iteration Breakdown
    // Let’s go step-by-step through what happens inside the loop.

    // ✅ First Iteration: i = 1
    // cout << "Enter Age of Student " << i << ": ";
    // cin >> *ptr2;
    // totalAges = totalAges + *ptr2;
    // ptr2++;
    // *ptr2 means: store the age at the memory address ptr2 is pointing to

    // Let’s say user inputs 18
    // So *ptr2 = 18

    // totalAges = 0 + 18 = 18

    // ptr2++ now moves to the next memory address, i.e., [1]

    cout << "Average Age: " << totalAges / numberOfStudent;
    free(ptr1);
    ptr2 = NULL;

    return 0;
}