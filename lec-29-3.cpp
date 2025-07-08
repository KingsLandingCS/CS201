#include <iostream>
using namespace std;

class B;
class A
{
private:
    int number;

public:
    A()
    {
        number = 10;
    }
    friend class B;
};

class B
{
private:
    int number;
    A obj;

public:
    B()
    {
        number = 15;
    }
    void addNumber()
    {
        cout << obj.number + number << endl;
    }
};

int main()
{
    B obj;
    obj.addNumber();

    return 0;
}