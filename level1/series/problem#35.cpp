//question=>Write a program to ask the user to enter:
//Pennies, Nickels, Dimes, Quarters, Dollars 
//Then calculate the total pennies, total dollars and print them on screen giving that:
//Penny = 1 Nickel = 5 Dime = 10 Quarter = 25 Dollar = 100


#include <iostream>
#include <string>
using namespace std;
int main()
{
 
    float penny, nickel, dime, quarter, dollar,total_ofpennies,total_ofdollars;

    cout << "this program calculate the sum of penny and dollar\n\n";

    cout << "penny=1\n";
    cout << "nickel=5\n";
    cout << "dime=10\n";
    cout << "quarter=25\n";
    cout << "dollar=100\n\n";

    cout << "please enter penny \n";
    cin >> penny;
    cout << "please enter nickel \n";
    cin >> nickel;
    cout << "please enter dime \n";
    cin >> dime;
    cout << "please enter quarter \n";
    cin >> quarter;
    cout << "please enter dollar \n";
    cin >> dollar;
    
    total_ofpennies = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;
    total_ofdollars = total_ofpennies / 100;
    cout << "total of pennies = " << total_ofpennies << endl;
    
    cout << "total of dollars = " << total_ofdollars;
 

    

    return 0;
}
