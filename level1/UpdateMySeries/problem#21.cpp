// Question: Write a function to calculate the area of a circle given its circumference.
// Note: circumference must be a positive value

#include <iostream>
#include <string>
#include<cmath>
using namespace std;


float AreaOfCircleByCircumference( float Circumference)
{
    const float pi = 3.14;

    return pow(Circumference, 2) / (pi * 4);
}


int main()
{
    float circumference,area ;
    cout << "please enter the circumference of circle\n";
    cin >> circumference;
    area = AreaOfCircleByCircumference(circumference);
    cout<<"area = " << area;



    return 0;

}
