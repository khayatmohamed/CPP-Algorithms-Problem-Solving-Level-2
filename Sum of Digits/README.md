# Sum of Digits

## 📌 Problem Description

Write a C++ program that reads a positive integer and calculates the sum of all its digits.

The program extracts each digit from the number and adds it to the total sum.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the user enters zero or a negative number, the program displays `Invalid Input!` and asks again.

**Input Example:**

```text
Enter Number: 1234
```

## 📤 Output Description

Display the sum of all digits of the entered number.

**Output Example:**

```text
Sum Of Digits is 10
```

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 1234
```

**Output:**

```text
Sum Of Digits is 10
```

**Explanation:**

```text
1 + 2 + 3 + 4 = 10
```

### Example 2

**Input:**

```text
Enter Number: 5007
```

**Output:**

```text
Sum Of Digits is 12
```

**Explanation:**

```text
5 + 0 + 0 + 7 = 12
```

### Example 3

**Input:**

```text
Enter Number: 1200
```

**Output:**

```text
Sum Of Digits is 3
```

**Explanation:**

```text
1 + 2 + 0 + 0 = 3
```

### Example 4

**Input:**

```text
Enter Number: 9
```

**Output:**

```text
Sum Of Digits is 9
```

## 🧠 Solution Approach

The program processes the number one digit at a time:

1. Read a positive integer from the user.
2. Initialize `Sum` to zero.
3. Extract the last digit using the Modulo Operator (`% 10`).
4. Add the extracted digit to `Sum`.
5. Remove the last digit using Integer Division (`/ 10`).
6. Repeat until the number becomes zero.
7. Return and display the final sum.

## 🛠️ Concepts Used

- C++ Programming
- Functions
- While Loop
- Do-While Loop
- Modulus Operator (`%`)
- Integer Division (`/`)
- Conditional Statements (`if`)
- Accumulator Variable (`Sum`)
- Function Parameters and Return Values

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
