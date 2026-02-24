# 🟢 Exercise 03: ft_strncat

## 📝 Objective
Create a function that reproduces the behavior of the standard C library function `strncat`.

## 💡 The Logic
Similar to `strcat`, but we enforce a hard limit on how many characters we are allowed to append. 

We navigate to the end of the `dest` string just like before. When we begin copying `src`, we decrement the `nb` variable. The copying stops if we hit the end of `src` OR if `nb` reaches 0. Importantly, regardless of how it stops, `strncat` guarantees that the resulting string is null-terminated, so we manually append `\0` at the end.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strncat.c`](ft_strncat.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-03` directory. You must pass the `-D EX03` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX03 ../tester.c ft_strncat.c -o test_ex03
   ./test_ex03
   ```
