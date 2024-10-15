#include <iostream>
using namespace std;

int main()
{
    int amirAge, amaraAge;

    cout << "Enter the Age of Amir: ";
    cin >> amirAge;
    cout << "Enter Amara's age: ";
    cin >> amaraAge;

    if (amirAge > amaraAge)
    {
        cout << "Amir is older than Amara\n";
    }
    else
    {
        cout << "Amara is older than Amir\n";
    }
}