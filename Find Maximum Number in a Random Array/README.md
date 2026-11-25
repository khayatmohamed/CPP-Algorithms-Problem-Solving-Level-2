# Find Maximum Number in a Random Array

## 📌 Problem Description

Write a C++ program that generates random numbers between 1 and 100, stores them in an array, and finds the maximum number.

The program asks the user to enter the number of array elements, fills the array with random numbers, displays the array, and identifies the largest value.

## 📥 Input Description

The program asks the user to enter the number of elements in the array.

**Input Example:**

```text
Enter number of elements: 5
```

## 📤 Output Description

Display all generated array elements and the maximum number.

**Output Example:**

```text
array Elements: 45 12 87 34 69

Max Number is: 87
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

Max Number is: 87
```

**Explanation:**

The program generates five random numbers and compares them to find the largest value. The maximum number is `87`.

### Example 2

**Input:**

```text
Enter number of elements: 4
```

**Output:**

```text
array Elements: 12 95 34 67

Max Number is: 95
```

**Explanation:**

The largest number in the array is `95`.

## 🧠 Solution Approach

1. Initialize the random number generator using the current time.
2. Ask the user to enter the number of array elements.
3. Fill the array with random numbers between 1 and 100.
4. Display all array elements.
5. Initialize `Max` with the first array element.
6. Loop through the array elements.
7. Compare each element with the current maximum.
8. If an element is greater than `Max`, update its value.
9. Return and display the maximum number.

## 🛠️ Functions Used

| Function | Responsibility |
|---|---|
| `randomNumber()` | Generates a random number within a specified range. |
| `FillArrayWithRandomNumbers()` | Fills the array with random numbers between 1 and 100. |
| `PrintArray()` | Displays all elements of the array. |
| `MaxOfRandomNumber()` | Finds and returns the maximum number in the array. |
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
- Finding Maximum Value
- User Input and Output

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **Application Type:** Console Application
