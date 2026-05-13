// Question: Write a program using switch-case to print the month name based on user input (1–12).



#include <iostream>
using namespace std;

void ReadNumberOfMonth(short &num)
{
    cout << "please enter number of month\n";
    cin >> num;
}
void GetNameMonth(short num)
{
    switch (num)
    {
    case 1:
        cout << "January\n";
        break;

    case 2:
        cout << "February\n";
        break;
    case 3:
        cout << "March\n";
        break;
    case 4:
        cout << "April\n";
        break;
    case 5:
        cout << "May\n";
        break;
    case 6:
        cout << "June\n";
        break;
    case 7:
        cout << "July\n";
        break;
    case 8:
        cout << "August\n";
        break;
    case 9:
        cout << "September\n";
        break;
    case 10:
        cout << "October\n";
        break;
    case 11:
        cout << "November\n";
        break;
    case 12:
        cout << "December\n";
        break;
    default:
        cout << "wrong entry";
    }

}



int main()
{
    short num;
    ReadNumberOfMonth(num);
    GetNameMonth(num);
    return 0;

}

