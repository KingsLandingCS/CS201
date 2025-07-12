#include <iostream>
using namespace std;

class A
{
private:
    int number;

public:
    A()
    {
        number = 5;
    }
    void operator++()
    {
        number++;
        cout << "Number = " << number;
    }
};

int main()
{
    A obj;
    ++obj;
    return 0;
}