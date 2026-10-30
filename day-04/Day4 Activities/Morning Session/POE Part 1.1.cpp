#include <iostream>
using namespace std;

void getValues(int &num1,int &num2)
{
    cout<<"Enter 2 values : ";
    cin>>num1>>num2;
}
int main()
{
    int num1 = 0;
    int num2 = 0;

    getValues(num1, num2);
    cout<<num1<< " and "<<num2<<endl;

    return 0;

}
