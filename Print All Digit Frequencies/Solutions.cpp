
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
// Purpose: Counts how many times a specific digit
//          appears in the given number.
// ==================================================

int CountDigitFrequency(int number, int digitToCheck)
{
    int digit;
    int frequency = 0;

    while (number > 0)
    {
        digit = number % 10;

        if (digit == digitToCheck)
        {
            frequency++;
        }

        number = number / 10;
    }

    return frequency;
}

// ==================================================
// Function: PrintAllDigitFrequencies
// Purpose: Checks digits from 0 to 9 and prints
//          the frequency of each digit that appears.
// ==================================================

void PrintAllDigitFrequencies(int number)
{
    for (int digit = 0; digit <= 9; digit++)
    {
        int frequency = CountDigitFrequency(number, digit);

        if (frequency > 0)
        {
            cout << "Digit " << digit
                << " Frequency is " << frequency
                << " Time(s)." << endl;
        }
    }
}

// ==================================================
// Main Function
// ==================================================

int main()
{
    int number = ReadPositiveNumber("Enter Number: ");
    PrintAllDigitFrequencies(number);

   

    return 0;
}
