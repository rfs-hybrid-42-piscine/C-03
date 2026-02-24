# 🟢 Exercise 00: ft_strcmp

## 📝 Objective
Create a function that reproduces the behavior of the standard C library function `strcmp`.

## 💡 The Logic
The goal of `strcmp` is to compare two strings character by character. 

We use a `while` loop to iterate simultaneously through both strings as long as the current characters are identical and we haven't reached a null-terminator (`\0`). The moment the loop breaks (either because a difference was found or a string ended), we must return the mathematical difference between the two characters.

*Crucial Trap:* Standard C library string comparisons are evaluated using `unsigned char`. We must explicitly cast the returned characters to `(unsigned char)` to prevent negative math errors if extended ASCII characters are tested.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strcmp.c`](ft_strcmp.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-03` directory. You must pass the `-D EX00` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX00 ../tester.c ft_strcmp.c -o test_ex00
   ./test_ex00
   ```
