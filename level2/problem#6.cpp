// Question: Write a program using struct to store personal information including contact details, 
//then read and print the data using functions.

 
#include <iostream>
#include <string>
#include<cmath>
using namespace std;


struct staddress
{
    string email;
    string phone;

};

struct stinfo 
{
    string firstName;
    string lastName;
    short age;
    string city;
    string country;
    int monthly_salary;
    char gender;
    bool marriedStatus;
    staddress address;

};

void ReadInfo(stinfo &info)
{
    
    cout << "please enter first name\n";
    cin >> info.firstName;
    cout << "please enter last name\n";
    cin >> info.lastName;
    cout << "please enter your city\n";
    cin >> info.city;
    cout << "please enter country\n";
    cin >> info.country;
    cout << "please enter your age\n";
    cin >> info.age;
    cout << "please enter monthly salary\n";
    cin >> info.monthly_salary;
    cout << "please enter your gender M/F\n";
    cin >> info.gender;
    cout << "please enter your marital status single/married by 0/1\n";
    cin >> info.marriedStatus;
    cout << "please enter your email\n";
    cin >> info.address.email;
    cout << "please enter your phone\n";
    cin >> info.address.phone;
}

void PrintInfo(stinfo infa)
{
    
    cout << "**************************************\n";
    cout << "first Name: " << infa.firstName << endl;
    cout << "last  Name: " << infa.lastName << endl;
    cout << "age: " << infa.age << endl;
    cout << "city: " << infa.city << endl;
    cout << "country: " << infa.country << endl;
    cout << "gender: " << infa.gender << endl;
    cout << "monthly salary: " << infa.monthly_salary << endl;
    cout << "yearly salary: " << infa.monthly_salary*12 << endl;
    cout << "marital status: " << infa.marriedStatus << endl;
    cout << "email: " << infa.address.email << endl;
    cout << "phone: " << infa.address.phone << endl;
    cout << "**************************************\n";

   

}


int main()
{
   
    stinfo person1;
    ReadInfo(person1);
    PrintInfo(person1);


    return 0;

}
