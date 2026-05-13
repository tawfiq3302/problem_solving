// Question: Write a program using enum and switch-case to display 
//the country name based on the user's choice and handle invalid choices



#include <iostream>

using namespace std;

enum encountryname { Jordan = 1, Tunis = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, others = 7 };


int main()
{

    cout << "***********************\n";
    cout << "please enter the number of your country\n";
    cout << "(1) Jordan\n";
    cout << "(2) Tunis\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq \n";
    cout << "(7) others\n";
    cout << "***********************\n\n";
    cout << "your choice? ";

    short choice;
    cin >> choice;
    encountryname country;
    country = encountryname(choice);
    cout << endl;

    switch (country)
    {
    case encountryname::Jordan:
        cout << "your country is Jordan\n";
        break;
    case encountryname::Tunis:
        cout << "your country is Tunis\n";
        break;
    case encountryname::Algeria:
        cout << "your country is Algeria\n";
        break;
    case encountryname::Oman:
        cout << "your country is Oman\n";
        break;
    case encountryname::Egypt:
        cout << "your country is Egypt\n";
        break;
    case encountryname::Iraq:
        cout << "your country is Iraq\n";
        break;
    case encountryname::others:
        cout << "your country is others\n";
        break;

    default:
        system("color 4f");
        cout << "Wrong Choice\n";

    }

    return 0;

}

