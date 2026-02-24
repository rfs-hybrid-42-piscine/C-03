# 🟢 Exercise 01: ft_strncmp

## 📝 Objective
Create a function that reproduces the behavior of the standard C library function `strncmp`.

## 💡 The Logic
Unlike `strcmp`, `strncmp` compares *at most* `n` bytes of the two strings. 

We use the same logic as `ex00`, but we add a tracker for `n`. The `while` loop continues only if `n > 0`, the characters match, and we haven't hit a null-terminator. If the loop exhausts the `n` limit without finding any differences, the strings are considered equal up to that point, and we return `0`. Otherwise, we return the difference cast to `unsigned char`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strncmp.c`](ft_strncmp.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-03` directory. You must pass the `-D EX01` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX01 ../tester.c ft_strncmp.c -o test_ex01
   ./test_ex01
   ```
