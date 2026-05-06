
#include <iostream>

using namespace std;

void ReadeGrade(short &grade)
{
    cout << "please enter grade \n";
    cin >> grade;
}

void CheckGradeAndPrint(short grade)
{
    if (grade > 100)
    {
        cout << "there is no mark greater than 100 \n";
    }

    else if (grade >= 90 && grade <= 100)
    {
        cout << "A";
    }
    else if (grade >= 80 && grade < 90)
    {
        cout << "B";
    }
    else if (grade >= 70 && grade < 80)
    {
        cout << "C";
    }
    else if (grade >= 60 && grade < 70)
    {
        cout << "D";
    }
    else if (grade >= 50 && grade < 60)
    {
        cout << "E";
    }
    else  
    {
        cout << "F";
    }
    

}

int main()
{
    short num;
    ReadeGrade(num);
    CheckGradeAndPrint(num);

        return 0;

}
