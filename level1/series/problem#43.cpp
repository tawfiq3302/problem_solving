//question=>  Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds


#include <iostream>
#include <string>
using namespace std;
int main()
{
   
    int day, hour, minute, seconde;
    cout << "this program calculate the number of day,hour,minute and seconde after enter the total second\n";
    cout << "please enter the number of second \n";
    cin >> seconde;
    day = seconde / (24 * 60 * 60);
    seconde = seconde - (day * 24 * 60 * 60);

    hour = seconde / (60 * 60);
    seconde = seconde - (hour * 60 * 60);

    minute = seconde / 60;
    seconde = seconde - (minute * 60);
     
    cout << "day: " << day << "  hour: " << hour << "  minute: " << minute << "  seconde: " << seconde;




    return 0;
}
