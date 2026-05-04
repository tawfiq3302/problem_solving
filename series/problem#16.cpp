//question=>   Write a program to calculate rectangle area through diagonal and side area of rectangle
//and print it on the screen.




#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{
    
    short diagonal, side_ofRectangle;
    float area;
    cout << "this program calculate the area of rectangle by the diagonal and side of rectangle\n\n";
    cout << "please enter the side of rectangle\n";
    cin >> side_ofRectangle;
    cout << "please enter the diagonal\n";
    cin >> diagonal;

    area = side_ofRectangle * sqrt(pow(diagonal, 2) - pow(side_ofRectangle, 2));

    cout <<"area is " << area;
        return 0;
}
