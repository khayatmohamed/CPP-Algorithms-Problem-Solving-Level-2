
# Increasing Letter Pattern

## 📌 Problem Description

Write a C++ program that reads a positive integer from the user and prints an increasing letter pattern using nested loops.

The pattern starts with the uppercase letter `A` and increases alphabetically in each new row.

Each row contains the same letter repeated according to its row number.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the user enters zero or a negative number, the program displays `Invalid Input!` and asks again.

## 📤 Output Description

Print an increasing letter pattern based on the entered number.

- Start with the uppercase letter `A`.
- Increase the letter by one in each new row.
- Repeat each letter according to its row number.
- Each row must be printed on a separate line.
- The last row contains the corresponding uppercase letter.

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 5
```

**Output:**

```text
A
BB
CCC
DDDD
EEEEE
```

### Example 2

**Input:**

```text
Enter Number: 3
```

**Output:**

```text
A
BB
CCC
```

### Example 3

**Input:**

```text
Enter Number: 7
```

**Output:**

```text
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
```

### Example 4 – Invalid Input

**Input:**

```text
Enter Number: -5
Invalid Input!
Enter Number: 3
```

**Output:**

```text
A
BB
CCC
```

## 🧠 Solution Approach

The program uses two functions to read the input and generate the increasing letter pattern:

1. Read a positive integer from the user.
2. Call `PrintLetterPattern` to generate the pattern.
3. Initialize a character variable with the letter `'A'`.
4. Use an outer `for` loop to control the rows.
5. Start the outer loop from `1` and increase its counter by one after each row.
6. Use an inner `for` loop to control how many times each letter is printed.
7. Print the current letter inside the inner loop.
8. Repeat the current letter until the inner loop reaches the outer loop counter.
9. Move to a new line after finishing each row.
10. Move to the next letter alphabetically using the Increment Operator (`++`).
11. Repeat the process until the outer loop reaches the entered number.

## 🛠️ Concepts Used

- C++ Programming
- Functions
- Function Parameters and Return Values
- Nested For Loops
- Outer Loop
- Inner Loop
- Character Data Type (`char`)
- ASCII Character Values
- Character Arithmetic
- Increment Operator (`++`)
- Conditional Statements (`if`)
- Input Validation
- Pattern Printing

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
