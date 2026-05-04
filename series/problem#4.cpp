// Question: Write a program using struct to determine 
//if a person is hired based on age and driving license status.



#include <iostream>
#include <string>
using namespace std;


struct stinfo
{
    short age;
    string driverLicense;
};

void ReadPersonInfo(stinfo &info)
{
    cout << "please enter your age \n";
    cin >> info.age;

    cout << "please enter \"pass\" if you have driver license and \"fail\" if you don't have \n";
    cin >> info.driverLicense;
}


void PrintPersonInfo(stinfo info)
{
    if (info.age > 21 && info.driverLicense == "pass")
    {
        cout << "Hired\n";
    }

    else
    {
        cout << "Rejected\n";
    }
}



int main()
{
    stinfo person;
    ReadPersonInfo(person);
    PrintPersonInfo(person);
    
    return 0;

}




