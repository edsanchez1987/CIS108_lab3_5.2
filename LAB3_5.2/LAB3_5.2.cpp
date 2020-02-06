//Programming Exercise 5-2
//

#include <iostream>
using namespace std;
float   radius, height, volume;
float PI = 3.1416;

int main()
{
    cout << "Enter radius of cylinder: ";         //ask for radius
    cin >> radius;

    cout << "\nEnter height of cylinder: ";
    cin >> height;

    volume = PI * radius * radius * height;  //volume of cylinder pi*r*r*h

    cout << "\nVolume of cylinder with radius: " << radius;
    cout << " and height of: " << height;
    cout << " is: " << volume << endl;

    return 0;

}