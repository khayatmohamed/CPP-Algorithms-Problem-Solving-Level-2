# Reverse Number

## 📌 Problem Description

Write a C++ program that reads a positive integer from the user and reverses its digits.

The program extracts each digit from the number and builds a new number with the digits in reverse order.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the user enters zero or a negative number, the program displays `Invalid Input!` and asks again.

**Input Example:**

```text
Enter Number: 1234
```

## 📤 Output Description

Display the reversed number.

**Output Example:**

```text
Reverse Number of 1234 is: 4321
```

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 1234
```

**Output:**

```text
Reverse Number of 1234 is: 4321
```

**Explanation:**

```text
1234 → 4321
```

### Example 2

**Input:**

```text
Enter Number: 567
```

**Output:**

```text
Reverse Number of 567 is: 765
```

**Explanation:**

```text
567 → 765
```

### Example 3

**Input:**

```text
Enter Number: 1200
```

**Output:**

```text
Reverse Number of 1200 is: 21
```

**Explanation:**

```text
1200 → 0021 → 21
```

### Example 4

**Input:**

```text
Enter Number: 9
```

**Output:**

```text
Reverse Number of 9 is: 9
```

## 🧠 Solution Approach

The program processes the number one digit at a time:

1. Read a positive integer from the user.
2. Initialize `Result` to zero.
3. Extract the last digit using the Modulo Operator (`% 10`).
4. Multiply `Result` by 10 and add the extracted digit.
5. Remove the last digit using Integer Division (`/ 10`).
6. Repeat until the number becomes zero.
7. Return and display the reversed number.

## 🛠️ Concepts Used

- C++ Programming
- Functions
- While Loop
- Do-While Loop
- Modulus Operator (`%`)
- Integer Division (`/`)
- Conditional Statements (`if`)
- Building a Number Digit by Digit
- Function Parameters and Return Values
- User Input and Output
- Input Validation

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
- Application Type: Console Application
