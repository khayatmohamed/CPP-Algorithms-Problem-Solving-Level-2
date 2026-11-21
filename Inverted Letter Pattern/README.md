
# Inverted Letter Pattern

## 📌 Problem Description

Write a C++ program that reads a positive integer and prints an inverted letter pattern using nested loops.

The pattern starts with the uppercase letter corresponding to the entered number and decreases alphabetically in each new row.

Each row contains the same letter repeated according to its row number.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the user enters zero or a negative number, the program displays `Invalid Input!` and asks again.

## 📤 Output Description

Print an inverted letter pattern based on the entered number.

- Start with the corresponding uppercase letter.
- Decrease the letter by one in each new row.
- Repeat each letter according to its row number.
- Each row must be printed on a separate line.
- The last row must contain the letter `A`.

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 5
```

**Output:**

```text
EEEEE
DDDD
CCC
BB
A
```

### Example 2

**Input:**

```text
Enter Number: 3
```

**Output:**

```text
CCC
BB
A
```

### Example 3

**Input:**

```text
Enter Number: 7
```

**Output:**

```text
GGGGGGG
FFFFFF
EEEEE
DDDD
CCC
BB
A
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
CCC
BB
A
```

## 🧠 Solution Approach

The program uses two functions to read the input and generate the inverted letter pattern:

1. Read a positive integer from the user.
2. Call `PrintInvertedLetterPattern` to generate the pattern.
3. Initialize a character variable using the expression `'A' + (number - 1)`.
4. Use an outer `for` loop to control the rows.
5. Start the outer loop from the entered number.
6. Decrease the outer loop counter by one after each row.
7. Use an inner `for` loop to control how many times each letter is printed.
8. Print the current letter inside the inner loop.
9. Move to a new line after finishing each row.
10. Decrease the character variable using the Decrement Operator (`--`).
11. Repeat the process until the outer loop reaches `1`.

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
- Decrement Operator (`--`)
- Conditional Statements (`if`)
- Input Validation
- Pattern Printing

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
