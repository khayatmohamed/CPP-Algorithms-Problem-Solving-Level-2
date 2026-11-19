# Check Whether a Number Is Palindrome or Not

## 📌 Problem Description

Write a C++ program that reads a positive integer and checks whether it is a **Palindrome Number** or not.

A palindrome number is a number that remains the same when its digits are reversed.

For example:
- `121` → Palindrome Number.
- `12321` → Palindrome Number.
- `1221` → Palindrome Number.
- `123` → Not a Palindrome Number.
- `1234` → Not a Palindrome Number.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the entered number is zero or negative, the program displays an error message and asks the user to enter another number.

## 📤 Output Description

The program displays whether the entered number is a Palindrome Number or not.

- If the number is equal to its reversed version, display: `Yes, it is a Palindrome Number.`
- Otherwise, display: `No, it is not a Palindrome Number.`

## 💡 Example

**Example 1:**

```text
Enter Number: 121
Yes, it is a Palindrome Number.
```

**Example 2:**

```text
Enter Number: 1234
No, it is not a Palindrome Number.
```

**Example 3:**

```text
Enter Number: 12321
Yes, it is a Palindrome Number.
```

## 🧠 Problem-Solving Approach

The solution uses the **Reverse Number** technique.

1. Read a positive integer from the user.
2. Store the original number.
3. Reverse the digits of the number using a `while` loop.
4. Extract the last digit using the modulo operator `% 10`.
5. Build the reversed number using:

   `reversedNumber = reversedNumber * 10 + digit`

6. Remove the last digit using integer division `/ 10`.
7. Compare the original number with the reversed number.
8. If both numbers are equal, the number is a palindrome; otherwise, it is not.

## ⚙️ Functions Used

| Function | Responsibility |
|---|---|
| `ReadPositiveNumber()` | Reads and validates a positive integer. |
| `ReverseNumber()` | Reverses the digits of a given number. |
| `IsPalindromeNumber()` | Checks whether the original number equals its reversed version. |

## 🛠️ Technologies Used

- **Language:** C++
- **Library:** `<iostream>`
- **Library:** `<string>`
- **Concepts:** Functions, Boolean Return Values, While Loop, If-Else, Modulo Operator (`%`), Integer Division (`/`).

## ⏱️ Complexity Analysis

- **Time Complexity:** O(d), where `d` is the number of digits in the input number.
- **Space Complexity:** O(1), because the algorithm uses a fixed number of variables.

## 🎯 Learning Objectives

- Understand how to reverse the digits of an integer.
- Practice using the modulo operator and integer division.
- Understand Boolean functions and return values.
- Practice dividing a problem into smaller functions.
- Learn how to compare an original number with its reversed version.
