
#include <iostream>
#include <string>
#include <random>
#include <limits>

using namespace std;

// ==================================================
// Function: ReadPositiveNumber
// Purpose: Read and validate a positive integer.
// Parameters:
//      Message: The message displayed to the user.
// Returns:
//      A positive integer.
// ==================================================

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    // Keep asking until the user enters a positive number.
    do
    {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}


// ==================================================
// Function: ReadArray
// Purpose: Read the array length and its elements.
// Parameters:
//      arr: The array that stores the elements.
//      arrLength: Reference variable to store array size.
// Returns:
//      Nothing (void).
// ==================================================

void ReadArray(int arr[100], int& arrLength) {

    // Read the number of elements.
    cout << "Enter number of elements :";
    cin >> arrLength;

    // Read each element and store it in the array.
    cout << "\nEnter Array elements : " << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cout << "\nElement [" << i + 1 << "]:";
        cin >> arr[i];
    }

}


// ==================================================
// Function: PrintArray
// Purpose: Display all elements of the array.
// Parameters:
//      arr: The array to display.
//      arrLength: The number of elements in the array.
// Returns:
//      Nothing (void).
// ==================================================

void PrintArray(int arr[100], int arrLength) {

    // Loop through the array and print each element.
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';
}


// ==================================================
// Function: TimeRepeated
// Purpose: Count how many times a number appears in the array.
// Parameters:
//      number: The number to search for.
//      arr: The array to search in.
//      arrLength: The number of elements in the array.
// Returns:
//      The total number of occurrences.
// ==================================================

int TimeRepeated(int number, int arr[100], int arrLength) {

    // Initialize the counter to zero.
    int count = 0;

    // Traverse the array and compare each element.
    for (int i = 0; i < arrLength; i++)
    {
        // If the current element matches the given number,
        // increment the counter.
        if (number == arr[i]) {
            count++;
        }
    }

    // Return the total number of occurrences.
    return count;
}


// ==================================================
// Main Function
// Purpose: Control the program execution.
// ==================================================

int main()
{
    // Declare array variables.
    int arrLength;
    int arr[100];
    int numberToCheck;

    // Read array elements from the user.
    ReadArray(arr, arrLength);

    // Read the number whose frequency will be checked.
    numberToCheck = ReadPositiveNumber("\nEnter the number you want to check: ");

    // Display the original array.
    cout << "\nOriginal array : ";
    PrintArray(arr, arrLength);

    // Display how many times the specified number appears.
    cout << '\n' << numberToCheck << " is repeated "
         << TimeRepeated(numberToCheck, arr, arrLength)
         << " Time(s)";

    cout << '\n';

    return 0;
}
