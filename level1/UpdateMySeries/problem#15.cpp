// Question: Write a function to calculate the area of a rectangle using two sides and return the result.


#include <iostream>
#include <string>
#include<cmath>
using namespace std;


float AreaOfRectangle(float firstSide,float secondSide)
{

    return firstSide * secondSide;
}


int main()
{
    float firstside, secondside;
    cout << "please enter the first side \n";
    cin >> firstside;
    cout << "please enter the seconde side \n";
    cin >> secondside;

    cout <<"Area = " << AreaOfRectangle(firstside, secondside);


    return 0;

}
