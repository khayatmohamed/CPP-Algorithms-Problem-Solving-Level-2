# Multiplication Table from 1 to 10

## Description

This C++ program generates and displays a multiplication table from 1 to 10.

The program uses functions and nested `for` loops to calculate and print multiplication results in a structured table.

## Features

- Generates a multiplication table from 1 to 10.
- Uses functions to organize the code.
- Uses nested `for` loops to process rows and columns.
- Uses a conditional operator (`?:`) to format column separators.
- Displays the results in a readable table.

## Concepts Practiced

- C++ Functions (`void`, `string`)
- Function Calling
- `for` Loops
- Nested Loops
- Conditional (Ternary) Operator
- String Return Values
- Console Output (`cout`)
- Code Organization and Reusability

## Project Structure

```text
MultiplicationTable/
│
├── Solutions.cpp
└── README.md
```

## How It Works

1. `printTableHeader()` displays the title and column numbers from 1 to 10.
2. `ColumnSeparator(int i)` returns a formatted column separator depending on the row number.
3. `printMultiplicationTable()` generates the multiplication table using nested loops:
   - The outer loop controls the rows.
   - The inner loop controls the columns.
   - The expression `i * j` calculates each multiplication result.
4. `main()` calls `printMultiplicationTable()` to execute the program.

## Example Output

```text
        Multiplication Table from 1 to 10

    1   2   3   4   5   6   7   8   9   10
________________________________________________

 1 |  1   2   3   4   5   6   7   8   9   10
 2 |  2   4   6   8  10  12  14  16  18   20
 3 |  3   6   9  12  15  18  21  24  27   30
 ...
10 | 10  20  30  40  50  60  70  80  90  100
```

## How to Compile and Run

Compile using a C++ compiler:

```bash
g++ Solutions.cpp -o MultiplicationTable
```

Run on Windows:

```bash
MultiplicationTable.exe
```

Run on Linux or macOS:

```bash
./MultiplicationTable
```

## Complexity Analysis

- **Time Complexity:** O(n²), because the program uses two nested loops.
- **Space Complexity:** O(1), because it uses a fixed number of variables and does not allocate additional data structures.

For this program, n = 10.

## Learning Objective

Practice using C++ functions and nested loops to generate structured console output and understand how outer and inner loops work together.

---

**Language:** C++  
**Project Type:** Console Application  
**Level:** Beginner
