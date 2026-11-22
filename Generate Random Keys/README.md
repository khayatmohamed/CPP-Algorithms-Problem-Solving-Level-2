
# Generate Random Keys

## 📌 Problem Description

Write a C++ program that generates a specified number of random keys.

Each key consists of four groups of four uppercase letters, separated by hyphens.

**Key Format:**

    XXXX-XXXX-XXXX-XXXX

Example:

    ABCD-EFGH-IJKL-MNOP

## 📥 Input Description

The user enters a positive integer representing the number of keys to generate.

## 📤 Output Description

The program displays the requested number of randomly generated keys.

Each key is displayed with its corresponding number.

## 💻 Examples

**Input:**

    Please enter how many keys to generate? : 3

**Output (example):**

    Key [1] : ABCD-EFGH-IJKL-MNOP
    Key [2] : QWER-TYUI-OPAS-DFGH
    Key [3] : ZXCV-BNML-KJHG-FDSA

Note: The generated keys will be different because they are random.

## 🧠 Solution Approach

1. Read the number of keys from the user.
2. Use a `do-while` loop to ensure the entered number is positive.
3. Define an enumeration (`enum`) containing four character types.
4. Generate random numbers within specified ASCII ranges using `rand()`.
5. Convert the generated numbers into characters.
6. Generate a word using the specified character type and length.
7. Generate four groups of four uppercase letters.
8. Combine the four groups using hyphens.
9. Repeat the process until the requested number of keys is generated.
10. Display each generated key with its number.

## 🛠️ Concepts Used

- C++ Functions
- Enumerations (`enum`)
- Switch Statements
- Random Number Generation (`rand()`)
- ASCII Character Codes
- For Loops
- Do-While Loops
- Strings
- Character Types
- Function Decomposition
- Return Values
  
## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
