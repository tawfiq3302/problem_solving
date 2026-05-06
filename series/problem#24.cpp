//Write a program to ask the user to enter : Age
//If age is between 18 and 45 print "Valid Age" otherwise print "Invalid Age"


#include <iostream>

using namespace std;
 
void ReadAge(short &age)
{
    cout << "please enter your age \n";
    cin >> age;
}

void checkAge(short age)
{
    if (age >= 18 && age <= 45)
    {
        cout << "Valid Age\n";
    }
    else
    {
        cout << "Invalid Age\n";
    }
}

int main()
{
    short age;
    ReadAge(age);
    checkAge(age);

        return 0;

}



