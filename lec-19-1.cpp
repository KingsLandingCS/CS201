#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;
    fstream myFile;
    myFile.open("test.txt", ios::out);
    myFile << "Hello ThornField";
    myFile.close();
    myFile.open("test.txt", ios::in);
    myFile.seekg(6, ios::beg);
    long position = myFile.tellg();
    cout << "Position: " << position << endl;
    getline(myFile, str);
    cout << str << endl;
    myFile.close();

    return 0;
}