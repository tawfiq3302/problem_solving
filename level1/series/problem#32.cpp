// question => Write a program to ask the user to enter: 1) Number 2)M
//Then Print the Number^M


#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{

    short number, value_of_exponent;
    cout << "please enter the number \n";
    cin >> number;
    cout << "please enter the value of exponent M\n";
    cin >> value_of_exponent;
    cout << "the number^M is " << pow(number, value_of_exponent);
        return 0;
}
