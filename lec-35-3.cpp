#include <iostream>
using namespace std;

int main()
{
    char buffer[20];
    cout << "Enter Your Name: ";
    cin.getline(buffer, 20);
    cout << "Your Name: " << buffer << endl;

    return 0;
}
