#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter your AMount: ";
    cin >> amount;
    if (amount >= 500)
    {
        cout << "Amount greater or equal to 500" << endl;
    }
    else
    {
        cout << "Amount is lesser than 500" << endl;
    }

    return 0;
}