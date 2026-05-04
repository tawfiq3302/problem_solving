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
   
    cout << "number^2 = " << pow(number,2) <<endl;
    cout << "number^3 = " << pow(number,3)<<endl;
    cout << "number^4 = " << pow(number,4)<<endl;
    return 0;
}
