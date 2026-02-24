*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-Piscine/main/assets/covers/cover-c03.png" alt="C 03 Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 C 03: The String Library (&lt;string.h&gt;)</h1>
  <p><i>Recreating standard C library string comparison, concatenation, and search functions.</i></p>
  
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
**C 03** focuses on recreating the highly utilized functions found in the standard `<string.h>` C library. 

In this module, you move beyond basic string iteration and begin building functional tools to manipulate multiple strings at once. You will learn how to evaluate the lexicographical differences between strings, append data securely to the end of memory buffers, and locate specific substrings hidden within larger text blocks.

---

## 🧠 Exercise Breakdown & Logic

*The following section explains the core concepts required to solve each exercise. It focuses on the fundamental logic of C programming, emphasizing manual memory manipulation and edge-case management.*

### 🔹 String Comparison
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex00: ft_strcmp`](ex00)** | **Lexicographical Comparison:** Reproducing the standard `strcmp` function. <br><br>**Logic:** We iterate through both strings simultaneously as long as their characters match and we haven't reached the null-terminator. The moment a mismatch occurs (or a string ends), we return the mathematical difference between the two characters. *Crucial:* The difference must be calculated by casting the characters to `unsigned char` to handle extended ASCII correctly! |
| **[`ex01: ft_strncmp`](ex01)** | **Bounded Comparison:** Reproducing `strncmp`. <br><br>**Logic:** Identical to `strcmp`, but includes a counter limit (`n`). The comparison stops and returns `0` if it successfully matches `n` bytes without finding a difference. |

### 🔗 String Concatenation
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex02: ft_strcat`](ex02)** | **Basic Concatenation:** Reproducing `strcat`. <br><br>**Logic:** This function appends the `src` string to the end of the `dest` string. First, we must iterate through `dest` until we find its null-terminator `\0`. From that exact index, we begin a second loop to copy the characters of `src` over, finally appending a new `\0` at the very end. |
| **[`ex03: ft_strncat`](ex03)** | **Bounded Concatenation:** Reproducing `strncat`. <br><br>**Logic:** Similar to `strcat`, but we only append a maximum of `nb` bytes from `src`. We must still guarantee that the resulting string in `dest` is null-terminated after the copied bytes. |
| **[`ex05: ft_strlcat`](ex05)** | **Safe Concatenation:** Reproducing `strlcat`. <br><br>**Logic:** A notoriously tricky function designed to prevent buffer overflows. It takes the *total size* of the destination buffer. It appends characters from `src` to the end of `dest` such that the final length is at most `size - 1`, guaranteeing a null-terminator. <br><br>*The Trap:* It must return the total length of the string it *tried* to create. If `size` is smaller than the original `dest` length, it returns `size + src_length`. Otherwise, it returns `dest_length + src_length`. |

### 🔍 Substring Searching
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex04: ft_strstr`](ex04)** | **Locating a Substring:** Reproducing `strstr`. <br><br>**Logic:** We need to find the first occurrence of the string `to_find` inside `str`. We iterate through `str`. Whenever a character matches the first character of `to_find`, we use a nested loop to check the subsequent characters. If the nested loop reaches the end of `to_find`, we have a complete match and return a pointer to that starting address in `str`. If `to_find` is completely empty, it must return `str` natively. |

---

## 🛠️ Instructions

### 🧪 Compilation & Testing (The Master Test)
Unlike Shell scripts, C programs must be compiled before they can be executed. Furthermore, these exercises strictly ask for functions, not complete programs. 

To make testing incredibly easy while avoiding "undefined reference" linker errors, the **[`tester.c`](tester.c)** file in the root directory uses **C Preprocessor Macros** (`#ifdef`). This allows you to selectively compile and test only the exercises you want.

1. **Clone the repository:**
   ```bash
   git clone <your_repository_link>
   cd 42-Piscine/C-03
   ```

2. **Test a Single Exercise:**
   Pass the corresponding `-D EX**` flag to activate that specific test block inside **[`tester.c`](tester.c)**.
   ```bash
   # Example for ex00:
   cc -Wall -Wextra -Werror -D EX00 tester.c ex00/ft_strcmp.c -o test_ex00
   ./test_ex00
   ```

3. **Test Multiple Exercises Together:**
   You can chain multiple `-D` flags to test several functions at once, provided you include all their `.c` files in the command.
   ```bash
   # Example for ex00 and ex01:
   cc -Wall -Wextra -Werror -D EX00 -D EX01 tester.c ex00/ft_strcmp.c ex01/ft_strncmp.c -o test_multiple
   ./test_multiple
   ```

4. **Test ALL Exercises at Once:**
   By passing the `-D TEST_ALL` master flag, you can activate the entire testing suite in one go!
   ```bash
   cc -Wall -Wextra -Werror -D TEST_ALL tester.c ex00/ft_strcmp.c ex01/ft_strncmp.c ex02/ft_strcat.c ex03/ft_strncat.c ex04/ft_strstr.c ex05/ft_strlcat.c -o test_all
   ./test_all
   ```

> **⚠️ WARNING for 42 Students:** Do not push **[`tester.c`](tester.c)** or any executable files to your final Moulinette repository! They are strictly for local testing purposes. Submitting unauthorized files will result in a 0.

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` and `.h` file must pass. 

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:33:28 by maaugust          #+#    #+#             */
/*   Updated: 2025/02/27 12:40:55 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man 3 strcmp` / `man 3 strncmp` - Manuals for string comparison.
* `man 3 strcat` / `man 3 strncat` / `man 3 strlcat` - Manuals for string concatenation.
* `man 3 strstr` - Manual for locating substrings.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.
* [Official 42 Norminette Repository](https://github.com/42School/norminette) - The open-source linter enforcing the strict 42 coding standard.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions were built manually to strictly comply with the 42 Norm and deeply understand manual memory manipulation, enforcing the concept that learning is about developing the ability to find an answer, not just getting one directly.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
