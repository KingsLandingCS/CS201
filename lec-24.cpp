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

    // Calculates the average age by dividing the sum (totalAges) by the number of students.
    // Then, it prints the result to the screen.
    // 🚨 Note: Since both totalAges and numberOfStudent are int, this does integer division (e.g., 35 / 4 = 8).
    cout << "Average Age: " << totalAges / numberOfStudent;

    // Releases the dynamically allocated memory created by malloc.
    //  You must do this to prevent memory leaks in C/C++.
    //  If you forget this, the memory stays allocated until your program ends. In larger programs, this can eat up memory over time.
    free(ptr1);

    // After freeing the memory, we make ptr2 point to NULL (i.e., nowhere).
    // This is good practice to avoid dangling pointers (i.e., pointers pointing to deleted memory).
    ptr2 = NULL;

    return 0;
}

// ⚠️ 2. What is a Memory Leak?
// ❗ Definition:
// A memory leak happens when you allocate memory on the heap but never free it, and you also lose the pointer to it.
// 📌 Why it's bad:
// Over time, memory leaks can use up all available RAM.
// Your program becomes slow or even crashes in large applications.

// ⚠️ 3. What is a Dangling Pointer?
// ❗ Definition:
// A dangling pointer is a pointer that still points to memory that has already been freed.
// 📌 Why it's dangerous:
// Accessing it may cause your program to crash or corrupt data.
// It's like pointing to a house that has been demolished.
// Even though ptr still exists, the memory it pointed to no longer belongs to your program.
// ✅ To fix: Always set the pointer to NULL after free.