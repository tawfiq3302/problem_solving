// Question: Write a function to calculate the power of a number given the base and the exponent.


#include <iostream>
#include <string>
#include<cmath>
using namespace std;


void ExponentsNumbers(float number ,float exponentsofnumber)
{
    cout << "Number: " << number << endl;
    cout << "Exponent of number " << exponentsofnumber << endl;
    cout << number << "^" << exponentsofnumber << " = " << pow(number, exponentsofnumber) << endl;
    
}


int main()
{
    float number, ExponentNumbers;
    cout << "please enter number\n";
    cin >> number;
    cout << "please enter Exponents of Numbers\n";
    cin >> ExponentNumbers;
    ExponentsNumbers(number,ExponentNumbers);
   

    return 0;

}
