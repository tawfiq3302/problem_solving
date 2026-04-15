// Question: Convert between string and numeric data types using stoi, stof, stod, and to_string.


#include <iostream>
#include <string>
#include<cmath>
using namespace std;





int main()
{
    string st1 = "43.22";
    int num_int;
    double num_double;
    float num_float;

    num_int = stoi(st1);
    num_float = stof(st1);
    num_double = stod(st1);
    cout << "num in string " << st1 << " num in int = " << num_int << endl;
    cout << "num in string " << st1 << " num in float = " << num_float << endl;
    cout << "num in string " << st1 << " num in double = " << num_double << endl;
    cout << "\n";

    int num1 = 20;
    string st;
    st = to_string(num1);
    cout << "num1 = " << num1 << " after the fun to string is " << st << endl << endl;


    double num2=33.5;
    string st2;
    st2 = to_string(num2);
    cout << "num2 = " << num2 << " after the fun to string is " << st2 << endl << endl;


    float num3 = 55.23;
    string st3;
    int num4;
    
    st3 = to_string(num3);
    num4 = int(num3);

    cout << "num3 = " << num3 << " after the fun to string is " << st3 << endl << endl;

    cout << "num3 = " << num3 << " after the fun to int is " << num4 << endl << endl;

    return 0;
}
