// Question=> Write a program to calculate Circle area inscribed in a square, then print it on the screen.


#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{

    float circle_Area_Inscribed_INsquare, area_ofsquare;
    const float pi = 3.14;
    cout << "please enter the area of square \n";
    cin >> area_ofsquare;
    circle_Area_Inscribed_INsquare =ceil( pi * pow(area_ofsquare,2) / 4);
    cout << "the area of circle inscribed the square is " << circle_Area_Inscribed_INsquare;

        return 0;
}
