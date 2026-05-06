// Question: Write a function to calculate the area of a circle given the radius.
// Note: radius must be a positive value


#include <iostream>
#include <string>
#include<cmath>
using namespace std;


float AreaOfCircle( float radius)
{
    const float pi = 3.14;
    return pi * pow(radius, 2);
   
}


int main()
{
    float radius,area ;
    cout << "please enter the radius of circle\n";
    cin >> radius;
    area = AreaOfCircle(radius);
    cout<<"area = " << area;



    return 0;

}
