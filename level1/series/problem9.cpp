//question=> write program to ask user to enter three numbers and print the sum of these numbers


#include <iostream>
#include <string>
using namespace std;
int main()
{

    short int numberA, numberB,numberC;
    cout << "please enter number A\n";
    cin >> numberA;
    cout << "please enter number B\n";
    cin >> numberB;
    cout << "please enter number C\n";
    cin >> numberC;
    cout << "\n";

    cout << "the sum of three numbers is " << numberA + numberB + numberC << endl;

    return 0;
}
