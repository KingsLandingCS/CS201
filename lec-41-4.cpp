#include <iostream>
using namespace std;
template <class T>
class myClass
{
public:
    myClass() {}

    void display(T msg)
    {
        cout << msg << endl;
    }
    ~myClass() {}
};

int main()
{
    myClass<string> obj;
    obj.display("Hello World!");
    return 0;
}
