# Print Digits in Reverse Order

## 📌 Problem Description

Write a C++ program that reads a positive integer and prints its digits in reverse order, with each digit displayed on a separate line.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the user enters zero or a negative number, the program displays `Invalid Input!` and asks again.

## 📤 Output Description

Print all digits of the entered number in reverse order.

Each digit must be displayed on a separate line.

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 1234
```

**Output:**

```text
4
3
2
1
```

### Example 2

**Input:**

```text
Enter Number: 5007
```

**Output:**

```text
7
0
0
5
```

### Example 3

**Input:**

```text
Enter Number: 1200
```

**Output:**

```text
0
0
2
1
```

### Example 4 – Invalid Input

**Input:**

```text
Enter Number: -5
Invalid Input!
Enter Number: 123
```

**Output:**

```text
3
2
1
```

## 🧠 Solution Approach

The program processes the number one digit at a time:

1. Read a positive integer from the user.
2. Extract the last digit using the Modulo Operator (`% 10`).
3. Print the extracted digit.
4. Remove the last digit using Integer Division (`/ 10`).
5. Repeat until the number becomes zero.

## 🛠️ Concepts Used

- C++ Programming
- Functions
- While Loop
- Do-While Loop
- Modulus Operator (`%`)
- Integer Division (`/`)
- Conditional Statements (`if`)
- Function Parameters and Return Values

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio

