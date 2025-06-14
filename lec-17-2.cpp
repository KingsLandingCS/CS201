#include <iostream>
#include <string.h>
using namespace std;

main()
{
    char str1[] = "Zubi";
    char str2[] = "Underwood";
    cout << "Before Copy: ";
    cout << " " << str1 << "\t" << str2 << endl;
    strcpy(str1, str2);
    cout << "After Copy: ";
    cout << " " << str1 << "\t" << str2 << endl;

    // getch();
    return 0;
}