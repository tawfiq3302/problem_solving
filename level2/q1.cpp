// Question: Store and display personal information using nested structs



#include <iostream>
#include <string>
#include<cmath>
using namespace std;

struct staddress {
    string srteet_name;
    string building_number;

};
struct stcontact_info {
    string number_phone;
    string email_address;
    staddress address;
};

struct personal_information {
    string name;
    string city;
    string country;
    short age;
    float monthly_salary;
    char gender;
    bool is_married;
    stcontact_info contact;
 };


int main()
{

    personal_information personal1;
    personal1.name = "tawfiq abu rumman";
    personal1.age = 24;
    personal1.city = "al salt";
    personal1.country = "jordan";
    personal1.monthly_salary = 850;
    personal1.gender = 'M';
    personal1.is_married = 0;
    personal1.contact.email_address = "tawfiqaburumman@gmail.com";
    personal1.contact.number_phone = "0777524097";
    personal1.contact.address.building_number = "17";
    personal1.contact.address.srteet_name = "street al romy";


    cout << "***************************\n";
    cout <<"name: " << personal1.name << endl;
    cout <<"age: " << personal1.age << endl;
    cout << "city: " << personal1.city << endl;
    cout << "country: " << personal1.country << endl;
    cout <<"gender: " << personal1.gender << endl;
    cout <<"is married: " << personal1.is_married << endl;
    cout << "email: " << personal1.contact.email_address << endl;
    cout <<"number phone: " << personal1.contact.number_phone << endl;
    cout <<"building number: " << personal1.contact.address.building_number << endl;
    cout <<"street name: " << personal1.contact.address.srteet_name << endl;




    return 0;
}
