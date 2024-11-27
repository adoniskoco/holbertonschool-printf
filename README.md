# _printf Program

### Description

This project involves creating a custom implementation of the `_printf` function that generates formatted output based on a given format string. The function mimics the behavior of the standard C library function `printf`. The primary responsibility of `_printf` is to write formatted output to the standard output stream (`stdout`).

The goal is to implement a flexible and efficient `_printf` function that can handle various input formats and produce the expected output. At the heart of this program is the synchronization between various key components of the C language, such as structures, pointers, and variadic functions.

**Program Breakdown:**
1. **Format Handling**: Various functions are defined to process different data types, each returning the length of the printed data.
2. **Structure Setup**: A custom structure is used, with two members: a pointer to the conversion specifier and a pointer to the respective function that processes it.
3. **Array of Structures**: An array of structures is created to handle the conversion specifiers and their corresponding functions for basic data types like `int` and `char`.
4. **Function Linking**: Each format specifier in the input string is matched to a corresponding function, which is then called to process the data and print it.
5. **Main Logic**: The core of the `_printf` function iterates through the input string, checks for format specifiers, and calls the appropriate functions to print the data.
6. **Return Value**: The function returns the total length of the string to be printed.

---

### Function Prototype

The prototype for the custom `_printf` function is as follows:

```c
int _printf(const char *format, ...);
```

---

### Return Value

The `_printf` function returns an integer representing the total number of characters printed (excluding the null byte used to terminate strings). If an error occurs during the execution, it returns a negative value.

---

### Supported Conversion Specifiers

The format string provided to the function may contain zero or more directives, each corresponding to a specific conversion specifier. The following specifiers are supported:

- `%c`: Character - Outputs a single character.
- `%s`: String - Outputs a null-terminated string.
- `%%`: Percent sign - Outputs a literal percent (`%`) character.
- `%d` and `%i`: Integer - Outputs a signed decimal integer.

For each specifier encountered, the `_printf` function processes the respective arguments and writes the formatted result to `stdout`.

---

### How to Use

1. **Compile the source code**:

    Use the following command to compile the program:

    ```bash
    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
    ```

2. **Include the custom header file**:

    Include the custom header `main.h` in your C source files:

    ```c
    #include "main.h"
    ```

3. **Use the `_printf` function**:

    You can use the `_printf` function just like the standard `printf` function. For example:

    ```c
    int main() {
        _printf("Hello, %s! The answer is %d.\n", "user", 42);
        return 0;
    }
    ```

---

### Example

Here’s an example of using `_printf`:

```c
int main(void)
{
    _printf("hello %s\n", "world", 1, 2, 3, 4);
    return 0;
}
```

**Expected Output**:

```
hello world
```

---

### Authors

This program was created by:

- **Adonis Koco** 
- **Ordes Rucaj**

This structured format provides a clear overview of the `_printf` program, its purpose, usage, and how to compile and use it in your own projects.