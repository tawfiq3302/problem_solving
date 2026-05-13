// Question: Write a program that prints numbers from 1 to N using a for loop.



#include <iostream>
using namespace std;
    
void ReadRepeatNumber(short &num)
{
    cout << "Please enter the repeat number\n";
    cin >> num;
    cout << endl;
    
}
void PrintNumberFrom1ToRepeatNumber(short num)
{
    for (short i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
}

int main()
{ 
    short n;
    ReadRepeatNumber(n);
    PrintNumberFrom1ToRepeatNumber(n);

    return 0;

}
