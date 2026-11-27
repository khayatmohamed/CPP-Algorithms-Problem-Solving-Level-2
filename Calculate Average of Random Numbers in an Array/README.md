# Calculate Average of Random Numbers in an Array

## 📌 Problem Description

Write a C++ program that generates random numbers between 1 and 100, stores them in an array, and calculates the average of all array elements.

The program asks the user to enter the number of elements, fills the array with random numbers, displays the array, and calculates its average.

## 📥 Input Description

The program asks the user to enter the number of elements in the array.

**Input Example:**

```text
Enter number of elements: 5
```

## 📤 Output Description

Display all generated array elements and their average.

**Output Example:**

```text
Array Elements: 10 20 30 40 50

Average of All Numbers is: 30
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
Array Elements: 10 20 30 40 50

Average of All Numbers is: 30
```

**Explanation:**

The program generates five numbers, calculates their sum, and divides it by the number of elements.

(10 + 20 + 30 + 40 + 50) / 5 = 30

### Example 2

**Input:**

```text
Enter number of elements: 4
```

**Output:**

```text
Array Elements: 10 20 30 40

Average of All Numbers is: 25
```

**Explanation:**

The average of the four array elements is `25`.

## 🧠 Solution Approach

1. Initialize the random number generator using the current time.
2. Ask the user to enter the number of array elements.
3. Fill the array with random numbers between 1 and 100.
4. Display all array elements.
5. Initialize `Sum` to zero.
6. Calculate the sum of all array elements.
7. Divide the total sum by the array length.
8. Return and display the average.

## 🛠️ Functions Used

| Function | Responsibility |
|---|---|
| `randomNumber()` | Generates a random number within a specified range. |
| `FillArrayWithRandomNumbers()` | Fills the array with random numbers between 1 and 100. |
| `PrintArray()` | Displays all array elements. |
| `SumOfRandomNumber()` | Calculates the sum of all array elements. |
| `AverageOfRandomArray()` | Calculates and returns the average of the array elements. |
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
- Accumulator Variables
- Calculating Array Sum
- Calculating Average
- Integer Division
- User Input and Output

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **Application Type:** Console Application
