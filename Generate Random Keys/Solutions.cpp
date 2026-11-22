
#include <iostream>
#include <string>
#include <random>
#include <limits>

using namespace std;

// ==================================================
// Enum: enCharType
// Purpose: Define the types of characters to generate.
// ==================================================
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

// ==================================================
// Function: ReadPositiveNumber
// Purpose: Read and validate a positive integer.
// ==================================================
int ReadPositiveNumber(string Message)
{
    int Number = 0;  
    do
    {
        cout << Message ;
        cin >> Number;           
    } while (Number <= 0);      
    return Number;
}

// ==================================================
// Function: RandomNumberGenerate
// Purpose: Generate a random number between from and to.
// ==================================================

int RandomNumberGenerate(int from, int to) {
    int randomNumber = rand() % (to - from + 1) + from;
    return randomNumber;
}

// ==================================================
// Function: GetRandomCharacter
// Purpose: Generate a random character based on its type.
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

// ==================================================
// Function: GenerateWord
// Purpose: Generate a random word of a specified length.
// ==================================================
string GenerateWord(enCharType charType, short length)
{
    string word = "";

    for (int i = 0; i < length; i++)
    {
        word += GetRandomCharacter(charType);
    }

    return word;
}

// ==================================================
// Function: GenerateKey
// Purpose: Generate one key containing four groups
//          of four uppercase letters.
// ==================================================
string GenerateKey()
{
    return GenerateWord(CapitalLetter, 4) + "-" +
           GenerateWord(CapitalLetter, 4) + "-" +
           GenerateWord(CapitalLetter, 4) + "-" +
           GenerateWord(CapitalLetter, 4);
}

// ==================================================
// Function: PrintKey
// Purpose: Display a key with its number.
// ==================================================
void PrintKey(int keyNumber, string key)
{
    cout << "Key [" << keyNumber << "] : " << key << '\n';
}

// ==================================================
// Function: GenerateKeys
// Purpose: Generate and display the requested number of keys.
// ==================================================
void GenerateKeys(int numberOfKeys)
{
    for (int i = 1; i <= numberOfKeys; i++)
    {
        PrintKey(i, GenerateKey());
    }
}

// ==================================================
// Main Function
// ==================================================
int main()
{
    srand((unsigned)time(NULL));
    int numberOfKeys = ReadPositiveNumber(
        "Please enter how many keys to generate? : "
    );

    GenerateKeys(numberOfKeys);

    return 0;
}
