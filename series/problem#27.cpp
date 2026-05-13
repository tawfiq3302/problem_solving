// Question: Write a program that prints numbers from N down to 1 using a for loop.



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
    for (short i = num; i >= 1; i--)
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
