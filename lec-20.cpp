#include <iostream>
using namespace std;

struct Student
{
    int id;
    float marks;
    string name;
} S1, S2;

int main()
{
    cout << "Enter Student Id:" << endl;
    cin >> S1.id;
    cout << "Enter Student Name:" << endl;
    cin >> S1.name;
    cout << "Enter Student Marks: " << endl;
    cin >> S1.marks;

    cout << "Enter Student Id:" << endl;
    cin >> S2.id;
    cout << "Enter Student Name:" << endl;
    cin >> S2.name;
    cout << "Enter Student Marks: " << endl;
    cin >> S2.marks;

    cout << "Student Id: " << S1.id << endl;
    cout << "Student Name: " << S1.name << endl;
    cout << "Student Marks: " << S1.marks << endl;

    cout << "Student Id: " << S2.id << endl;
    cout << "Student Name: " << S2.name << endl;
    cout << "Student Marks: " << S2.marks << endl;
    return 0;
}