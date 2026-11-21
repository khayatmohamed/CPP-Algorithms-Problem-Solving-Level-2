
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
// Function: PrintLetterPattern
// Purpose: Prints an increasing letter pattern.
// ==================================================

void PrintLetterPattern(int number)
{
    char letter = 'A';

    // Outer loop controls the number of rows.
    for (int i = 1; i <= number; i++)
    {
        // Inner loop prints the current letter.
        for (int j = 1; j <= i; j++)
        {
            cout << letter;
        }

        // Move to the next line after each row.
        cout << '\n';

        // Move to the next letter alphabetically.
        letter++;
    }
}


// ==================================================
// Main Function
// ==================================================

int main()
{
    int number = ReadPositiveNumber("Enter Number: ");

    PrintLetterPattern(number);

    return 0;
}
