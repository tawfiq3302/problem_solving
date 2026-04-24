// Question: Write a function to calculate the area of a rectangle given one side and the diagonal.
// Note: diagonal must be greater than side A


#include <iostream>
#include <string>
#include<cmath>
using namespace std;


float AreaOfRectangleThroughDiagonal(float SideA,float diagonal)
{

    return SideA * sqrt(pow(diagonal, 2) - pow(SideA, 2));
   
}


int main()
{
    float sideA, diagonal ,area ;
    cout << "please enter side a\n";
    cin >> sideA;
    cout << "please enter the diagonal\n";
    cin >> diagonal;
    area = AreaOfRectangleThroughDiagonal(sideA,diagonal);
    cout << area;



    return 0;

}
