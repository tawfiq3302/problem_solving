// question=> Write a program to ask the user to enter: Number
//Then Print the Number^2, Number^3, Number^4


#include <iostream>
#include <string>
using namespace std;
int main()
{
 
    short int number;
    cout << "this program to calculate the number^2 , number^3 and number^4\n";
    cout << "please enter a number\n";
    cin >> number;
   
    cout << "number^2 = " << number * number<<endl;
    cout << "number^3 = " << number * number * number<<endl;
    cout << "number^4 = " << number * number * number * number<<endl;
    return 0;
}
