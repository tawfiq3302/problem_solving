// Question: Compare two numbers using relational operators


#include <iostream>
#include <string>
using namespace std;
int main()
{
    
   
    short numberA, numberB;
    cout << "please enter the first number A\n";
    cin >> numberA;
    cout << "please enter the seconde number B\n";
    cin >> numberB;
    
    cout << numberA << " == " << numberB << " is " << (numberA == numberB) << endl;
    cout << numberA << " != " << numberB << " is " << (numberA != numberB) << endl;
    cout << numberA << "  < " << numberB << " is " << (numberA < numberB) << endl;
    cout << numberA << "  > " << numberB << " is " << (numberA > numberB) << endl;
    cout << numberA << " <= " << numberB << " is " << (numberA <= numberB) << endl;
    cout << numberA << " >= " << numberB << " is " << (numberA >= numberB) << endl;
        return 0;
}
