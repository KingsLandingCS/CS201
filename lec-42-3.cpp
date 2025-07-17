#include <iostream>
using namespace std;
template <class T>

class myClass
{
    T a;

public:
    myClass()
    {
        a = 100;
    }
    friend void display();

    ~myClass() {}
};

void display()
{
    myClass<int> obj;
    cout << a;
}

int main()
{
    display();
    return 0;
}