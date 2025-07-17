#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
};

class myClass
{
private:
    Student s;

public:
    myClass()
    {
        s.id = 100;
        s.name = "Khizar";
    }

    void display()
    {
        cout << "Student ID: " << s.id << endl;
        cout << "Student Name: " << s.name << endl;
    }
    ~myClass()
    {
    }
};
int main()
{
    myClass obj;
    obj.display();
    return 0;
};