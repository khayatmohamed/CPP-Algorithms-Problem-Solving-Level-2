
# Inverted Number Pattern

## 📌 Problem Description

Write a C++ program that reads a positive integer from the user and prints an inverted number pattern using nested loops.

The pattern starts with the entered number and decreases by one in each new row.

Each row contains the same digit repeated according to its row number.

## 📥 Input Description

The program asks the user to enter a positive integer.

- The input must be greater than zero.
- If the user enters zero or a negative number, the program displays `Invalid Input!` and asks again.

## 📤 Output Description

Print an inverted number pattern based on the entered number.

- Start with the entered number.
- Decrease the number by one in each new row.
- Repeat each number according to its value.
- Each row must be printed on a separate line.
- The last row must contain the number `1`.

## 💻 Examples

### Example 1

**Input:**

```text
Enter Number: 5
```

**Output:**

```text
55555
4444
333
22
1
```

### Example 2

**Input:**

```text
Enter Number: 3
```

**Output:**

```text
333
22
1
```

### Example 3

**Input:**

```text
Enter Number: 7
```

**Output:**

```text
7777777
666666
55555
4444
333
22
1
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
333
22
1
```

## 🧠 Solution Approach

The program uses two functions to read the input and generate the inverted number pattern:

1. Read a positive integer from the user.
2. Call `InvertedNumberPattern` to generate the pattern.
3. Use an outer `for` loop to control the rows.
4. Start the outer loop from the entered number.
5. Decrease the outer loop counter by one after each row.
6. Use an inner `for` loop to control how many times each number is printed.
7. Print the current value of the outer loop counter inside the inner loop.
8. Repeat the current number until the inner loop reaches the outer loop counter.
9. Move to a new line after finishing each row.
10. Continue until the outer loop reaches `1`.

## 🛠️ Concepts Used

- C++ Programming
- Functions
- Function Parameters
- Return Values
- Nested For Loops
- Outer Loop
- Inner Loop
- Loop Counters
- Decrement Operator (`--`)
- Conditional Statements (`if`)
- Input Validation
- Pattern Printing

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
