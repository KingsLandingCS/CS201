#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    int b = 8;
    // 12 = 1100
    // 8 = 1000
    // 12 ~ 8 = 1100 ~ 1000 = 1100
    cout << "~ (NOT) Bit Wise Operation: " << (~b) << endl;

    return 0;
}