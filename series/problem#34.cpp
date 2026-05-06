//Write a program to ask the user to enter: TotalSales
//The commission is calculated as one percentage the total sales amount, all you need is 
//to decide which percentage to use of the following:
//1000,000 → Percentage is 1%
//500K to 1M → Percentage is 2%
//100K - 500K → Percentage is 3%
//50K to 100K → Percentage is 5%
//Otherwise Percentage     is 0%


#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void ReadTotalSales(int &total)
{
    cout << "please enter total sales\n";
    cin >> total;
}

void CalculateCommission(int total)
{
    if (total >= 1000000)
    {
        cout << total * .01;
    }
    else if (total >= 500000 )
    {
        cout << total * .02;
    }
    else if (total >= 100000 )
    {
        cout << total * .03;
    }
    else if (total >= 50000 )
    {
        cout << total * .05;
    }
    else
    {
        cout << total*0;
    }

}


int main()
{
    int num;
    ReadTotalSales(num);
    cout << "the commission is ";
    CalculateCommission(num);
 

        return 0;

}

