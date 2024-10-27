#include <iostream>
using namespace std;

main()
{
    // while loop - first check condition
    //  do while loop - atleast executes the block qoute once before checking the condition
    //  for loop - first checks the conditon

    int start = 1;
    do
    {
        cout << " Hello World!" << endl;
        cout << "Loop no. :" << start << endl;
        start++;
    } while (start <= 5);
}
