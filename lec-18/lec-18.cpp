#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Reading File
    int id;
    float salary;
    string name;
    ifstream myFile;
    myFile.open("../lec-18/data.txt");

    // Check if the file is opened successfully
    if (!myFile)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    // Read until the end of the file or until a read fails
    while (myFile >> id >> name >> salary)
    {
        cout << "id: " << id << "\t name: " << name << "\t salary: " << salary << endl;
    }

    myFile.close();
    return 0;
}
