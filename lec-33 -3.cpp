#include <iostream>
using namespace std;

class A
{
private:
    string name;

public:
    A(string name)
    {
        this->name = name;
    }
    void operator=(A obj)
    {
        name = obj.name;
    }
    void display()
    {
        cout << "Name = " << name;
    }
};

int main()
{
    A obj1("Khizar Shahal"), obj2("Zubair UnderWood");
    cout << "Obj1 Name: ";
    obj1.display();
    cout << endl;
    cout << "Obj2 Name: ";
    obj2.display();
    cout << endl;

    cout << "After Assign Name obj1 to obj2: ";
    obj2 = obj1;
    obj2.display();
    cout << endl;
    return 0;
}