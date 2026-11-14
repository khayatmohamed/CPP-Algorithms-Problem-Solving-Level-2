
#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Enum: Prime Number Status
// ==================================================

enum enPrimeStatus {
    Prime = 1,
    NotPrime
};


// ==================================================
// Function: ReadPositiveNumber
// Description: Reads a positive integer from the user.
// ==================================================

int ReadPositiveNumber(string message) {

    int number;

    do {
        cout << message;
        cin >> number;

        if (number <= 0) {
            cout << "Invalid Input! Please enter a positive number.\n";
        }

    } while (number <= 0);

    return number;
}


// ==================================================
// Function: CheckPrimeStatus
// Description: Checks whether a number is Prime or NotPrime.
// ==================================================

enPrimeStatus CheckPrimeStatus(int number) {

    if (number == 1) {
        return NotPrime;
    }

    for (int i = 2; i <= number / 2; i++) {

        if (number % i == 0) {
            return NotPrime;
        }
    }

    return Prime;
}


// ==================================================
// Function: PrintPrimeNumbersUpToN
// Description: Prints all prime numbers from 1 to N.
// ==================================================

void PrintPrimeNumbersFrom1ToN() {

    int number = ReadPositiveNumber(
        "Please enter a positive integer (N): "
    );

    cout << "\nPrime numbers from 1 to " << number << " are:\n";

    for (int i = 1; i <= number; i++) {

        if (CheckPrimeStatus(i) == Prime) {
            cout << i << endl;
        }
    }
}


// ==================================================
// Main Function
// ==================================================

int main() {

    PrintPrimeNumbersFrom1ToN();

    return 0;
}
