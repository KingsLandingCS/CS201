#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Random Writing in file;
    fstream myFile;
    myFile.open("test.txt", ios::out); // writing mode
    myFile.write("Hello World!", 12);
    long position = myFile.tellp();
    cout << "Position: " << position << endl;
    myFile.seekp(position - 6, ios::beg);
    myFile.write(" UnderWood", 10);
    myFile.close();

    return 0;
}