
#include <iostream>
#include <string>
#include <limits>

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

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid Input!" << endl;
            number = 0;
        }
        else if (number <= 0)
        {
            cout << "Invalid Input!" << endl;
        }

    } while (number <= 0);

    return number;
}


// ==================================================
// Function: InvertedNumberPattern
// Purpose: Prints an inverted number pattern.
// ==================================================

void InvertedNumberPattern(int number)
{
    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }

        cout << '\n';
    }
}


// ==================================================
// Main Function
// ==================================================

int main()
{
    int number = ReadPositiveNumber("Enter Number: ");

    InvertedNumberPattern(number);

    return 0;
}
