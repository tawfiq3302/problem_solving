// Question: Create a program that stores and displays personal information using struct and enum.
// Note: enum values will print as numbers (will improve later)

#include <iostream>
#include <string>
#include<cmath>
using namespace std;


enum enmarried_status { single, married };
enum engender { male, female };
enum enfavorite_color{red,blue,black,green};

struct staddress {
    string street_name;
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
    engender gender;
    enmarried_status married_status;
    stcontact_info contact;
    enfavorite_color favorite_color;
 };


int main()
{

    personal_information personal1;
    personal1.name = "tawfiq abu rumman";
    personal1.age = 24;
    personal1.city = "al salt";
    personal1.country = "jordan";
    personal1.monthly_salary = 850;
    personal1.contact.email_address = "tawfiqaburumman@gmail.com";
    personal1.contact.number_phone = "0777524097";
    personal1.contact.address.building_number = "17";
    personal1.contact.address.street_name= "street al romy";

    personal1.favorite_color = enfavorite_color::blue;
    personal1.gender = engender::male;
    personal1.married_status = enmarried_status::single;




    cout << "***************************\n";
    cout <<"name: " << personal1.name << endl;
    cout <<"age: " << personal1.age << endl;
    cout << "favorite color: " << personal1.favorite_color << endl;
    cout << "city: " << personal1.city << endl;
    cout << "country: " << personal1.country << endl;
    cout <<"gender: " << personal1.gender << endl;
    cout <<"is married: " << personal1.married_status << endl;
    cout << "email: " << personal1.contact.email_address << endl;
    cout <<"number phone: " << personal1.contact.number_phone << endl;
    cout <<"building number: " << personal1.contact.address.building_number << endl;
    cout <<"street name: " << personal1.contact.address.street_name << endl;
    cout << "***************************\n";



    return 0;
}
