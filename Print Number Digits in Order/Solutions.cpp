
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
// Function: CountNumberDigits
// Purpose: Counts the number of digits in a number.
// ==================================================

int CountNumberDigits(int number) 
{
    int counter = 0;

    while (number > 0)
    {
        counter++;
        number = number / 10;
    }

    return counter;
}





int GetDivisor(int Number)
{
    int Divior = 1;

    int numberOfDigit = CountNumberDigits(Number);

    for (int i = 1; i < numberOfDigit; i++)
        Divior = Divior * 10;// 10  -> 100 ->1000

    return Divior;
}



// ==================================================
// Function: PrintNumberInOrder
// Purpose: Prints all digits from left to right.
// ==================================================

void PrintNumberInOrder(int number)
{

    int divisor = GetDivisor(number);
    while (divisor > 0)
    {
        int digit = number / divisor;

        cout << digit << endl; 

        number = number % divisor;
        divisor = divisor / 10;
    }
}


// ==================================================
// Main Function
// ==================================================

int main()
{
    int number = ReadPositiveNumber("Enter Number: ");

    PrintNumberInOrder(number);

    return 0;
}
