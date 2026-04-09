//question=>  Write a program to calculate the circle area inscribed in an Isosceles Triangle, then print it on the screen.



#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{


    float AreaOf_Circle_inside_AnIsosceles_triangle, first_side, seconde_side;
    const float pi = 3.14;
    cout << "this program to calculate the area of circle inside an isosceles triangle \n";
    cout << "please enter the first side of triangle\n";
    cin >> first_side;
    cout << "please enter the seconde side \n";
    cin >> seconde_side;
    AreaOf_Circle_inside_AnIsosceles_triangle = pi * pow(seconde_side,2)  / 4 * ((2 * first_side - seconde_side) / (2 * first_side + seconde_side));   
    cout << "this is the area of circle " << floor(AreaOf_Circle_inside_AnIsosceles_triangle);


        return 0;
}
