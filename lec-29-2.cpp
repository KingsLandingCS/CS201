#include <iostream>
using namespace std;

class B; // We declare class here so the compiler knows that Class B is declared when it see the B argument at the line 15, we do this because the Class B is coming after the Class A.
class A
{
private:
    int number;

public:
    A()
    {
        number = 5;
    }
    friend void addNumber(A, B);
};

class B
{
private:
    int number;

public:
    B()
    {
        number = 5;
    }
    friend void addNumber(A, B);
};

void addNumber(A obj1, B obj2)
{

    cout << obj1.number + obj2.number << endl;
};

int main()
{

    A obj1;
    B obj2;
    addNumber(obj1, obj2);

    return 0;
}