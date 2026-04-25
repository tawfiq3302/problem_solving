// Question: Write a function to calculate the area of a circle circumscribed around a triangle given its three sides.
// Note: the sum of any two sides must be greater than the third side


#include <iostream>
#include <string>
#include<cmath>
using namespace std;


float AreaOfCircleDescribedAroundArbitraryTriangle ( float a,float b,float c)
{
    float p = (a + b + c) / 2;
    const float pi = 3.14;

    return pi * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
}


int main()
{
    float sidea,sideb,sidec,area ;
    cout << "please enter the side a of triangle\n";
    cin >> sidea;
    cout << "please enter the side b of triangle\n";
    cin >> sideb;
    cout << "please enter the side c of triangle\n";
    cin >> sidec;
    area = AreaOfCircleDescribedAroundArbitraryTriangle(sidea,sideb,sidec);
    cout<<"area = " << area;



    return 0;

}
