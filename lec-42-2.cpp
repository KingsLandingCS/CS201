#include <iostream>
using namespace std;
template <class T>

class myClass
{
    static T a;

public:
    myClass()
    {
    }
    void display()
    {
        cout << a << endl;
    }
    ~myClass() {}
};
template <class T>
T myClass<T>::a = 35;

int main()
{
    myClass<int> obj;
    obj.display();
    return 0;
}