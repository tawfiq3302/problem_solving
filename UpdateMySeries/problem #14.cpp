// Question: Write a program to swap two numbers using a temporary variable and print the values before and after swapping.


#include <iostream>

using namespace std;


void PrintNumbers(short number1, short number2)
{
    cout << number1 << endl;
    cout << number2 << endl<<endl;
}

void PrintSwappedNumbers(short num1,short num2)
{
    cout << num1 << endl;
    cout << num2 << endl;

}



int main()
{
    short number1, number2,temp;
    cout << "please enter number 1\n";
    cin >> number1;
    cout << "please enter number 2\n";
    cin >> number2;
    cout << endl;

    PrintNumbers(number1, number2);

    temp = number1;
    number1 = number2;
    number2 = temp;
    PrintSwappedNumbers(number1, number2);

    return 0;

}
