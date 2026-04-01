// Question: Perform basic arithmetic operations on two numbers



#include <iostream>
#include <string>
using namespace std;
int main()
{

    short int numberA, numberB;
    cout << "please enter number A:\n";
    cin >> numberA;
    cout << "please enter number B:\n";
    cin >> numberB;
    

    cout << "\n";
    cout << numberA << " + " << numberB << " = " << numberA + numberB << endl;
    cout << numberA << " - " << numberB << " = " << numberA - numberB << endl;
    cout << numberA << " * " << numberB << " = " << numberA * numberB << endl;
    cout << numberA << " / " << numberB << " = " << numberA / numberB << endl;
    cout << numberA << " % " << numberB << " = " << numberA % numberB << endl;
    return 0;
}
