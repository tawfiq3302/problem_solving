//question=>  Write a program to calculate the task duration in seconds and print it on screen
//→ Given the time duration of a task in the number of days, hours, minutes, and seconds..


#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    float day, hour, minute, seconde;
    double total_seconde;
    cout << "this program calculate amount of seconde in your job\n";
    cout << "please enter thre number of days \n";
    cin >> day;
    cout << "please enter thre number of hours \n";
    cin >> hour;
    cout << "please enter thre number of minutes \n";
    cin >> minute;
    cout << "please enter thre number of secondes \n";
    cin >> seconde;

    day = day * 24 * 60 * 60;
    hour = hour * 60 * 60;
    minute = minute * 60;
    total_seconde = day + hour + minute + seconde;
    cout << "the total of seconde is " << total_seconde;



    return 0;
}

