#include <iostream>
using namespace std;

class A
{
private:
    int number;

public:
    A()
    {
        number = 0;
    }
    friend void addNumber(A);
};

void addNumber(A obj)
{
    obj.number += 5;
    cout << obj.number << endl;
};

int main()
{

    A obj;
    addNumber(obj);

    return 0;
}