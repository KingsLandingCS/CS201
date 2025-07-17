#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
    }
    void display()
    {
        cout << "Class A Function" << endl;
    }
    ~A()
    {
    }
};

class B
{
private:
    A obj;

public:
    B()
    {
    }

    void display()
    {
        obj.display();
        cout << "Class B Function" << endl;
    }
    ~B()
    {
    }
};

int main()
{
    B obj;
    obj.display();
    return 0;
};