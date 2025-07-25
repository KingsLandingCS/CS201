#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    // Student(); => constructor overloading
    Student(int i, string n);
    void setData();
    void getData();
    ~Student(); // Destructor (life cycle hook)
};

Student::Student(int i, string n)
{
    id = i;
    name = n;
}

void Student::setData()
{
    id = 100;
    name = "Khizar";
}

void Student::getData()
{
    cout << "Student Id: " << id << endl;
    cout << "Student Name: " << name << endl;
}

Student::~Student() {}

int main()
{
    Student s(100, "Ali");
    s.setData();
    s.getData();

    return 0;
}