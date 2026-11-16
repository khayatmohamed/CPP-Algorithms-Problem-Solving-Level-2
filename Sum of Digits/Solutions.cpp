
#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Problem: Sum of Digits
//
// Input:
// A positive integer entered by the user.
//
// Output:
// The sum of all digits of the entered number.
//
// Example:
// Input:  1234
// Output: Sum Of Digits is 10
// ==================================================


// ==================================================
// Function: ReadPositiveNumber
// Purpose: Reads a positive number from the user.
// ==================================================

int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message;
        cin >> number;

        if (number <= 0)
        {
            cout << "Invalid Input!" << endl;
        }

    } while (number <= 0);

    return number;
}


// ==================================================
// Function: SumOfDigits
// Purpose: Calculates the sum of all digits.
// ==================================================

int SumOfDigits(int number)
{
    int digit;
    int sum = 0;

    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }

    return sum;
}


// ==================================================
// Main Function
// ==================================================

int main()
{
    int number = ReadPositiveNumber("Enter Number: ");

    cout << "Sum Of Digits is " << SumOfDigits(number) << endl;

    return 0;
}
