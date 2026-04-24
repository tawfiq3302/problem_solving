// Question: Write a function to calculate the area of a circle inscribed in an isosceles triangle given its sides.
// Note: (2 * sideA) must be greater than sideB



#include <iostream>
#include <string>
#include<cmath>
using namespace std;


float AreaOfCircleInscribedOnIsoscelesTriangle( float sideA,float sideB)
{
    const float pi = 3.14;

    return pi * pow(sideB, 2) / 4 * ((2 * sideA - sideB) / (2 * sideA + sideB));
}


int main()
{
    float sidea,sideb,area ;
    cout << "please enter the side a of triangle\n";
    cin >> sidea;
    cout << "please enter the side b of triangle\n";
    cin >> sideb;
    area = AreaOfCircleInscribedOnIsoscelesTriangle(sidea,sideb);
    cout<<"area = " << area;



    return 0;

}
