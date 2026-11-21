
# Guess a 3-Letter Password (AAA to ZZZ)

## 📌 Problem Description

Write a C++ program that asks the user to enter a 3-letter password consisting of uppercase English letters (A–Z).

The program generates all possible 3-letter combinations, starting from `AAA` and ending at `ZZZ`, until it finds the password entered by the user.

For every generated combination, the program displays the trial number and the current word.

When the password is found, the program displays the password and the total number of trials required.

## 📥 Input Description

- A 3-letter password.
- The password must contain only uppercase English letters (A–Z).

**Example:**
```text
ABC
```

## 📤 Output Description

- Display each generated combination with its trial number.
- Display the password when it is found.
- Display the total number of trials required.

## 💻 Examples

**Example 1:**

Input:
```text
ABC
```

Output:
```text
Please Enter a 3-Letter Password (all capital): ABC
Trial [1]: AAA
Trial [2]: AAB
Trial [3]: AAC
...
Trial [29]: ABC

Password is ABC
Found after 29 trials.
```

**Example 2:**

Input:
```text
AAA
```

Output:
```text
Please Enter a 3-Letter Password (all capital): AAA
Trial [1]: AAA

Password is AAA
Found after 1 trials.
```

**Example 3:**

Input:
```text
ZZZ
```

Output:
```text
Password is ZZZ
Found after 17576 trials.
```

## 🧠 Solution Approach

1. Read the password from the user using `ReadPassword()`.
2. Initialize the trial counter to `0`.
3. Use three nested `for` loops to generate all uppercase letter combinations.
4. Start each loop from `'A'` and continue until `'Z'`.
5. Reset the `word` string before building each new combination.
6. Concatenate the three current characters to create a 3-letter word.
7. Increment the trial counter.
8. Display the current trial and generated word using `PrintTrial()`.
9. Compare the generated word with the password using `IsPasswordFound()`.
10. If they match, display the password and number of trials using `PrintPasswordFound()`, then stop the search with `return`.

## 🛠️ Concepts Used

- C++ Functions
- String Manipulation
- Nested `for` Loops
- Three-Level Nested Loops
- Character Data Type (`char`)
- String Concatenation
- Conditional Statements (`if`)
- Boolean Functions (`bool`)
- Function Parameters and Return Values
- Counter Variables
- ASCII Character Sequence
- `return` Statement

## ⏱️ Complexity Analysis

- **Time Complexity:** O(26³) = O(17,576) in the worst case.
- **Space Complexity:** O(1), because the program uses a fixed number of variables and a string of three characters.

## 🔢 Total Combinations

The English alphabet contains 26 uppercase letters.

Therefore:

```text
26 × 26 × 26 = 17,576 combinations
```

The program can generate a maximum of **17,576 trials** before finding the password.

## 🔁 Nested Loops Explanation

| Loop | Purpose |
|---|---|
| First loop (`i`) | Controls the first letter. |
| Second loop (`j`) | Controls the second letter. |
| Third loop (`k`) | Controls the third letter. |

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **File:** Solution.cpp
