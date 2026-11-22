
#  Generate Random Characters Based on Character Type

## 📌 Problem Description

Write a C++ program that generates random characters based on a specified character type.

The program supports four character types:

1. Small Letters (`a-z`)
2. Capital Letters (`A-Z`)
3. Special Characters (`!` to `/`)
4. Digits (`0-9`)

Each character is generated randomly using a function that accepts a minimum and maximum value.

## 📥 Input Description

The program does not require user input.

The character type is passed directly to the `GetRandomCharacter()` function using an enum value.

## 📤 Output Description

The program displays four randomly generated characters:

- One small letter.
- One capital letter.
- One special character.
- One digit.

## 💻 Example

**Example Output:**

```text
Small Letter: m
Capital Letter: K
Special Character: $
Digit: 7
```

*Note: The output changes each time the program runs.*

## 🧠 Solution Approach

The solution is divided into two main functions:

### 1. RandomNumberGenerate(int from, int to)

Generates a random integer within a specified range.

**Formula:**

```cpp
rand() % (to - from + 1) + from
```

### 2. GetRandomCharacter(enCharType charType)

Uses a `switch` statement to determine the requested character type.

Depending on the selected type, it generates a random ASCII value and converts it into a character.

### ASCII Ranges

| Character Type | ASCII Range | Characters |
|---|---:|---|
| Small Letter | 97–122 | a-z |
| Capital Letter | 65–90 | A-Z |
| Special Character | 33–47 | ! to / |
| Digit | 48–57 | 0-9 |

## 🛠️ Concepts Used

- C++ Functions
- Enumerations (`enum`)
- Switch Statements
- Random Number Generation (`rand()`)
- Random Number Seeding (`srand()`)
- ASCII Character Codes
- Type Casting
- Function Parameters and Return Values

## ⏱️ Complexity Analysis

| Function | Time Complexity | Space Complexity |
|---|---|---|
| RandomNumberGenerate() | O(1) | O(1) |
| GetRandomCharacter() | O(1) | O(1) |

**Explanation:**

Both functions perform a fixed number of operations without loops or recursion.

Therefore, their time and space complexities are constant.

## 🚀 Technologies

- Language: C++
- IDE: Visual Studio
- Source File: `Solutions.cpp`
