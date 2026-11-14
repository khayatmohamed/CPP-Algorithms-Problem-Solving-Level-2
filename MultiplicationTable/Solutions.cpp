
#include <iostream>
#include <string>

using namespace std;

void printTableHeader()
{
    cout << "\t\t\tMultiplication Table from 1 to 10\n\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }

    cout << "\n__________________________________________________________________________________\n";
}

string ColumnSeparator(int i)
{
    return (i < 10) ? "   |" : "  |";
}

void printMultiplicationTable()
{
    printTableHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumnSeparator(i) << "\t";

        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }

        cout << '\n';
    }
}

int main()
{
    printMultiplicationTable();

    return 0;
}

