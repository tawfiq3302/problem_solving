// Question=> Write a program to calculate Circle area inscribed in a square, then print it on the screen.


#include <iostream>
#include <string>
using namespace std;
int main()
{
   
    float circle_Area_Inscribed_INsquare, area_ofsquare;
    const float pi = 3.14;
    cout << "please enter the area of square \n";
    cin >> area_ofsquare;
    circle_Area_Inscribed_INsquare = pi * area_ofsquare * area_ofsquare / 4;
    cout << "the area of circle inscribed the square is " << circle_Area_Inscribed_INsquare;

    return 0;
}
