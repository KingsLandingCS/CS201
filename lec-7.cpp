#include <iostream>
using namespace std;

main()
{
    // while loop - first check condition
    //  do while loop - atleast executes the block qoute once before checking the condition
    //  for loop - first checks the conditon

    char choice;
    do
    {
        cout << " Hello World!" << endl;
        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
