//question=>  Write a program to read a LoanAmount and ask you how many months you need to settle the loan,
//then calculate the monthly installment amount.



#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    float loanAmount, month;
    cout << "this program calculate how much monthly payment for the loan\n\n";
    cout << "please enter the value of the loan\n";
    cin >> loanAmount;
    cout << "how many month you need to settle the loan\n";
    cin >> month;
    cout << "this is the monthly payment " << loanAmount / month<<endl;
   
      
        return 0;
}
