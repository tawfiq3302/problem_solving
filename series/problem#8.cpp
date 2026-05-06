// Question: Write a program using functions to read a grade and 
//print "Pass" if it is greater than or equal to 50, otherwise print "F


#include <iostream>
using namespace std;

void ReadGrade(short &grade)
{
    cout << "please enter your grade\n";
    cin >> grade;

}

void PrintResult(short grade)
{
    if (grade >= 50)
    {
        cout << "pass\n";
    }
    else
    {
        cout << "fail\n";
    }
}


int main()
{

    short num;
    ReadGrade(num);
    PrintResult(num);
        return 0;

}

