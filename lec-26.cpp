#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    void setData()
    {
        id = 100;
        name = "Underwood";
    }
    void getData()
    {
        cout << "Student Id: " << id << endl;
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    Student s;
    s.setData();
    s.getData();
    return 0;
}