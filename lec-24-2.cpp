#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numberOfStudent, totalAges = 0, *ptr1, *ptr2;
    cout << "How many students ages you want to store? ";
    cin >> numberOfStudent;
    ptr1 = (int *)malloc(numberOfStudent * sizeof(int));

    if (ptr1 == NULL)
    {
        cout << "Dynamic Memory Nor Allocated" << endl;
        return 1;
    }

    ptr2 = ptr1;
    for (int i = 1; i <= numberOfStudent; i++)
    {
        cout << "Enter Age of Student " << i << ": ";
        cin >> *ptr2;
        totalAges = totalAges + *ptr2;
        ptr2++;
    }

    cout << "Average Age: " << totalAges / numberOfStudent << endl;
    free(ptr1);
    ptr2 = NULL;

    return 0;
}
