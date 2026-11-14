# Prime Numbers from 1 to N

## Description

This C++ program reads a positive integer `N` from the user and prints all prime numbers between 1 and N.

A prime number is a natural number greater than 1 that has exactly two distinct positive divisors: 1 and itself.

The program uses functions, enumerations, loops, and the modulo operator to determine whether each number is prime.

## Example

**Input:**
```text
Please enter a positive integer (N): 20
```

**Output:**
```text
Prime numbers from 1 to 20 are:
2
3
5
7
11
13
17
19
```

## Features

- Reads a positive integer from the user.
- Validates that the entered integer is greater than zero.
- Checks whether a number is prime or not.
- Prints all prime numbers from 1 to N.
- Uses functions to organize and reuse code.
- Uses an enumeration (`enum`) to represent prime status.

## Concepts Practiced

- C++ Functions
- Function Parameters and Return Values
- Enumerations (`enum`)
- Do-While Loops
- For Loops
- Conditional Statements (`if`)
- Nested Loops
- Modulo Operator (`%`)
- Input Validation
- Boolean Logic and Number Theory

## How It Works

The program is divided into three main functions:

### 1. ReadPositiveNumber()

```cpp
int ReadPositiveNumber(string message)
```

Reads a positive integer from the user. It uses a `do-while` loop to keep requesting input until the entered number is greater than zero.

### 2. CheckPrimeStatus()

```cpp
enPrimeStatus CheckPrimeStatus(int number)
```

Determines whether a given number is prime or not.

- Returns `NotPrime` if the number is 1.
- Checks whether the number is divisible by any integer from 2 to `number / 2`.
- Uses the modulo operator (`%`) to check for a remainder of zero.
- Returns `NotPrime` if a divisor is found.
- Returns `Prime` if no divisor is found.

### 3. PrintPrimeNumbersFrom1ToN()

```cpp
void PrintPrimeNumbersFrom1ToN()
```

Reads the upper limit N, then iterates from 1 to N.

For each number, it calls `CheckPrimeStatus()` and prints the number only when its status is `Prime`.

## Enumeration

The program uses the following enumeration:

```cpp
enum enPrimeStatus {
    Prime = 1,
    NotPrime
};
```

This enumeration gives meaningful names to the two possible prime-checking results.

- `Prime = 1`
- `NotPrime = 2` (automatically assigned by C++).

## How to Compile and Run

Compile the program using a C++ compiler:

```bash
g++ Solutions.cpp -o PrimeNumbers
```

**Run on Windows:**

```bash
PrimeNumbers.exe
```

**Run on Linux or macOS:**

```bash
./PrimeNumbers
```

## Complexity Analysis

Let N be the input number.

- **Time Complexity:** O(N²) for the complete program in the worst case, because each candidate number may require checking divisors up to half of its value.
- **Space Complexity:** O(1), because the program uses a fixed number of variables and does not allocate additional data structures.

## Important Notes

- The number 1 is not prime.
- The smallest prime number is 2.
- Negative numbers and zero are rejected by the input validation function.
- A number is not prime if it has a divisor other than 1 and itself.

## Learning Objectives

- Understand how to check whether a number is prime.
- Practice using functions to divide a program into smaller tasks.
- Understand how enumerations represent different states.
- Apply nested loops to solve mathematical problems.
- Use the modulo operator to identify divisibility.
- Improve algorithmic thinking and problem-solving skills.

---

**Language:** C++  
**Project Type:** Console Application  
**Difficulty:** Beginner – Intermediate  
**Topic:** Prime Numbers / Number Theory
