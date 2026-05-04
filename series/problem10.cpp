//question=> write program to ask user to enter three marks Average of entered marks

#include <iostream>
#include <string>
using namespace std;
int main()
{

    short int mark1, mark2, mark3;
    cout << "please enter mark 1\n";
    cin >> mark1;
    cout << "please enter mark 2\n";
    cin >> mark2;
    cout << "please enter mark 3\n";
    cin >> mark3;
    cout << "\n";
    cout << "the average of entered marks is " << (mark1 + mark2 + mark3) / 3 << endl;

    return 0;
}
