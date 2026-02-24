# 🟢 Exercise 02: ft_strcat

## 📝 Objective
Create a function that reproduces the behavior of the standard C library function `strcat`.

## 💡 The Logic
The `strcat` function appends the `src` string to the end of the `dest` string. 

First, we use a `while` loop to iterate through `dest` until we find its null-terminator (where the string officially ends). Starting from that exact index, we begin a second `while` loop to copy the characters from `src` directly into the end of the `dest` buffer. Finally, we manually append a new `\0` to ensure the resulting buffer remains a valid C string.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strcat.c`](ft_strcat.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-03` directory. You must pass the `-D EX02` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX02 ../tester.c ft_strcat.c -o test_ex02
   ./test_ex02
   ```
