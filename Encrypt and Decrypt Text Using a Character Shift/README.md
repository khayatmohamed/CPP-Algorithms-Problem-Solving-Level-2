
# Encrypt and Decrypt Text Using a Character Shift

## 📌 Problem Description

Write a C++ program that reads a text from the user, encrypts it using a fixed encryption key, and then decrypts the encrypted text to recover the original message.

The program uses a simple character-shifting technique:

- **Encryption:** Adds the encryption key to each character.
- **Decryption:** Subtracts the encryption key from each character.

The encryption key is set to `2`.

## 📥 Input Description

- A text entered by the user.
- The program uses a fixed encryption key of `2`.

**Example:**
```text
ABC
```

## 📤 Output Description

The program displays three results:

1. Original text before encryption.
2. Encrypted text after shifting each character.
3. Decrypted text after reversing the shift.

## 💻 Examples

**Example 1:**

Input:
```text
ABC
```

Output:
```text
Please enter text to encrypt: ABC

Text Before Encryption : ABC
Text After Encryption  : CDE
Text After Decryption  : ABC
```

**Example 2:**

Input:
```text
Hello
```

Output:
```text
Please enter text to encrypt: Hello

Text Before Encryption : Hello
Text After Encryption  : Jgnnq
Text After Decryption  : Hello
```

## 🧠 Solution Approach

1. Define a constant encryption key with the value `2`.
2. Read the original text from the user using `ReadText()`.
3. Pass the original text and encryption key to `EncryptText()`.
4. Use a `for` loop to iterate through every character in the text.
5. Add the encryption key to each character to generate the encrypted text.
6. Pass the encrypted text and encryption key to `DecryptText()`.
7. Use another `for` loop to subtract the encryption key from every character.
8. Return the decrypted text.
9. Display the original, encrypted, and decrypted text using `PrintResults()`.

## 🛠️ Concepts Used

- C++ Functions
- Function Parameters and Return Values
- Strings (`string`)
- Character Manipulation
- Character Arithmetic
- `getline()` Function
- `for` Loops
- Array-Style String Indexing
- Constant Variables (`const`)
- Encryption and Decryption Concepts

## ⏱️ Complexity Analysis

Let `n` represent the number of characters in the input text.

- **Time Complexity:** O(n) for encryption and O(n) for decryption. Both operations together are O(n).
- **Space Complexity:** O(n) for storing the encrypted and decrypted strings.

## 🔐 Encryption Example

With an encryption key of `2`:

| Original Character | Encrypted Character |
|---|---|
| A | C |
| B | D |
| C | E |
| D | F |
| E | G |
| H | J |

**Encryption formula:**

```text
Encrypted Character = Original Character + Encryption Key
```

**Decryption formula:**

```text
Original Character = Encrypted Character - Encryption Key
```

## 🚀 Technologies

- **Language:** C++
- **IDE:** Visual Studio
- **File:** Solution.cpp
