//question =>    Write a program to calculate circle area circle described around an arbitrary triangle, 
//then print it on the screen.




#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{


    short area_of_circle_discribed_around_arbitrary_triangle, sideA, sideB, sideC,p;
    const float pi = 3.14;
    cout << "this program calculate the area of circl discribed around arbitrary\n\n";
    cout << "please enter the side 1 of triangle \n";
    cin >> sideA;
    cout << "please enter the side 2 of triangle \n";
    cin >> sideB;
    cout << "please enter the side 3 of triangle \n";
    cin >> sideC;
    p = (sideA + sideB + sideC) / 2;
    area_of_circle_discribed_around_arbitrary_triangle = pi * pow(sideA * sideB * sideC / (4 * sqrt(p * (p - sideA) * (p - sideB) * (p - sideC) )),2);

    cout << "this is the area of circle " << floor(area_of_circle_discribed_around_arbitrary_triangle);
        return 0;
}
