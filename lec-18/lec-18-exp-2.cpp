#include <iostream>
#include <fstream>
#include <string>
// #include <conio.h>
#include <fstream>
using namespace std;

int main()
{
    // Reading File
    int id;
    float salary;
    string name;
    ifstream myFile;
    myFile.open("data.txt");
    if (!myFile)
    {
        cout << "Error opening file" << endl;
        exit(0);
    }
    else
    {
        myFile >> id >> name >> salary;
        while (!myFile.eof())
        {
            cout << " ID: " << id << "\tName: " << name << "\tSalary: " << salary << endl;
            myFile >> id >> name >> salary;
        }
        myFile.close();
    }

    // getch();
    return 0;
}
