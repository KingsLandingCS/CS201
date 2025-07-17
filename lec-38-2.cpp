#include <iostream>
using namespace std;

void nonStaticFun()
{
    int i = 1;
    i++;
    cout << i << " " << endl;
};

void staticFun()
{
    static int i = 1;
    i++;
    cout << i << " " << endl;
}
int main()
{
    cout << "Calling non static function: " << endl;
    nonStaticFun();
    nonStaticFun();
    nonStaticFun();

    cout << "Calling static function: " << endl;
    staticFun();
    staticFun();
    staticFun();
    return 0;
}