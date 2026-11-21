
#include <iostream>
#include <string>

using namespace std;

// ==================================================
// Function: ReadPassword
// Purpose: Read the 3-letter password from the user.
// ==================================================
string ReadPassword()
{
    string password;

    cout << "Please Enter a 3-Letter Password (all capital): ";
    cin >> password;

    return password;
}

// ==================================================
// Function: PrintTrial
// Purpose: Display the current trial number and guess.
// ==================================================
void PrintTrial(int trial, string word)
{
    cout << "Trial [" << trial << "]: " << word << endl;
}

// ==================================================
// Function: IsPasswordFound
// Purpose: Check whether the guess matches the password.
// ==================================================
bool IsPasswordFound(string password, string word)
{
    return password == word;
}

// ==================================================
// Function: PrintPasswordFound
// Purpose: Display the password and number of trials.
// ==================================================
void PrintPasswordFound(string password, int trial)
{
    cout << "\nPassword is " << password << endl;
    cout << "Found after " << trial << " trials." << endl;
}

// ==================================================
// Function: AllWordsFrom_AAA_To_ZZZ
// Purpose: Generate all 3-letter combinations from AAA to ZZZ
//          until the correct password is found.
// ==================================================
void AllWordsFrom_AAA_To_ZZZ(string password)
{
    int trial = 0;
    string word;

    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char k = 'A'; k <= 'Z'; k++)
            {
                // Build the current 3-letter guess.
                word = "";
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                // Count and display the current trial.
                trial++;
                PrintTrial(trial, word);

                // Check whether the password was found.
                if (IsPasswordFound(password, word))
                {
                    PrintPasswordFound(word, trial);
                    return;
                }
            }
        }
    }

}

// ==================================================
// Main Function
// ==================================================
int main()
{
    string password = ReadPassword();

    AllWordsFrom_AAA_To_ZZZ(password);

    return 0;
}
