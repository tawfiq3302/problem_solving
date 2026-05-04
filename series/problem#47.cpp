//question=>  Write a program to read a Loanamount and Monthly Payment
//and Calculate how many months you need to Settle the Loan



#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    float loanAmount, monthly_payment;
    cout << "this program calculate how many month need to pay the loanamount\n\n";
    cout << "please enter the value of the loan\n";
    cin >> loanAmount;
    cout << "please enter a monthly payment\n";
    cin >> monthly_payment;
    cout << "the number of months you need it to pay of the loan " << loanAmount / monthly_payment<<" months"<<endl;
      
        
      
        return 0;
}
