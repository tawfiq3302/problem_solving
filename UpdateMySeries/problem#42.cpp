// Question: Write a function to calculate the total number of seconds given days, hours, minutes, and seconds.



#include <iostream>
#include <string>
#include<cmath>
using namespace std;



    
int CalculateTotalSeconds(int day ,int hour,int minute,int second)
{
    int Totalseconde=0;
    Totalseconde += day * 24 * pow(60, 2);
    Totalseconde += hour * pow(60, 2);
    Totalseconde +=   second;
    Totalseconde +=   (minute * 60);
    return Totalseconde;

}


int main()
{
    int day,hour,minute,second,result;
    cout << "please enter number of days\n";
    cin >> day;
    cout << "please enter number of hour\n";
    cin >> hour;
    cout << "please enter number of minutes\n";
    cin >> minute;
    cout << "please enter number of seconds\n";
    cin >> second;
    result = CalculateTotalSeconds(day,hour,minute,second);
    cout <<"Total second is " << result <<endl;

    return 0;

}
