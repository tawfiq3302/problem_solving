//question=>Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.


 
#include <iostream>
#include <string>
using namespace std;
int main()
{
 
    cout << "this program calculate remaining balance of the bill\n";
    float totalBill, cashpaid;
    cout << "please enter the totalBill\n";
    cin >> totalBill;
    cout << "please enter the cashpaid\n";
    cin >> cashpaid;

    cout << "the remaining amount paid is " << cashpaid - totalBill;

    

    return 0;
}

