
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


// Calculate and return the sum of all array elements.
int SumOfRandomNumber(int arr[100], int arrLength) {

    int Sum = 0;

    for (int i = 0; i < arrLength; i++)
    {
        Sum += arr[i];
    }

    return Sum;
}


// Calculate and return the average of the array elements.
int AverageOfRandomArray(int arr[100], int arrlength) {
    return SumOfRandomNumber(arr, arrlength) / arrlength;
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

    cout << "Array Elements : ";
    PrintArray(arr, arrLength);

    // Display the average of all array elements.
    cout << "Average of All Numbers is  : " << AverageOfRandomArray(arr, arrLength);

    return 0;
}
