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
