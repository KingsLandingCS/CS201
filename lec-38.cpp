#include <iostream>
using namespace std;

ostream &newLine(ostream &out)
{
    out << "\n";
    return out;
};

ostream &Tab(ostream &out)
{
    out << "\t";
    return out;
};

int main()
{
    cout << newLine << Tab << "Zubair UnderWood" << endl;
    return 0;
}