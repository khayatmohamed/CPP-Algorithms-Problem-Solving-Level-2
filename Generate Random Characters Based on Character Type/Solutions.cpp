
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// ==================================================
// Enum: enCharType
// Purpose: Defines the supported character types.
// ==================================================
enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

// ==================================================
// Function: RandomNumberGenerate
// Purpose: Generates a random number within a range.
// ==================================================
int RandomNumberGenerate(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

// ==================================================
// Function: GetRandomCharacter
// Purpose: Returns a random character based on its type.
// ==================================================
char GetRandomCharacter(enCharType charType)
{
    switch (charType)
    {
    case SmallLetter:
        return (char)RandomNumberGenerate(97, 122);

    case CapitalLetter:
        return (char)RandomNumberGenerate(65, 90);

    case SpecialCharacter:
        return (char)RandomNumberGenerate(33, 47);

    case Digit:
        return (char)RandomNumberGenerate(48, 57);

    default:
        return '\0';
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << "Small Letter: " << GetRandomCharacter(SmallLetter) << '\n';
    cout << "Capital Letter: " << GetRandomCharacter(CapitalLetter) << '\n';
    cout << "Special Character: " << GetRandomCharacter(SpecialCharacter) << '\n';
    cout << "Digit: " << GetRandomCharacter(Digit) << '\n';

    return 0;
}
