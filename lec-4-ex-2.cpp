#include <iostream>
using namespace std;

int main()
{

    // 7845 % 10 = 5, when we take Mod any value that has multiple numbers in it, it will return the last digit of that particular value
    // 7845/10 = 784

    int a;
    cout << "Enter 4 Digit Value: ";
    cin >> a;
    cout << "4 Digit is: " << endl;
    cout << a % 10 << ", ";
    a = a / 10; // 784
    cout << a % 10 << ", ";
    a = a / 10; // 78
    cout << a % 10 << ", ";
    a = a / 10; // 7
    cout << a % 10 << endl;

    return 0;
}