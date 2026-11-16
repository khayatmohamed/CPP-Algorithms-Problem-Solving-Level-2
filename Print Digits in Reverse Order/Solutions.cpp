
#include <iostream>
#include <string>

using namespace std;




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




void PrintDigitsInReverseOrder(int number) {
    int Digit = 0;
    while (number > 0) {
        Digit = number % 10;
        cout << Digit << endl;
        number = number / 10;

    }
}




int main() {

    PrintDigitsInReverseOrder(ReadPositiveNumber("Enter Number : "));
    return 0;
}
