#include <iostream>
using namespace std;

int main()
{
    char gender;

    cout << "Enter gender code: "<<endl;
    cin >> gender;

    switch (gender)
    {
    case 'M':
    case 'm':
       cout << "Female: "<<endl;
        break;
         case 'F':
              case 'f':

        cout << "Enter gender code: "<<endl;

        break;
        default:
        cout << "Invalid gender code!" << endl;
    }

    return 0;
}
