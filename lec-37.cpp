#include <iostream>
using namespace std;

class myClass
{
private:
    int id;
    string name;

public:
    myClass()
    {
        id = 0;
        name = " ";
    }
    // Extraction Operator Overload
    friend istream &operator>>(istream &in, myClass &obj);
    // Insertion Operator Overload
    friend ostream &operator<<(ostream &out, myClass &obj);
};

istream &operator>>(istream &in, myClass &obj)
{
    cout << "Enter Your ID: " << endl;
    in >> obj.id;
    cout << "Enter Your Name: " << endl;
    in >> obj.name;

    return in;
}

ostream &operator<<(ostream &out, myClass &obj)
{
    out << "Your ID: " << obj.id << endl;
    out << "Your Name: " << obj.name << endl;
    return out;
}

int main()
{
    myClass obj;
    cin >> obj;
    cout << obj;
    return 0;
}