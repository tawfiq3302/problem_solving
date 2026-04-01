//question=>Write a program that asks the user to input the sides of a rectangle, 
//then calculates the area of ​​the rectangle and prints it.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    short int side1_of_rectangle, side2_of_rectangle, area_of_rectangle;
    cout << "please enter the length of the first side of the rectangle\n";
    cin >> side1_of_rectangle;
    cout << "please enter the length of the seconde side of the rectangle\n";
    cin >> side2_of_rectangle;
    cout << "\n";
    cout << "the area of rectangle is " << side1_of_rectangle * side2_of_rectangle;
    return 0;
}
