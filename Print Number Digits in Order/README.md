
# Print Number Digits in Order

## 📌 Problem Description

Write a C++ program that reads a positive integer and prints all its digits separately, starting from the leftmost digit to the rightmost digit.

The program extracts and displays each digit in the same order as it appears in the original number.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the user enters zero or a negative number, the program displays `Invalid Input!` and asks again.

## 📤 Output Description

Print all digits of the entered number from left to right.

- Display each digit on a separate line.
- Preserve the original order of the digits.
- Display all digits, including zeros.

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 12345
```

**Output:**

```text
1
2
3
4
5
```

### Example 2

**Input:**

```text
Enter Number: 5678
```

**Output:**

```text
5
6
7
8
```

### Example 3

**Input:**

```text
Enter Number: 1002
```

**Output:**

```text
1
0
0
2
```

### Example 4 – Invalid Input

**Input:**

```text
Enter Number: -10
Invalid Input!
Enter Number: 123
```

**Output:**

```text
1
2
3
```

## 🧠 Solution Approach

The program uses four functions to extract and display the digits of the entered number:

1. Read a positive integer from the user.
2. Use `CountNumberDigits` to calculate the total number of digits in the entered number.
3. Call `GetDivisor` to calculate the divisor needed to extract the leftmost digit.
4. Inside `GetDivisor`, start with a divisor of `1`.
5. Use a `for` loop to multiply the divisor by `10` until it reaches the highest power of `10` needed.
6. Call `PrintNumberInOrder` to display the digits from left to right.
7. Extract the leftmost digit using Integer Division (`/`).
8. Print the extracted digit.
9. Remove the extracted digit using the Modulus Operator (`%`).
10. Divide the divisor by `10` to move to the next digit.
11. Repeat the process until all digits have been printed.

## 🛠️ Concepts Used

- C++ Programming
- Functions
- Function Parameters and Return Values
- For Loop
- While Loop
- Do-While Loop
- Modulus Operator (`%`)
- Integer Division (`/`)
- Conditional Statements (`if`)
- Counter Variable
- Mathematical Operations
- Input Validation
- Nested Function Calls

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
