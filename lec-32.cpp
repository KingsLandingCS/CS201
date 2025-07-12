#include <iostream>
using namespace std;

class A
{
private:
    int number;

public:
    A(int a)
    {
        number = a;
    }

    void operator-(A obj)
    {
        cout << "Answer = " << number - obj.number;
    }
};

int main()
{
    A obj1(10), obj2(5);
    obj1 - obj2;
    return 0;
}