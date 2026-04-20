// Question: write a program toask theuser to enter his/her name and print it on screen



#include <iostream>
#include <string>

using namespace std;


void PrintYourName(string name)
{
    cout <<" your name is " << name;

}


int main()
{
    
    string name;
    cout << "please enter your name \n";
    getline(cin, name);
    PrintYourName(name);



    return 0;
} 
