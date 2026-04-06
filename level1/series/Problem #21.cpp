// question=> Write a program to calculate circle area along the circumference, then print it on the screen.


#include <iostream>
#include <string>
using namespace std;
int main()
{
   
    float circle_Area_byCircumference,circumference ;
    const float pi = 3.14;
    cout << "please enter circumference to calculate the area circle:\n";
    cin >> circumference;
    circle_Area_byCircumference = (circumference * circumference) /( pi * 4);
    cout << "this the area of circle " << circle_Area_byCircumference;

    return 0;
}
