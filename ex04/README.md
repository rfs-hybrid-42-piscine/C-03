# 🟢 Exercise 04: ft_strstr

## 📝 Objective
Create a function that reproduces the behavior of the standard C library function `strstr`.

## 💡 The Logic
The `strstr` function locates a substring (`to_find`) within a larger string (`str`). 

First, we handle the edge case: if `to_find` is an empty string, we return `str` immediately. 
Otherwise, we iterate through `str`. Whenever a character in `str` matches the very first character of `to_find`, we enter a nested loop to check if the subsequent characters match. If we successfully reach the `\0` of `to_find`, we have found a complete match and return a pointer to that starting address in `str`. If we check the entire string and find nothing, we return `NULL`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strstr.c`](ft_strstr.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-03` directory. You must pass the `-D EX04` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX04 ../tester.c ft_strstr.c -o test_ex04
   ./test_ex04
   ```
