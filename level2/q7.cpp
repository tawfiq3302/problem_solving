// Question: Write a function to calculate the average of three numbers using an array



#include <iostream>
#include <string>
#include<cmath>
using namespace std;

float CalculateAverage(float num1, float num2,float num3)
{
    
    float num[3]={num1,num2,num3};
    return (num[0] + num[1] + num[2]) / 3;
}


int main()
{
    float num1, num2, num3;

    cout << "please enter num1\n";
    cin >> num1;
    cout << "please enter num2\n";
    cin >> num2;
    cout << "please enter num3\n";
    cin >> num3;

    cout<<"average = " << CalculateAverage(num1, num2, num3);

    return 0;

}
