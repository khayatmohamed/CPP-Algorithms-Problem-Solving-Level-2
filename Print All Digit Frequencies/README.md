# Print All Digit Frequencies

## 📌 Problem Description

Write a C++ program that reads a positive integer and counts how many times each digit (0-9) appears in the entered number.

The program prints the frequency of each digit that appears at least once in the number.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the user enters zero or a negative number, the program displays `Invalid Input!` and asks again.

## 📤 Output Description

Print the frequency of each digit (0-9) that appears in the entered number.

- Display each digit only once.
- Show how many times each digit appears.
- Do not display digits that have a frequency of zero.

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 1223222
```

**Output:**

```text
Digit 1 Frequency is 1 Time(s).
Digit 2 Frequency is 5 Time(s).
Digit 3 Frequency is 1 Time(s).
```

### Example 2

**Input:**

```text
Enter Number: 55555
```

**Output:**

```text
Digit 5 Frequency is 5 Time(s).
```

### Example 3

**Input:**

```text
Enter Number: 1002001
```

**Output:**

```text
Digit 0 Frequency is 4 Time(s).
Digit 1 Frequency is 2 Time(s).
Digit 2 Frequency is 1 Time(s).
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
Digit 1 Frequency is 1 Time(s).
Digit 2 Frequency is 1 Time(s).
Digit 3 Frequency is 1 Time(s).
```

## 🧠 Solution Approach

The program uses two functions to calculate and display the frequency of all digits:

1. Read a positive integer from the user.
2. Use a `for` loop to iterate through all digits from 0 to 9.
3. Call `CountDigitFrequency` to calculate the frequency of each digit.
4. Inside the function, use a `while` loop to process the number one digit at a time.
5. Extract the last digit using the Modulo Operator (`% 10`).
6. Compare the extracted digit with the digit being checked.
7. Increment the frequency counter when both digits are equal.
8. Remove the last digit using Integer Division (`/ 10`).
9. Return the calculated frequency.
10. Print the digit only if its frequency is greater than zero.

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
- Nested Function Calls

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
