
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
// Function: CountDigitFrequency
// Purpose: Counts how many times a digit appears
//          in the entered number.
// ==================================================

int CountDigitFrequency(int number, short DigitToCheck)
{
    int digit;
    int counter = 0;

    while (number > 0)
    {
        digit = number % 10;

        if (digit == DigitToCheck)
        {
            counter++;
        }

        number = number / 10;
    }

    return counter;
}


// ==================================================
// Main Function
// ==================================================

int main()
{
    int number = ReadPositiveNumber("Enter Number: ");

    int DigitToCheck = ReadPositiveNumber("Enter number to Check: ");

    cout << "Digit " << DigitToCheck
         << " Frequency is "
         << CountDigitFrequency(number, DigitToCheck);

    return 0;
}
