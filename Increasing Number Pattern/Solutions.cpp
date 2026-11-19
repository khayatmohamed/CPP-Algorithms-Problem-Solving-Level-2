
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

        if (number <= 0)
        {
            cout << "Invalid Input!" << endl;
        }
      

    } while (number <= 0);

    return number;
}


// ==================================================
// Function: NumberPattern
// Purpose: Prints an increasing number pattern.
// ==================================================

void NumberPattern(int number)
{
    for (int i = 1; i <= number; i++)
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

    NumberPattern(number);

    return 0;
}
