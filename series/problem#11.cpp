// Question: Write a program using arrays and functions to read three marks, 
//calculate their average, and print "Pass" or "Fail

#include <iostream>
using namespace std;

void ReadMark(float mark[3])
{
    cout << "please enter mark 1\n";
    cin >> mark[0];
    cout << "please enter mark 2\n";
    cin >> mark[1];
    cout << "please enter mark 3\n";
    cin >> mark[2];
}

float CalculateAverage(float mark[3])
{
     return (mark[0] + mark[1] + mark[2]) / 3;
}

void PrintResult(float average)
{
    if ( average>= 50)
    {
        cout << "Pass\n";
    }
    else
    {
        cout << "Fail\n";
    }
}

int main()
{
    float mark[3];
   
    ReadMark(mark);
    float average = CalculateAverage(mark);
    cout <<"Average: " << average << endl;
    PrintResult(average);
        return 0;

}

