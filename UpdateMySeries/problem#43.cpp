// Question: Write a function to convert a total number of seconds into days, hours, minutes, and seconds.



#include <iostream>
#include <string>
#include<cmath>
using namespace std;



    
 void CalculateNumOfDayAndHourAndMinuteAndSecond(int seconds)
{
     int reminderofsecond=0, day, hour, minute, second;
     day = floor(seconds / (24 * 60 * 60));
     reminderofsecond = seconds - (day * 24 * 60 * 60);
     hour = floor(reminderofsecond / (60 * 60));
     reminderofsecond -= hour * 60 * 60;
     minute = floor(reminderofsecond / 60);
     reminderofsecond -= minute * 60;
     second = reminderofsecond;
     cout << "day :" << day << " hour :" << hour << " minute :" << minute << " second :" << second;
}


int main()
{
    int second;
    cout << "please enter number of total seconds\n";
    cin >> second;
    CalculateNumOfDayAndHourAndMinuteAndSecond(second);

    return 0;

}
