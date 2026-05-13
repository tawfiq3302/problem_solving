// Question: Write a calculator program using functions, switch-case, 
//and float numbers to perform arithmetic operations.



#include <iostream>
using namespace std;



void ReadNumber(float &num1,float &num2)
{
    cout << "please enter number 1\n";
    cin >> num1;
    cout << "please enter number 2\n";
    cin >> num2;

}
void ReadOperator(char &operators)
{
    cout << "please enter one of the operators \"*\" or \"/\" or \"+\" or \"-\"\n";
    cin >> operators;
}
void PrintResultOfCalculation(float num1,float num2,char operators)
{

    switch (operators)
    {
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else
        {
            cout << "cannot divide by zero\n";
        }
        break;
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    default:
        cout << "wrong operator";
    }

}



int main()
{
    float num1, num2;
    char operators;
    ReadNumber(num1, num2);
    ReadOperator(operators);
    PrintResultOfCalculation(num1, num2, operators);
    return 0;

}

