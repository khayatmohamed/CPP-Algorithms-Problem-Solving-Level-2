
# Generate Random Numbers Within a Range

## 📌 Problem Description

Write a C++ program that generates random integers within a specified range.

The program uses a custom function called `RandomNumberGenerate()` that receives two parameters:

- `from`: The minimum value.
- `to`: The maximum value.

The function generates and returns a random integer between these two values, including both boundaries.

The program initializes the random number generator using the current system time and generates multiple random numbers within different ranges.

## 📥 Input Description

This program does not require user input.

The minimum and maximum values are passed directly to the `RandomNumberGenerate()` function.

**Example:**

```cpp
RandomNumberGenerate(8, 10);
RandomNumberGenerate(1, 10);
```

## 📤 Output Description

The program displays three random integers:

- One integer between 8 and 10.
- Two integers between 1 and 10.

The output changes between program executions because the random number generator is initialized using the current time.

## 💻 Examples

**Example 1:**

Output:

```text
9
4
8
```

**Example 2:**

Output:

```text
10
7
2
```

Note: These are sample outputs. Actual results may differ.

## 🧠 Solution Approach

1. Include the required C++ libraries:
   - `<iostream>` for input and output.
   - `<cstdlib>` for `rand()` and `srand()`.
   - `<ctime>` for `time()`.

2. Initialize the random number generator using `srand(time(NULL))`.

3. Create a function called `RandomNumberGenerate()`.

4. Pass the minimum and maximum values as function parameters.

5. Calculate the size of the requested range using:

   ```cpp
   to - from + 1
   ```

6. Use the modulo operator `%` to restrict the random number to the requested range.

7. Add the minimum value to shift the result into the correct range.

8. Return the generated random number.

9. Call the function multiple times with different ranges.

10. Display the generated numbers using `cout`.

## 🛠️ Concepts Used

- C++ Functions
- Function Parameters
- Return Values
- Random Number Generation
- `rand()` Function
- `srand()` Function
- `time()` Function
- Modulo Operator (`%`)
- Arithmetic Operations
- Standard Libraries
- Pseudo-Random Numbers

## 🔢 Random Number Formula

```cpp
rand() % (to - from + 1) + from;
```

### Formula Breakdown

| Expression | Purpose |
|---|---|
| `rand()` | Generates a pseudo-random integer. |
| `to - from` | Calculates the difference between the limits. |
| `+ 1` | Includes the maximum value. |
| `%` | Restricts the generated value. |
| `+ from` | Shifts the result to the minimum value. |

## ⏱️ Complexity Analysis

- **Time Complexity:** O(1) per random number generation. The function performs a fixed number of arithmetic operations.
- **Space Complexity:** O(1), because the function uses a fixed number of variables.

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **File:** Solution.cpp
