
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// ==================================================
// Function: RandomNumberGenerate
// Purpose: Generate a random integer between From and To.
// Parameters:
//   from: Minimum value.
//   to:   Maximum value.
// Returns: A random integer within the specified range.
// ==================================================
int RandomNumberGenerate(int from, int to)
{
    int randomNumber = rand() % (to - from + 1) + from;

    return randomNumber;
}

// ==================================================
// Main Function
// Purpose: Initialize the random number generator
//          and display random numbers.
// ==================================================
int main()
{
    // Initialize the random number generator using current time.
    srand((unsigned)time(NULL));

    // Generate random numbers within different ranges.
    cout << RandomNumberGenerate(8, 10) << '\n';
    cout << RandomNumberGenerate(1, 10) << '\n';
    cout << RandomNumberGenerate(1, 10) << '\n';

    return 0;
}
