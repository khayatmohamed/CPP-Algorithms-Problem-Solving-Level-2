
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
void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {

    cout << "Enter number of elements :";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = randomNumber(1, 100);
    }

}


// Display all elements of the array.
void PrintArray(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';
}


// Find and return the minimum number in the array.
int MinOfRandomNumber(int arr[100], int arrLength) {

    int Min = arr[0];

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < Min) {
            Min = arr[i];
        }
    }

    return Min;
}


// Main Function
int main()
{
    // Initialize the random number generator.
    srand((unsigned)time(NULL));

    int arrLength;
    int arr[100];

    // Generate and display random array elements.
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "array Elements : ";
    PrintArray(arr, arrLength);

    // Display the minimum number in the array.
    cout << "Min Number is : " << MinOfRandomNumber(arr, arrLength);

    return 0;
}
