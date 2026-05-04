//question=> A restaurant charges a 10% service fee and a 16% sales tax.
//Write a program to read a BillValue, add the service fee and sales tax, and print the Total Bill on the


#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "this program calculate the totalbill and add service fee then add sales tax\n";
    float totalBill,billvalue ;
    cout << "please enter your Billvalue \n";
    cin >> billvalue;
    totalBill = billvalue * 1.1;
    totalBill = totalBill * 1.16;
   
    cout << "the total of bill after add the service fee and sales tax is " << totalBill ;
    

    return 0;
}
