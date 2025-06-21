#include <iostream>
using namespace std;

struct Student
{
    int id;
    float marks;
    string name;
} S[5];

void takeInput()
{

    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter Student Id:" << endl;
        cin >> S[i].id;
        cout << "Enter Student Name:" << endl;
        cin >> S[i].name;
        cout << "Enter Student Marks: " << endl;
        cin >> S[i].marks;
    }
}

void displayOutput()
{
    for (int i = 0; i <= 4; i++)
    {
        
        cout << "Student Id: " << S[i].id << endl;
        cout << "Student Name: " << S[i].name << endl;
        cout << "Student Marks: " << S[i].marks << endl;
    }
}

int main()
{
    takeInput();
    displayOutput();
    return 0;
}