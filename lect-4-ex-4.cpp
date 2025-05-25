#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string gender;
    cout << "Enter your gender: ";
    cin >> gender;

    // Convert input to lowercase
    transform(gender.begin(), gender.end(), gender.begin(), ::tolower);

    if (gender == "female")
    {
        cout << "You're female" << endl;
    }
    else
    {
        cout << "You're male" << endl;
    }
    return 0;
}
