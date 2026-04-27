// Question: Write a function to swap two numbers using pass by reference.



#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void SwapFunction(int &num1,int &num2)
{
   
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "number after the swap\n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}

   

int main()
{
    int num1 , num2;
    cout << "please enter num1 \n";
    cin >> num1;
    cout << "please enter num2\n";
    cin >> num2;

    cout << "number befor swap function\n";
    cout <<"num1 = "<< num1 << endl;
    cout <<"num2 = "<< num2 << endl;

    SwapFunction(num1, num2);

    cout << "number after swap inside main function\n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;

}
