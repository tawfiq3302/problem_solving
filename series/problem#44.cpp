//Write a program to ask the user to enter: Day
//Then print the day as follows:
//1 Print Sunday
//2 Print Monday
//3 Print Tuesday
//4 Print Wednesday
//5 Print Thursday
//6 Print Friday
//7 Print Saturday
//Otherwise print "Wrong Day" and ask the use to enter the day again.


#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void ReadDayNumber(char &num)
{
    cout << "please enter number of day \n";
    cin >> num;
}

void PrintDayName(char num)
{
    if (num == '1')
    {
        cout << "It's sunday\n";
    }
      
    else if (num == '2')
    {
        cout << "It's monday\n";
    }
      
    else if (num == '3')
    {
        cout << "It's tuesday\n";
    }
      
    else if (num == '4')
    {
        cout << "It's wednesday\n";
    }
      
    else if (num == '5')
    {
        cout << "It's thursday\n";
    }
      
    else if (num == '6')
    {
        cout << "It's friday\n";
    }
      
    else if (num == '7')
    {
        cout << "It's saturday\n";
    }
      
    else
    {
        cout << "wrong day\n";
    }
}

int main()
{
    char day;
    ReadDayNumber(day);
    PrintDayName(day);
 

        return 0;

}

