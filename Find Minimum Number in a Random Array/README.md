# Find Minimum Number in a Random Array

## 📌 Problem Description

Write a C++ program that generates random numbers between 1 and 100, stores them in an array, and finds the minimum number.

The program asks the user to enter the number of array elements, fills the array with random numbers, displays the array, and identifies the smallest value.

## 📥 Input Description

The program asks the user to enter the number of elements in the array.

**Input Example:**

```text
Enter number of elements: 5
```

## 📤 Output Description

Display all generated array elements and the minimum number.

**Output Example:**

```text
array Elements: 45 12 87 34 69

Min Number is: 12
```

*Note: The generated numbers are random, so the output will be different each time the program runs.*

## 💻 Examples

### Example 1

**Input:**

```text
Enter number of elements: 5
```

**Output:**

```text
array Elements: 45 12 87 34 69

Min Number is: 12
```

**Explanation:**

The program generates five random numbers and compares them to find the smallest value. The minimum number is `12`.

### Example 2

**Input:**

```text
Enter number of elements: 4
```

**Output:**

```text
array Elements: 12 95 34 67

Min Number is: 12
```

**Explanation:**

The smallest number in the array is `12`.

## 🧠 Solution Approach

1. Initialize the random number generator using the current time.
2. Ask the user to enter the number of array elements.
3. Fill the array with random numbers between 1 and 100.
4. Display all array elements.
5. Initialize `Min` with the first array element.
6. Loop through the array elements.
7. Compare each element with the current minimum.
8. If an element is smaller than `Min`, update its value.
9. Return and display the minimum number.

## 🛠️ Functions Used

| Function | Responsibility |
|---|---|
| `randomNumber()` | Generates a random number within a specified range. |
| `FillArrayWithRandomNumbers()` | Fills the array with random numbers between 1 and 100. |
| `PrintArray()` | Displays all elements of the array. |
| `MinOfRandomNumber()` | Finds and returns the minimum number in the array. |
| `main()` | Controls program execution and initializes the random number generator. |

## 🛠️ Concepts Used

- C++ Programming
- Functions
- Arrays
- For Loop
- If Statements
- Random Number Generation
- `rand()` Function
- `srand()` Function
- `time()` Function
- Function Parameters
- Reference Parameters (`int&`)
- Return Values
- Array Traversal
- Finding Minimum Value
- User Input and Output

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **Application Type:** Console Application
