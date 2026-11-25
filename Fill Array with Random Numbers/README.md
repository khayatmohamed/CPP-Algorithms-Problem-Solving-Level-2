# Fill Array with Random Numbers

## 📌 Problem Description

Write a C++ program that asks the user to enter the number of elements, then fills an array with random numbers between 1 and 100.

The program generates a random number for each array element and displays all the generated numbers.

## 📥 Input Description

The program asks the user to enter the number of elements to generate.

**Input Example:**

```text
Enter number of elements: 5
```

## 📤 Output Description

Display the array containing randomly generated numbers.

**Output Example:**

```text
array Elements: 45 12 87 34 69
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
```

### Example 2

**Input:**

```text
Enter number of elements: 7
```

**Output:**

```text
array Elements: 8 91 23 56 14 77 39
```

## 🧠 Solution Approach

The program generates random numbers and stores them in an array.

1. Initialize the random number generator using the current time.
2. Ask the user to enter the number of array elements.
3. Initialize the array.
4. Loop through the array elements.
5. Generate a random number between 1 and 100 using `randomNumber()`.
6. Store each generated number in the array.
7. Display all array elements using `PrintArray()`.

## 🛠️ Functions Used

| Function | Responsibility |
|---|---|
| `randomNumber()` | Generates a random number within a specified range. |
| `FillArrayWithRandomNumbers()` | Fills the array with random numbers between 1 and 100. |
| `PrintArray()` | Displays all elements of the array. |
| `main()` | Controls program execution and initializes the random number generator. |

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
- Return Values
- Array Traversal
- User Input and Output

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **Application Type:** Console Application
