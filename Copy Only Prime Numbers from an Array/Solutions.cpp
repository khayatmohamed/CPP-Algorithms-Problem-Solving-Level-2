
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

enum enPrimeNotPrime {
    Prime = 1,
    NotPrime
};


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


// Check whether a number is prime or not.
enPrimeNotPrime checkPrimeNumber(int number) {

    if (number < 2) {
        return NotPrime;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0) {
            return NotPrime;
        }
    }

    return Prime;
}


// Copy only prime numbers into the second array.
void CopyOnlyPrimeNumbersInArray(int OriginalArray[100], int CopiedArray[100], int ArrayLength, int& ArrayLengthCopy) {

    for (int i = 0; i < ArrayLength; i++)
    {
        if (checkPrimeNumber(OriginalArray[i]) == Prime) {
            CopiedArray[ArrayLengthCopy] = OriginalArray[i];
            ArrayLengthCopy++;
        }
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
    int ArrayLengthCopy = 0;

    // Generate and display the original array.
    FillArrayWithRandomNumbers(OriginalArray, ArrayLength);

    cout << "Array 1 Elements : ";
    PrintArray(OriginalArray, ArrayLength);

    // Copy and display only prime numbers.
    CopyOnlyPrimeNumbersInArray(OriginalArray, CopiedArray, ArrayLength, ArrayLengthCopy);

    cout << "Prime Numbers In Array 2 : ";
    PrintArray(CopiedArray, ArrayLengthCopy);

    return 0;
}
