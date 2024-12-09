#include <iostream>
#include <fstream>
#include <string>
// #include <conio.h>
#include <fstream>
using namespace std;

int main()
{
    // Writing File
    string msg = "Welcome To VU";
    ofstream myFile;
    myFile.open("vu.txt", ios::app);
    myFile << msg << endl;
    myFile.close();

    // getch();
    return 0;
}
