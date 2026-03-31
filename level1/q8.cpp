
#include <iostream>
#include <string>
using namespace std;
int main()
{
  
    string Name ;
    int Age ;
    string City ;
    string Country ;
    float Monthly_salary;           
    char Gender;
    bool isMarried;
    
    
    cout << "Please Enter Your Name:\n";
    getline(cin, Name);
    cout << "Please Enter Your Age:\n";
       cin >> Age;
    cout << "Please Enter Your City:\n";
    cin.ignore(1, '\n');
    getline(cin, City);
    cout << "Please Enter Your Country:\n";
   
    getline(cin, Country);
    cout << "Please Enter Your Monthly_salary:\n";
       cin >> Monthly_salary;
    cout << "Please Enter Your Gender:\n";
       cin >> Gender;
    cout << "please enter \"1 if you Married And 0 If you single\"  "<<endl;
       cin >> isMarried;



    cout << "*********************************\n";
    cout << "Name:" << Name << endl;
    cout << "Age:" << Age << endl;
    cout << "City:" << City << endl;
    cout << "Country:" << Country << endl;
    cout << "Monthly_salary:" << Monthly_salary << endl;
    cout << "yearly_salary:" << Monthly_salary * 12 << endl;
    cout << "Gender:" << Gender << endl;
    cout << "married:" << isMarried << endl;
    cout << "*********************************\n";




    return 0;
}
             

