
#include <iostream>
#include <string>

using namespace std;


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
// Function: ReverseNumber
// Purpose: Reverses the digits of a given number.
// ==================================================

int ReverseNumber(int number)
{
    int digit;
    int reversedNumber = 0;

    while (number > 0)
    {
        digit = number % 10;

        reversedNumber = reversedNumber * 10 + digit;

        number = number / 10;
    }

    return reversedNumber;
}


// ==================================================
// Function: IsPalindromeNumber
// Purpose: Checks whether a number is a palindrome.
// Returns: true if palindrome, otherwise false.
// ==================================================

bool IsPalindromeNumber(int number)
{
    return number == ReverseNumber(number);
}


// ==================================================
// Main Function
// ==================================================

int main()
{
    int number = ReadPositiveNumber("Enter Number: ");

    if (IsPalindromeNumber(number))
    {
        cout << "Yes, it is a Palindrome Number." << endl;
    }
    else
    {
        cout << "No, it is not a Palindrome Number." << endl;
    }

    return 0;
}
