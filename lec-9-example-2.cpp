#include <iostream>
// #include <conio.h>
using namespace std;

void pow()
{
    int number;
    int limit;
    int result = 1;
    cout << "Enter Number : " << endl;
    cin >> number;
    cout << "Power Limit : " << endl;
    cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        result *= number;
    }
    cout << "Result is : " << result << endl;
}

int main()
{
    pow();
    // getch();
    return 0;
}