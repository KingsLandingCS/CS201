#include <iostream>
using namespace std;

int main()
{
    int AmirAge, AmaraAge;
    cout << "Please enter Amir's age: ";
    cin >> AmirAge;
    cout << "Please enter Amara's age: ";
    cin >> AmaraAge;

    if (AmirAge > AmaraAge)
    {
        cout << "Amir is older" << endl;
    }
    else
    {
        cout << "Amara is older" << endl;
    }

    return 0;
}