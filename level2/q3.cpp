// Question: Create a program using functions to display personal information and print different patterns.




#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void displayMyCardInfo() {

    cout << "********************************\n";
    cout << "Name: Tawfiq Abu Rumman\n";
    cout << "Age: 24\n";
    cout << "City: Al-salt \n";
    cout << "Country: Jordan\n";
    cout << "********************************\n\n";

}


void printSquareStars() {

    cout << "*************\n\n";
    cout << "*************\n\n";
    cout << "*************\n\n";
    cout << "*************\n\n";
}

void printILoveProgramming(){

    cout << "I Love Programming\n\n";
    cout << "I Promise To Be The Best Developer Ever \n\n";
    cout << "I know it will take some time to practice, but I will achieve my goal.\n\n";
    cout << "Best Regards\n";
    cout << "Tawfiq Abu Rumman\n\n";

}

void print_H() {

    cout << "*    *\n";
    cout << "*    *\n";
    cout << "******\n";
    cout << "*    *\n";
    cout << "*    *\n";
}



int main()
{
    displayMyCardInfo();
    printSquareStars();
    printILoveProgramming();
    print_H();
    
    return 0;
}
