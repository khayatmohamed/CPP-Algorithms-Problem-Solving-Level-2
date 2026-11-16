# Print Perfect Numbers From 1 to N

## 📌 Problem Description

Write a C++ program that reads a positive integer `N` and prints all Perfect Numbers from `1` to `N`.

A **Perfect Number** is a positive integer that is equal to the sum of its proper divisors (excluding itself).

### Examples

- `6` is a Perfect Number because: `1 + 2 + 3 = 6`
- `28` is a Perfect Number because: `1 + 2 + 4 + 7 + 14 = 28`
- `10` is NOT a Perfect Number because: `1 + 2 + 5 = 8`

## 💻 Example

**Input:**
```text
Please Enter Number: 30
```

**Output:**
```text
6
28
```

## 🧠 Solution Approach

The program uses the following functions:

1. **ReadPositiveNumber()**
   - Reads a positive integer from the user.
   - Repeats input until a valid positive number is entered.

2. **SumDivisors()**
   - Calculates the sum of all proper divisors of a given number.
   - Checks divisors from `1` to `number / 2`.

3. **IsPerfectNumber()**
   - Compares the number with the sum of its proper divisors.
   - Returns `Perfect` or `NotPerfect`.

4. **PrintPerfectNumberFrom1ToN()**
   - Iterates through all numbers from `1` to `N`.
   - Prints only Perfect Numbers.

## 🛠️ Concepts Used

- C++ Programming
- Enumerations (`enum`)
- Functions
- Loops (`for`, `do-while`)
- Conditional Statements (`if`)
- Modulus Operator (`%`)
- Function Return Values

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio

## 👨‍💻 Author

Mohamed Khayat
