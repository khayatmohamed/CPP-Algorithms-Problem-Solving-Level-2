
#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Enum: Perfect Number Status
// ==================================================

enum enPerfectNumberStatus {
    Perfect = 1,
    NotPerfect
};


// ==================================================
// Function: ReadPositiveNumber
// ==================================================

int ReadPositiveNumber(string message) {

    int number;

    do {
        cout << message;
        cin >> number;

        if (number <= 0) {
            cout << "Invalid Input!\n";
        }

    } while (number <= 0);

    return number;
}


// ==================================================
// Function: SumDivisors
// Description: Returns the sum of proper divisors.
// ==================================================

int SumDivisors(int number) {

    int sum = 0;

    for (int i = 1; i <= number / 2; i++) {

        if (number % i == 0) {
            sum += i;
        }
    }

    return sum;
}


// ==================================================
// Function: IsPerfectNumber
// ==================================================

enPerfectNumberStatus IsPerfectNumber(int number) {

    if (number == SumDivisors(number)) {
        return Perfect;
    }

    return NotPerfect;
}


// ==================================================
// Function: PrintPerfectNumbersFrom1ToN
// ==================================================

void PrintPerfectNumberFrom1ToN(int number) {
    for (int i = 1; i <= number; i++)
    {
        if (IsPerfectNumber(i) == Perfect) {
            cout << i << endl;
        }
    }
}







// ==================================================
// Main Function
// ==================================================

int main() {

    PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter Number: "));

    return 0;
}
