// Question: Create a program that demonstrates the difference between a procedure (void function)
//and a function that returns a value.



#include <iostream>
#include <string>
#include<cmath>
using namespace std;


void myProcedureSum() 
{
    int number1, number2;
    cout << "please enter number 1\n";
    cin >> number1;
    cout << "\nplease enter number 2\n";
    cin >> number2;
    cout << "****************\n";
    cout << number1 + number2<<endl<<endl;
}

int MyFunctionSum()
{
    int number1, number2;
    cout << "please enter number 1\n";
    cin >> number1;
    cout << "\nplease enter number 2\n";
    cin >> number2;
    cout << "***************\n";
    return number1 + number2;


}

int main()
{
  
    myProcedureSum();
    cout << MyFunctionSum();
    return 0;
} 
