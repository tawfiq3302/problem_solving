// Question: Write a function to print the square, cube, and fourth power of a number.




#include <iostream>
#include <string>
#include<cmath>
using namespace std;


void ExponentsNumbers(float number)
{
    cout << "Number: " << number << endl;
    cout << number << "^2 is " << pow(number, 2) << endl;
    cout << number << "^3 is " << pow(number, 3) << endl;
    cout << number << "^4 is " << pow(number, 4) << endl;
}


int main()
{
    float number;
    cout << "please enter number\n";
    cin >> number;
    ExponentsNumbers(number);
   

    return 0;

}
