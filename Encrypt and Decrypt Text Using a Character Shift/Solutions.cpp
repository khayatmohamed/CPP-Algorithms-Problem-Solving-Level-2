
#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Function: ReadText
// Purpose: Read a complete line of text from the user.
// ==================================================
string ReadText(string message)
{
    string text;

    cout << message;
    getline(cin, text);

    return text;
}

// ==================================================
// Function: EncryptText
// Purpose: Encrypt text by shifting each character
//          forward using the encryption key.
// ==================================================
string EncryptText(string text, short encryptionKey)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] += encryptionKey;
    }

    return text;
}

// ==================================================
// Function: DecryptText
// Purpose: Decrypt text by shifting each character
//          backward using the encryption key.
// ==================================================
string DecryptText(string text, short encryptionKey)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] -= encryptionKey;
    }

    return text;
}

// ==================================================
// Function: PrintResults
// Purpose: Display the original, encrypted, and
//          decrypted text.
// ==================================================
void PrintResults(string originalText, string encryptedText, string decryptedText)
{
    cout << "\nText Before Encryption : " << originalText << '\n';
    cout << "Text After Encryption  : " << encryptedText << '\n';
    cout << "Text After Decryption  : " << decryptedText << '\n';
}

// ==================================================
// Main Function
// ==================================================
int main()
{
    const short EncryptionKey = 2;

    string text = ReadText("Please enter text to encrypt: ");

    string encryptedText = EncryptText(text, EncryptionKey);

    string decryptedText = DecryptText(encryptedText, EncryptionKey);

    PrintResults(text, encryptedText, decryptedText);

    return 0;
}
