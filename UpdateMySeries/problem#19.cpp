// Question: Write a function to calculate the area of a circle using the diameter.
// Note: diameter must be a positive value


#include <iostream>
#include <string>
#include<cmath>
using namespace std;


float AreaOfCircleByDiameter( float diameter)
{
    const float pi = 3.14;
    return pi * pow(diameter, 2) / 4;
   
}


int main()
{
    float diameter,area ;
    cout << "please enter the diameter of circle\n";
    cin >> diameter;
    area = AreaOfCircleByDiameter(diameter);
    cout<<"area = " << area;



    return 0;

}
