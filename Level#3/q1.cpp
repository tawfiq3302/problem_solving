// Question: Write a program using an array of structs to store and 
//print information for multiple persons using functions.



#include <iostream>
#include <string>
#include<cmath>
using namespace std;

struct stinfo
{
    string firstname;
    string lastname;
    short age;
    string phone;
};

void ReadInfo(stinfo &info)
{
    cout << "please enter first name\n";
    cin >> info.firstname;

    cout << "please enter last name\n";
    cin >> info.lastname;

    cout << "please enter your age\n";
    cin >> info.age;

    cout << "please enter your phone\n";
    cin >> info.phone;
    cout << "\n";
}
void PrintInfo(stinfo info)
{
    cout << "******************************\n";
    cout << "First Name: " << info.firstname << endl;
    cout << "Last Name: " << info.lastname << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone: " << info.phone << endl;
    cout << "******************************\n";
}

void ReadPersonInfo(stinfo person[2])
{
    ReadInfo(person[0]);
    ReadInfo(person[1]);
}

void PrintPersonInfo(stinfo person[2])
{
    PrintInfo(person[0]);
    PrintInfo(person[1]);
}

int main()
{
    stinfo person[2];
    ReadPersonInfo(person);
    PrintPersonInfo(person);
    
    return 0;

}

