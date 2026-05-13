// Question: Write a program using switch-case to display the day name based on user input (1–7).



#include <iostream>
using namespace std;

void ReadNumberOfDay(short &num)
{
    cout << "please enter number of day\n";
    cin >> num;
}
void GetNameDay(short num)
{
    switch (num)
    {
    case 1:
        cout << "It's Sunday\n";
        break;

    case 2:
        cout << "It's Monday\n";
        break;
    case 3:
        cout << "It's Tuesday\n";
        break;
    case 4:
        cout << "It's Wednesday\n";
        break;
    case 5:
        cout << "It's Thursday\n";
        break;
    case 6:
        cout << "It's Friday\n";
        break;
    case 7:
        cout << "It's Saturday\n";
        break;
    default:
        cout << "wrong entry";
            
    }

}



int main()
{
    short num;
    ReadNumberOfDay(num);
    GetNameDay(num);
    return 0;

}

