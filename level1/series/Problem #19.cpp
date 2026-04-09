// question=> Write a program to calculate circle area through diameter, then print it on the screen.


#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{

    float circle_AreaBy_Diameter, diameter;
    const float pi = 3.14;
    cout << "please enter the diameter of the circle:\n";
    cin >> diameter;
    circle_AreaBy_Diameter = ceil(pi * pow(diameter,2) / 4);
    cout << "the area of circle by daimeter is " << circle_AreaBy_Diameter;
        return 0;
}
