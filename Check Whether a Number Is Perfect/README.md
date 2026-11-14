# Perfect Number Checker

## Description

This C++ program checks whether a positive integer is a Perfect Number.

A Perfect Number is a positive integer that is equal to the sum of its proper divisors, excluding the number itself.

For example, 28 is a Perfect Number because its proper divisors are 1, 2, 4, 7, and 14.

**Calculation:**

```text
1 + 2 + 4 + 7 + 14 = 28
```

## Example

**Input:**

```text
Please Enter Number: 28
```

**Output:**

```text
28 is a Perfect Number.
```

Another example:

**Input:**

```text
Please Enter Number: 12
```

**Output:**

```text
12 is NOT a Perfect Number.
```

## Features

- Reads a positive integer from the user.
- Validates the input to ensure the number is greater than zero.
- Calculates the sum of the proper divisors.
- Determines whether the number is perfect.
- Displays the result clearly.
- Uses an enumeration to represent the number status.
- Organizes the program into reusable functions.

## Concepts Practiced

- C++ Functions
- Function Parameters and Return Values
- Enumerations (`enum`)
- Do-While Loops
- For Loops
- Conditional Statements (`if / else`)
- Modulo Operator (`%`)
- Input Validation
- Number Theory
- Code Organization and Reusability

## How It Works

The program is divided into four main functions:

### 1. ReadPositiveNumber()

```cpp
int ReadPositiveNumber(string message)
```

Reads a positive integer from the user using a `do-while` loop.

If the entered number is zero or negative, the program displays an error message and requests another number.

### 2. SumDivisors()

```cpp
int SumDivisors(int number)
```

Calculates and returns the sum of all proper divisors of the given number.

The loop starts at 1 and continues up to `number / 2`.

The modulo operator (`%`) checks whether a number is divisible without a remainder.

If:

```cpp
number % i == 0
```

then `i` is a divisor and is added to the sum.

The number itself is excluded from the calculation.

### 3. IsPerfectNumber()

```cpp
enPerfectNumberStatus IsPerfectNumber(int number)
```

Compares the number with the sum of its proper divisors.

- Returns `Perfect` if both values are equal.
- Returns `NotPerfect` otherwise.

### 4. PrintPerfectNumberResult()

```cpp
void PrintPerfectNumberResult()
```

Reads the number, calls `IsPerfectNumber()`, and displays whether the number is perfect or not.

## Enumeration

The program uses an enumeration to represent the two possible results:

```cpp
enum enPerfectNumberStatus {
    Perfect = 1,
    NotPerfect
};
```

- `Perfect`: The number is a Perfect Number.
- `NotPerfect`: The number is not a Perfect Number.

## How to Compile and Run

Compile using a C++ compiler:

```bash
g++ Solutions.cpp -o PerfectNumberChecker
```

**Run on Windows:**

```bash
PerfectNumberChecker.exe
```

**Run on Linux or macOS:**

```bash
./PerfectNumberChecker
```

## Complexity Analysis

Let N be the input number.

- **Time Complexity:** O(N), because the `SumDivisors()` function checks potential divisors from 1 to N/2.
- **Space Complexity:** O(1), because the program uses a fixed number of variables and does not allocate additional data structures.

## Important Notes

- The number 1 is not a Perfect Number.
- The smallest Perfect Number is 6.
- The proper divisors exclude the number itself.
- The program accepts positive integers.

## Learning Objectives

- Understand the mathematical definition of Perfect Numbers.
- Learn how to find and sum the proper divisors of a number.
- Practice using functions to separate program responsibilities.
- Understand how enumerations represent different program states.
- Apply loops and conditional statements to solve mathematical problems.
- Improve algorithmic thinking and problem-solving skills.

---

**Language:** C++  
**Project Type:** Console Application  
**Difficulty:** Beginner – Intermediate  
**Topic:** Perfect Numbers / Number Theory
