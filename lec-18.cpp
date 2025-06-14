#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string designation;
    float salary;
    string name;
    ifstream myFile;
    myFile.open("emp.odt");
    if (!myFile)
    {
        cout << "File not found" << endl;
        exit(0);
    }
    myFile >> name >> designation >> salary;

    while (!myFile.eof())
    {
        cout << "\n\n Name: " << name << "\tDesignation: " << designation << "\tSalary: " << salary << endl;
        myFile >> name >> designation >> salary;
    }

    myFile.close();

    return 0;
}