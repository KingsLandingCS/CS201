#include <iostream>
using namespace std;

class mainClass
{
public:
    mainClass()
    {
    }

    class subClass
    {
    public:
        subClass() {}

        void display()
        {
            cout << "Main Class Function" << endl;
        }

        ~subClass() {}
    };

    void display()
    {
        cout << "main Class Function" << endl;
    }

    ~mainClass() {}
};

int main()
{
    mainClass obj;
    mainClass::subClass obj1;
    obj.display();
    obj1.display();
    return 0;
};