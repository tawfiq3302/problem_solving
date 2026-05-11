// Question: Write a program using enum and if-else to change the console color based on the user's choice




#include <iostream>
#include <string>
#include<cmath>
using namespace std;

enum encolorpage { Red = 1, Blue = 2, Yellow = 3, Green = 4 };


int main()
{

    cout << "***********************\n";
    cout << "please enter the number of your color\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Yellow\n";
    cout << "(4) Green\n";
    cout << "***********************\n\n";
    cout << "your choice? ";

    short choice;
    cin >> choice;
    encolorpage color;
    color = (encolorpage)choice;
    if (color == encolorpage::Red)
    {
        system("color 4f");
    }

    else if (color == encolorpage::Blue)
    {
        system("color 1f");
    }

    else if (color == encolorpage::Green)
    {
        system("color 2f");
    }

    else if (color == encolorpage::Yellow)
    {
        system("color 6f");
    }
    else
    {
        cout << "wrong choice\n";
    }
    return 0;

}
