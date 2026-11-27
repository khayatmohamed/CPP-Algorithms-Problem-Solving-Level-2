# Copy Array Elements

## 📌 Problem Description

Write a C++ program that generates random numbers between 1 and 100, stores them in an array, and copies all elements into another array.

The program asks the user to enter the number of elements, fills the original array with random numbers, copies its elements into a second array, and displays both arrays.

## 📥 Input Description

The program asks the user to enter the number of elements in the array.

**Input Example:**

```text
Enter number of elements: 5
```

## 📤 Output Description

Display the original array and the copied array.

**Output Example:**

```text
Array 1 Elements : 45 12 87 34 69

Array 2 Elements after copy : 45 12 87 34 69
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
Array 1 Elements : 45 12 87 34 69

Array 2 Elements after copy : 45 12 87 34 69
```

**Explanation:**

The program generates five random numbers and copies each element from the original array into the second array.

Both arrays contain the same elements in the same order.

## 🧠 Solution Approach

1. Initialize the random number generator using the current time.
2. Ask the user to enter the number of array elements.
3. Fill the original array with random numbers between 1 and 100.
4. Display the original array.
5. Create a second array to store the copied elements.
6. Loop through the original array.
7. Copy each element into the corresponding position in the second array.
8. Display the copied array.

## 🛠️ Functions Used

| Function | Responsibility |
|---|---|
| `randomNumber()` | Generates a random number within a specified range. |
| `FillArrayWithRandomNumbers()` | Fills the original array with random numbers. |
| `PrintArray()` | Displays all array elements. |
| `CopyArray()` | Copies elements from the original array into another array. |
| `main()` | Controls program execution. |

## 🛠️ Concepts Used

- C++ Programming
- Functions
- Arrays
- For Loop
- Random Number Generation
- `rand()` Function
- `srand()` Function
- `time()` Function
- Function Parameters
- Reference Parameters (`int&`)
- Array Traversal
- Copying Array Elements
- User Input and Output

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **Application Type:** Console Application
