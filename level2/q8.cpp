// Question: Write a program using functions and arrays to read three grades and calculate their avera



#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void ReadNumber(float grades[3])
{
    cout << "please enter grade 1\n";
    cin >> grades[0];
    cout << "please enter grade 2\n";
    cin >> grades[1];
    cout << "please enter grade 3\n";
    cin >> grades[2];

}

float calculateAverage(float num[3])
{
    return (num[0] + num[1] + num[2]) / 3;

}

void PrintAverage()
{
    cout << "the average of grades is ";

}



int main()
{
    float grades[3];
    ReadNumber(grades);
    PrintAverage();
    cout << calculateAverage(grades);

    
    return 0;

}
