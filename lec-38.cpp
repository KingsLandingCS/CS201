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
ostream &backSpace(ostream &out)
{
    out << "\b";
    return out;
};
ostream &Beep(ostream &out)
{
    out << "\a";
    return out;
};

int main()
{
    cout << newLine << Tab << backSpace << Beep << "Zubair UnderWood" << endl;
    return 0;
}