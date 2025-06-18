#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    myFile.open("test.txt", ios::out);
    myFile << "Hello ThornField";
    myFile.close();
    myFile.open("test.txt", ios::in);

    return 0;
}