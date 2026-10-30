#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i, num ;

    for (i = 1; i < 2; i++)
    {
        cout << "Enter number " << i;
        cin >> num;
        sum = sum + num;
    }

    cout << "Sum is: "<< sum;

    return 0;
}
