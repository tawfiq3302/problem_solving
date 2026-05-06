// Question: Perform string operations including length, indexing, concatenation, and conversion to numbers.

// Notes:
// - The first input (name) must be at least 8 characters long (to access index 0,2,4,7).
// - The second and third inputs must be numeric strings (numbers only) to use stoi().


#include <iostream>
#include <string>
#include<cmath>
using namespace std;



int main()
{

    string name, number1, number2;
    cout << "please enter string1\n";
    getline(cin, name);
    cout << "\nplease enter string2\n";
    getline(cin, number1);
    cout << "\nplease enter string3\n";
    getline(cin, number2);
    cout << "*************************\n";

    cout << "the length of the string 1 is " << name.length() << endl;
    cout << "characters at 0,2,4,7 " <<"\t" << name[0] << "\t" << name[2] << "\t" << name[4] << "\t" << name[7] << endl;
    cout << "concatenating string2 and string3 is " << number1 + number2 << endl;
    cout << number1 << " * " << number2 << " = " << stoi(number1) * stoi(number2) << endl;
    return 0;
}
