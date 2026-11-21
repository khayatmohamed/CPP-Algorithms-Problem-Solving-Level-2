
# Print All Words From AAA To ZZZ

## 📌 Problem Description

Write a C++ program that prints all possible three-letter combinations using uppercase English letters, starting from `AAA` and ending with `ZZZ`.

The program uses three nested `for` loops to generate every possible combination.

Each combination consists of exactly three uppercase letters.

## 📥 Input Description

This program does not require any user input.

The combinations are generated automatically using three nested loops.

## 📤 Output Description

Print all possible three-letter combinations from `AAA` to `ZZZ`.

- Use uppercase English letters from `A` to `Z`.
- Each combination must contain exactly three letters.
- Print each combination on a separate line.
- Generate all possible combinations without repetition of the same combination.
- Start with `AAA`.
- End with `ZZZ`.

## 💻 Examples

### Example 1 – Beginning of Output

**Output:**

```text
AAA
AAB
AAC
AAD
AAE
AAF
...
```

### Example 2 – Middle of Output

**Output:**

```text
...
AZX
AZY
AZZ
BAA
BAB
BAC
...
```

### Example 3 – End of Output

**Output:**

```text
...
ZZU
ZZV
ZZW
ZZX
ZZY
ZZZ
```

## 🧠 Solution Approach

The program uses one function containing three nested `for` loops to generate all possible three-letter combinations:

1. Call `PrintAllWordsFrom_AAA_To_ZZZ` from the main function.
2. Use the first `for` loop to control the first letter, starting from `A` and ending at `Z`.
3. Use the second `for` loop to control the second letter, starting from `A` and ending at `Z`.
4. Use the third `for` loop to control the third letter, starting from `A` and ending at `Z`.
5. Print the three current characters together using `cout`.
6. Move to a new line after printing each combination.
7. Continue until all three loops finish.
8. The program generates all possible combinations from `AAA` to `ZZZ`.

## 🛠️ Concepts Used

- C++ Programming
- Functions
- Nested For Loops
- Three-Level Nested Loops
- Character Data Type (`char`)
- ASCII Character Values
- Character Increment (`++`)
- Loop Counters
- Output Formatting
- Combinatorial Logic

## ⏱️ Complexity Analysis

- **Time Complexity:** O(26³) = O(1), since the alphabet size is fixed.
- **Space Complexity:** O(1).

Total combinations:

```text
26 × 26 × 26 = 17,576
```

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
