# Count Number Frequency in an Array

## 📌 Problem Description

Write a C++ program that reads an array of integers from the user, then asks the user to enter a number to search for.

The program counts how many times the specified number appears in the array and displays the total occurrences.

## 📥 Input Description

The program asks the user to:

1. Enter the number of elements in the array.
2. Enter the array elements one by one.
3. Enter the number they want to check.

**Input Example:**

```text
Enter number of elements: 5

Enter Array elements:
Element [1]: 10
Element [2]: 20
Element [3]: 10
Element [4]: 30
Element [5]: 10

Enter the number you want to check: 10
```

## 📤 Output Description

Display the original array and the number of times the specified value appears.

**Output Example:**

```text
Original array: 10 20 10 30 10

10 is repeated 3 Time(s)
```

## 💻 Examples

### Example 1

**Input:**

```text
Array: 10 20 10 30 10
Number to check: 10
```

**Output:**

```text
10 is repeated 3 Time(s)
```

**Explanation:**

The number `10` appears three times in the array.

### Example 2

**Input:**

```text
Array: 5 8 3 8 2
Number to check: 8
```

**Output:**

```text
8 is repeated 2 Time(s)
```

**Explanation:**

The number `8` appears two times in the array.

### Example 3

**Input:**

```text
Array: 1 2 3 4 5
Number to check: 9
```

**Output:**

```text
9 is repeated 0 Time(s)
```

**Explanation:**

The number `9` does not exist in the array.

## 🧠 Solution Approach

1. Read the array length.
2. Fill the array with user input.
3. Ask the user for the number they want to check.
4. Initialize a counter variable to zero.
5. Loop through all array elements.
6. Compare each element with the specified number.
7. If the element matches, increment the counter.
8. Return the total number of occurrences.
9. Display the original array and the result.

## 🛠️ Functions Used

| Function               | Responsibility                       |
| ---------------------- | ------------------------------------ |
| `ReadPositiveNumber()` | Reads a positive integer.            |
| `ReadArray()`          | Reads the array length and elements. |
| `PrintArray()`         | Displays all array elements.         |
| `TimeRepeated()`       | Counts the occurrences of a number.  |
| `main()`               | Controls program execution.          |

## 🛠️ Concepts Used

- C++ Programming
- Functions
- Arrays
- For Loop
- Do-While Loop
- If Statements
- Function Parameters
- Reference Parameters (`int&`)
- Return Values
- Counter Variables
- Array Traversal
- Searching in Arrays
- Counting Element Frequency
- User Input and Output

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **Application Type:** Console Application
