#include <iostream>
using namespace std;

template <class T>
class myClass
{
    T a;

public:
    myClass() { a = 100; }

    friend void display(myClass<T> &obj)
    {
        cout << obj.a << endl;
    }

    ~myClass() {}
};

int main()
{
    myClass<int> obj;
    display(obj);
    return 0;
}
