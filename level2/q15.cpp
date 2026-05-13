// Write a program using enum and switch-case to display the weekday name based on user input (1-7).



#include <iostream>
using namespace std;

enum enWeekDay{Sunday=1,Monday=2,Tuesday=3,Wednesday=4,Thursday=5,Friday=6,Saturday=7};

void ShowWeekDayMenu()
{
    cout << "*************************\n";
    cout << "\tWeek Days\t\t \n";
    cout << "*************************\n";
    cout << "1: Sunday\n";
    cout << "2: Monday\n"; 
    cout << "3: Tuesday\n"; 
    cout << "4: Wednesday\n";
    cout << "5: Thursday\n";
    cout << "6: Friday\n";
    cout << "7: Saturday\n";
    cout << "*************************\n";
    cout << "please enter the number of day" << endl;
}


enWeekDay ReadWeekDay()
{
    enWeekDay weekday;
    short we;
    cin >> we;
   
    return (enWeekDay)we;
}

string GetNameWeek(enWeekDay Weekday)
{

    switch (Weekday)
    {
    case enWeekDay::Sunday:
        return "Sunday";
        break;
    case enWeekDay::Monday:
        return "Monday";
        break;
    case enWeekDay::Tuesday:
        return "Tuesday";
        break;
    case enWeekDay::Wednesday:
        return "wednesday";
        break;
    case enWeekDay::Thursday:
        return "Thursday";
        break;
    case enWeekDay::Friday:
        return "Friday";
        break;
    case enWeekDay::Saturday:
        return "Saturday";
        break;
    default:
        return"wrong Number Day";
    }
    
}


int main()
{ 
   

    ShowWeekDayMenu();
    cout << "Today is " << GetNameWeek(ReadWeekDay());
    
    return 0;

}
