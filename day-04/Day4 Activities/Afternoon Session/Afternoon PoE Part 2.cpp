
#include <iostream>
using namespace std;

const int SIZE = 5;

// Function prototypes
void populateArray(int numbers[], int sz);
int countEven(int numbers[], int sz);
void displayOdd(int numbers[], int sz);
void sortArray(int numbers[], int sz);
void displaySorted(int numbers[], int sz);

int main()
{
    int numbers[SIZE];
    int evenCount;

    // Enter five numbers
    populateArray(numbers, SIZE);

    // Count even numbers
    evenCount = countEven(numbers, SIZE);
    cout << "\nNumber of even numbers: "
         << evenCount << endl;

    // Display odd numbers
    cout << "\nOdd numbers in the array:" << endl;
    displayOdd(numbers, SIZE);

    // Sort the array
    sortArray(numbers, SIZE);

    // Display sorted numbers
    cout << "\nNumbers in ascending order:" << endl;
    displaySorted(numbers, SIZE);

    return 0;
}

// Function to populate the array
void populateArray(int numbers[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
}

// Function to count even numbers using switch
int countEven(int numbers[], int sz)
{
    int evenCount = 0;

    for (int i = 0; i < sz; i++)
    {
        switch (numbers[i] % 2)
        {
            case 0:
                evenCount++;
                break;

            default:
                break;
        }
    }

    return evenCount;
}

// Function to display odd numbers using switch
void displayOdd(int numbers[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        switch (numbers[i] % 2)
        {
            case 0:
                break;

            default:
                cout << numbers[i] << endl;
                break;
        }
    }
}

// Function to sort numbers in ascending order
void sortArray(int numbers[], int sz)
{
    int temp;

    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

// Function to display sorted numbers
void displaySorted(int numbers[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        cout << numbers[i] << endl;
    }
}
