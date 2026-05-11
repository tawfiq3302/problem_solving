//Write a program to ask the user to enter Month
//Then print the day as follows:
//1 Print January
//2 Print February
//3 Print March
//4 Print April
//5 Print May
//6 Print June
//7 Print July
//8 Print August
//9 Print September/
//10 Print October
//11 Print November
//12 December
//Otherwise print "Wrong Month" and ask the use to enter the Month again




#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void ReadMonthNumber(short &num)
{
    cout << "please enter number of month \n";
    cin >> num;
}

void PrintMonthName(short num)
{
    if (num == 1)
    {
        cout << "It's January\n";
    }

    else if (num == 2)
    {
        cout << "It's February\n";
    }

    else if (num == 3)
    {
        cout << "It's March\n";
    }

    else if (num == 4)
    {
        cout << "It's April\n";
    }

    else if (num == 5)
    {
        cout << "It's May\n";
    }

    else if (num == 6)
    {
        cout << "It's June\n";
    }

    else if (num == 7)
    {
        cout << "It's July\n";
    }

    else if(num==8)
    {
        cout << "August";
    }

    else if (num == 9)
    {
        cout << "September";
    }

    else if (num == 10)
    {
        cout << "October";
    }

    else if (num == 11)
    {
        cout << "November";
    }

    else if (num == 12)
    {
        cout << "December";
    }
    else
    {
        cout << "Wrong Month";
    }

}

int main()
{
    short day;
    ReadMonthNumber(day);
    PrintMonthName(day);
 


        return 0;

}

