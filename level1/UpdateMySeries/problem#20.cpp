// Question: Write a function to calculate the area of a circle inscribed in a square given the side of the square.
// Note: side of square must be a positive value



#include <iostream>
#include <string>
#include<cmath>
using namespace std;


float AreaOfCircleInscribedInSquare( float sideofsquare)
{
    const float pi = 3.14;
    return pi * pow(sideofsquare, 2) / 4;
   
}


int main()
{
    float sideofsquare,area ;
    cout << "please enter the diameter of circle\n";
    cin >> sideofsquare;
    area = AreaOfCircleInscribedInSquare(sideofsquare);
    cout<<"area = " << area;



    return 0;

}
