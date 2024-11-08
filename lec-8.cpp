#include <iostream>
using namespace std;

main()
{
    int marks;
    cout << " Enter Marks :";
    cin >> marks;
    if (marks >= 85)
    {
        cout << " A+ Grade" << endl;
    }
    else if (marks >= 75)
    {
        cout << " A Grade" << endl;
    }
    else if (marks >= 65)
    {
        cout << " B+ Grade" << endl;
    }
    else if (marks >= 55)
    {
        cout << " B Grade" << endl;
    }
    else if (marks >= 45)
    {
        cout << " C Grade" << endl;
    }
    else
    {
        cout << " Fail" << endl;
    }

    return 0;
}