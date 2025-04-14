#include <iostream>
// #include <conio.h>

using namespace std;

int main()
{
    int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
    float avg;
    cout << "Enter Age of Student 1: ";
    cin >> age1;
    cout << "Enter Age of Student 2: ";
    cin >> age2;
    cout << "Enter Age of Student 3: ";
    cin >> age3;
    cout << "Enter Age of Student 4: ";
    cin >> age4;
    cout << "Enter Age of Student 5: ";
    cin >> age5;
    cout << "Enter Age of Student 6: ";
    cin >> age6;
    cout << "Enter Age of Student 7: ";
    cin >> age7;
    cout << "Enter Age of Student 8: ";
    cin >> age8;
    cout << "Enter Age of Student 9: ";
    cin >> age9;
    cout << "Enter Age of Student 10: ";
    cin >> age10;

    avg = (age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10) / 10;
    cout << "Average of Age: " << avg << endl;
    // getch();

    return 0;
}