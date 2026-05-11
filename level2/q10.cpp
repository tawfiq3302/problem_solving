// Question: Write a program using enum and else-if to print the country name based on the user's choice.



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
    if (country == encountryname::Jordan)
    {
        cout << "your country is Jordan\n";
    }
    else if (country == encountryname::Tunis)
    {
        cout << "your country is Tunis\n";
    }

    else if (country == encountryname::Algeria)
    {
        cout << "your country is Algeria\n";
    }

    else if (country == encountryname::Oman)
    {
        cout << "your country is Oman\n";
    }

    else if (country == encountryname::Iraq)

    {
        cout << "your country is Iraq\n";
    }
    else if (country == encountryname::Egypt)
    {
        cout << "your country is Egypt\n";
    }
    else if (country == encountryname::others)
    {
        cout << "others\n";
    }
    
    else
    {
        cout << "wrong choice\n";
    }

    return 0;

}


