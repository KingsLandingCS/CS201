#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Declare file streams for both files
    ifstream cppFile, infoFile;

    // Open the lec-18.cpp file
    cppFile.open("lec-18/lec-18.cpp");
    if (!cppFile)
    {
        cout << "Error opening lec-18.cpp file." << endl;
        return 1;
    }

    // Read and output the content of lec-18.cpp
    string line;
    cout << "Contents of lec-18.cpp:\n";
    while (getline(cppFile, line))
    {
        cout << line << endl;
    }

    cppFile.close(); // Close the lec-18.cpp file

    // Open the info.txt file
    infoFile.open("lec-18/info.txt");
    if (!infoFile)
    {
        cout << "Error opening info.txt file." << endl;
        return 1;
    }

    // Read and output the content of info.txt
    cout << "\nContents of info.txt:\n";
    while (getline(infoFile, line))
    {
        cout << line << endl;
    }

    infoFile.close(); // Close the info.txt file

    return 0;
}
