# 🟢 Exercise 05: ft_strlcat

## 📝 Objective
Create a function that reproduces the behavior of the standard C library function `strlcat`.

## 💡 The Logic
Unlike the other concatenation functions, `strlcat` is designed for safety and takes the *total size* of the destination buffer. 

It appends characters from `src` to `dest` ensuring that the final length does not exceed `size - 1`, and guarantees null-termination. 
The trickiest part of `strlcat` is its return value. It must return the total length of the string it *tried* to create. 
1. If the given `size` is less than or equal to the original length of `dest`, it returns `size + length_of_src`.
2. Otherwise, it safely concatenates the strings and returns `original_length_of_dest + length_of_src`. 
*(Note: An explicit check `if (!dest && size == 0)` is used to prevent Segmentation Faults if a NULL pointer is passed).*

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strlcat.c`](ft_strlcat.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-03` directory. You must pass the `-D EX05` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX05 ../tester.c ft_strlcat.c -o test_ex05
   ./test_ex05
   ```
