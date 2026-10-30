#include <iostream>
using namespace std;

void displayQuotient(double num1, double num2)
{
    if (num2 != 0)
    {
        cout<<"Quotient : "<<num1/num2<<endl;
    }
    else
    {
        cout<<"Cannot divide by zero. : "<<endl;
    }
}
