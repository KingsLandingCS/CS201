#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    void setData();
    void getData();
};
void Student::setData()
{
    id = 100;
    name = "Underwood";
}
void Student::getData()
{
    cout << "Student Id: " << id << endl;
    cout << "Student Name: " << name << endl;
}

int main()
{
    Student s;
    s.setData();
    s.getData();
    return 0;
}