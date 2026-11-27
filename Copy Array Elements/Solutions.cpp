
#include <iostream>
#include <string>
#include <random>
#include <limits>

using namespace std;


// Generate a random number within a specified range.
int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}


// Fill the array with random numbers between 1 and 100.
void FillArrayWithRandomNumbers(int OriginalArray[100], int& ArrayLength) {

    cout << "Enter number of elements :";
    cin >> ArrayLength;

    for (int i = 0; i < ArrayLength; i++)
    {
        OriginalArray[i] = randomNumber(1, 100);
    }

}


// Display all array elements.
void PrintArray(int Array[100], int ArrayLength) {

    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Array[i] << " ";
    }

    cout << '\n';
}


// Copy all elements from the original array to the copied array.
void CopyArray(int OriginalArray[100], int CopiedArray[100], int ArrayLength) {

    for (int i = 0; i < ArrayLength; i++)
    {
        CopiedArray[i] = OriginalArray[i];
    }

}


// Main Function
int main()
{
    // Initialize the random number generator.
    srand((unsigned)time(NULL));

    int ArrayLength;
    int OriginalArray[100];
    int CopiedArray[100];

    // Generate and display the original array.
    FillArrayWithRandomNumbers(OriginalArray, ArrayLength);

    cout << "Array 1 Elements : ";
    PrintArray(OriginalArray, ArrayLength);

    // Copy and display the array elements.
    CopyArray(OriginalArray, CopiedArray, ArrayLength);

    cout << "Array 2 Elements after copy : ";
    PrintArray(CopiedArray, ArrayLength);

    return 0;
}
