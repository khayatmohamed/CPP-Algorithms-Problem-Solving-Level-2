
#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Problem: Reverse Number
//
// Input:
// A positive integer entered by the user.
//
// Output:
// The reverse of the entered number.
//
// Example:
// Input:  1234
// Output: Reverse Number is 4321
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
            cout << "Invalid Input! Please enter a positive number."
                 << endl;
        }

    } while (number <= 0);

    return number;
}


// ==================================================
// Function: ReverseNumber
// Purpose: Reverses the digits of a given number.
// ==================================================

int ReverseNumber(int number)
{
    int digit;
    int result = 0;

    while (number > 0)
    {
        digit = number % 10;
        result = result * 10 + digit;
        number = number / 10;
    }

    return result;
}


// ==================================================
// Main Function
// ==================================================

int main()
{
    int number = ReadPositiveNumber("Enter Number: ");

    cout << "Reverse Number of " << number
         << " is: " << ReverseNumber(number) << endl;

    return 0;
}
