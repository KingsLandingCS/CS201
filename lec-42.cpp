#include <iostream>
using namespace std;
template <class T>

class myClass
{
    T a;

public:
    myClass(T value)
    {
        a = value;
    }
    void display()
    {
        cout << a << endl;
    }
    ~myClass() {}
};

int main()
{
    myClass<string> obj("Virtual University");
    obj.display();
    return 0;
}