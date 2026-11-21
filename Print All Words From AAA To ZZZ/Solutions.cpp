
#include <iostream>

using namespace std;


// ==================================================
// Function: PrintAllWordsFrom_AAA_To_ZZZ
// Purpose: Prints all possible three-letter
//          combinations from AAA to ZZZ.
// ==================================================

void PrintAllWordsFrom_AAA_To_ZZZ()
{
    // First loop controls the first letter.
    for (char i = 'A'; i <= 'Z'; i++)
    {
        // Second loop controls the second letter.
        for (char j = 'A'; j <= 'Z'; j++)
        {
            // Third loop controls the third letter.
            for (char k = 'A'; k <= 'Z'; k++)
            {
                // Print the three-letter combination.
                cout << i << j << k << '\n';
            }
        }
    }
}


// ==================================================
// Main Function
// ==================================================

int main()
{
    PrintAllWordsFrom_AAA_To_ZZZ();

    return 0;
}
