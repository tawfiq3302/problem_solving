// Question: Write a program to store three numbers in an array and calculate their average.


#include <iostream>
#include <string>
using namespace std;



int main()
{
    float num[3];

    cout << "please enter num1\n";
    cin >> num[0];
    cout << "please enter num2\n";
    cin >> num[1];
    cout << "please enter num3\n";
    cin >> num[2];

    cout << "average = " << (num[0] + num[1] + num[2]) / 3;
    return 0;

}

