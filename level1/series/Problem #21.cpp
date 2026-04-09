// question=> Write a program to calculate circle area along the circumference, then print it on the screen.


#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{


    float circle_Area_byCircumference, circumference;
    const float pi = 3.14;
    cout << "please enter circumference to calculate the area circle:\n";
    cin >> circumference;
    circle_Area_byCircumference = pow(circumference,2)  / (pi * 4);
    cout << "this the area of circle " <<floor( circle_Area_byCircumference);


        return 0;
}
