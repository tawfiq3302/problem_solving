//Write a program that tells the user to input the base length and height of the triangle, 
//and then prints the triangle's area.


#include <iostream>
#include <string>
using namespace std;
int main()
{
    float base_length, height, area_of_triangle;
   
    cout << "please enter the base length of triangle:\n";
    cin >> base_length;
    cout << "please enter the height of triangle:\n";
    cin >> height;
    area_of_triangle = .5 * base_length * height;
    cout << "this is the area of triangle " << area_of_triangle << endl;;
    return 0;
}
