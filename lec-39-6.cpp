#include <iostream>
using namespace std;

class myClass
{
private:
    int a;

public:
    myClass(int num)
    {
        a = num;
    }

    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    myClass obj1(38);
    myClass obj2 = obj1;
    obj1.display();
    obj2.display();

    return 0;
}