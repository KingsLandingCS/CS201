#include <iostream>
#define PI 3.14

using namespace std;

int main()
{
    float radius, diameter, circumference, area;

    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    diameter = radius * 2;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    cout << "The diameter of the circle is: " << diameter << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is : " << area << endl;
}
