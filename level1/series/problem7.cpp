// question=> write program to ask the user to enter number then print the half of the number

#include <iostream>
#include <string>
using namespace std;
int main()
{

    short int numberA, numberB;
    cout << "please enter number A\n";
    cin >> numberA;
    cout << "please enter number B\n";
    cin >> numberB;
    cout << "\n";

    cout << "half of " << numberA << " is " << numberA / 2 << endl;
    cout << "half of " << numberB << " is " << numberB / 2 << endl;
    return 0;
}

