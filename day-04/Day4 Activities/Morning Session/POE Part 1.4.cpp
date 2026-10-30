#include <iostream>
using namespace std;

void getValues(int &num1,int &num2)
{
    cout<<"Enter 2 values : ";
    cin>>num1>>num2;
}

int calcSum(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int val1 = 0;
    int val2 = 0;

    getValues(val1, val2);
    cout<<val1<<" * "<<val2<<" = "<<calcSum(val1,val2)<<endl;

    return 0;
}
