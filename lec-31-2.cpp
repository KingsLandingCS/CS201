#include <iostream>
#include <string.h>
using namespace std;

class addString
{
private:
    char str1[25];
    char str2[25];

public:
    addString()
    {
        strcpy(str1, "Zubair");
        strcpy(str2, " UnderWood");
    }

    void operator+()
    {
        cout << "New String: " << strcat(str1, str2) << endl;
    }
};

int main()
{
    addString obj;
    +obj;
    return 0;
}