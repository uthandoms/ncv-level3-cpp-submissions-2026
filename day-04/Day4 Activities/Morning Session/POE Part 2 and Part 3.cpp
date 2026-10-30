#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
double calcSum(double num1, double num2);
double calcDifference(double num1, double num2);
double calcProduct(double num1, double num2);
double calcQuotient(double num1, double num2);

int main()
{
    // Generate random numbers
    srand(time(0));

    double num1 = rand() % 50 + 1;
    double num2 = rand() % 50 + 1;

    char operation;

    // Display the random numbers
    cout << "First random number: " << num1 << endl;
    cout << "Second random number: " << num2 << endl;

    // Ask the user to choose an operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Select the correct function
    switch (operation)
    {
        case '+':
            cout << "Sum: "
                 << calcSum(num1, num2) << endl;
            break;

        case '-':
            cout << "Difference: "
                 << calcDifference(num1, num2) << endl;
            break;

        case '*':
            cout << "Product: "
                 << calcProduct(num1, num2) << endl;
            break;

        case '/':
            if (num2 != 0)
            {
                cout << "Quotient: "
                     << calcQuotient(num1, num2) << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed."
                     << endl;
            }
            break;

        default:
            cout << "Invalid operator! "
                 << "Please enter +, -, * or /." << endl;
    }

    return 0;
}

// Function to return the sum
double calcSum(double num1, double num2)
{
    return num1 + num2;
}

// Function to return the difference
double calcDifference(double num1, double num2)
{
    return num1 - num2;
}

// Function to return the product
double calcProduct(double num1, double num2)
{
    return num1 * num2;
}

// Function to return the quotient
double calcQuotient(double num1, double num2)
{
    return num1 / num2;
}
