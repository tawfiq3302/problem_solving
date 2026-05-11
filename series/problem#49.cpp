//Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance to user,
//otherwise print "Wong PIN" and ask the user to enter the PIN again.  
//Assume User Balance is 7500.
 

#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void ReadPINCode(string &PIN_Code)
{
    cout << "Please Enter Your PIN Code\n";
    cin >> PIN_Code;
}

void CheckPINAndPrintYourBalance(string PIN)
{
    if (PIN == "1234")
    {
        cout << "your Balance is 7500\n" << endl;
    }
    else
    {
        cout << "wrong PIN \n";
    }
}

int main()
{
    string PIN;
    ReadPINCode(PIN);
    CheckPINAndPrintYourBalance(PIN);
        return 0;

}
