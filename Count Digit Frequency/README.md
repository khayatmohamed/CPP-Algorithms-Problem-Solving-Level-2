# Count Digit Frequency

## 📌 Problem Description

Write a C++ program that reads a positive integer and a digit, then counts how many times the specified digit appears in the entered number.

## 📥 Input Description

The program asks the user to enter:

- A positive integer.
- A digit to check (from 0 to 9).

If the user enters zero or a negative number for the integer, the program displays `Invalid Input!` and asks again.

## 📤 Output Description

Display the number of times the specified digit appears in the entered number.

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 1223342
Enter number to Check: 2
```

**Output:**

```text
Digit 2 Frequency is 3
```

### Example 2

**Input:**

```text
Enter Number: 55555
Enter number to Check: 5
```

**Output:**

```text
Digit 5 Frequency is 5
```

### Example 3

**Input:**

```text
Enter Number: 123456
Enter number to Check: 7
```

**Output:**

```text
Digit 7 Frequency is 0
```

### Example 4

**Input:**

```text
Enter Number: 1002001
Enter number to Check: 0
```

**Output:**

```text
Digit 0 Frequency is 3
```

## 🧠 Solution Approach

The program counts the occurrences of a specific digit by processing the number one digit at a time:

1. Read a positive integer from the user.
2. Read the digit to check (0-9).
3. Extract the last digit using the Modulo Operator (`% 10`).
4. Compare the extracted digit with the specified digit.
5. If both digits are equal, increment the counter.
6. Remove the last digit using Integer Division (`/ 10`).
7. Repeat until the number becomes zero.
8. Return and display the final counter.

## 🛠️ Concepts Used

- C++ Programming
- Functions
- While Loop
- Do-While Loop
- Modulus Operator (`%`)
- Integer Division (`/`)
- Conditional Statements (`if`)
- Counter Variable
- Function Parameters and Return Values

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
