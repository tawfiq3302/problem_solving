//Write a program to ask the user to enter: Number1 Number 2   Operation Type
//Then perform the calculation according to the Operation Type as follows:
//"+": add the two numbers.
//"-": Subtract the two numbers.
//*: Multiply the two numbers.
//"/": Devide the two numbers.



#include <iostream>

using namespace std;


void ReadNumber(float &num1,float &num2)
{
    cout << "please enter number 1\n";
    cin >> num1;

    cout << "please enter number 2\n";
    cin >> num2;
}
void ReadArithmeticOperators(char &operators)
{
    cout << "please enter the operator \"*\" or the operator \"/\" or the operator \"+\" or the operator \"-\"\n";
    cin >> operators;
}

void ValueOfCalculation(float num1,float num2,char operators)
{
    if (operators == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2;
    }
      
    else if (operators == '/')
    {
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        else
        {
            cout << "cannot divide by zero";
        }
    }
      
    else if (operators == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    }
      
    else if (operators == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2;
    }
      
    else
    {
        cout << "wrong operator";
    }
}


int main()
{
  
    float num1, num2;
    char operators;
    ReadNumber(num1, num2);
    ReadArithmeticOperators(operators);
    ValueOfCalculation(num1, num2, operators);

 

        return 0;

}

