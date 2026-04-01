//question=> Write a program to ask the user to enter: Number1 , Number2  Then print the two numbers,
//then Swap the two numbers and print them


#include <iostream>
#include <string>
using namespace std;
int main()
{

    short int number1, number2,switching_factor ;
    cout << "please enter number 1\n";
    cin >> number1;
    cout << "please enter number 2\n";
    cin >> number2;
    cout << "\n";

    cout <<"number 1 =" << number1 << endl;
    cout <<"number 2 =" << number2 << endl;
    cout << "the swap of these numbers is\n";
    switching_factor = number1;
    number1 = number2;
    number2 = switching_factor;
    cout << "number 1 =" << number1 << endl;
    cout << "number 2 =" << number2 << endl;

 

    return 0;
}

