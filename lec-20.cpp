#include <iostream>
using namespace std;

struct Student
{
    int id;
    float marks;
    string name;
} S;

int main()
{
    cout << "Enter Student Id:" << endl;
    cin >> S.id;
    cout << "Enter Student Name:" << endl;
    cin >> S.name;
    cout << "Enter Student Marks: " << endl;
    cin >> S.marks;

    cout << "Student Id: " << S.id << endl;
    cout << "Student Name: " << S.name << endl;
    cout << "Student Marks: " << S.marks << endl;
    return 0;
}