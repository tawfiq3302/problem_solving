// question => Write a program to calculate circle area then print it on the screen.


#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{
       
    short circle,radius_of_circle;
    const float pi = 3.14;

    cout << "this program calculate the area of of circle by the radius of the circle\n\n";
    cout << "please enter the radius of circle\n";
    cin >> radius_of_circle;
    circle =ceil( pi * pow(radius_of_circle, 2));
    cout << circle;
        return 0;
}
