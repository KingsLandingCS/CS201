#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string msg = "Welcome to VU!";
    ofstream myFile;
    myFile.open("vu.txt", ios::app);
    myFile << msg << endl;
    myFile.close();

    return 0;
}