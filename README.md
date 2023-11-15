# Libft - Custom C Library Implementation

<p align="center">
  <img src="https://github.com/pmarkaide/meta/raw/master/hex-libft.jpg" alt="Libft Logo" width="200"/>
</p>

Libft is my independent implementation of essential C library functions, developed as part of the libft project at [Hive Helsinki Coding School](https://www.hive.fi/en/). The primary objective is to recreate fundamental functions without relying on external support. Only three allowed functions—`malloc`, `free`, and `write`—can be utilized.

The unique approach taken is not just to learn the use of functions like `strnstr` but to meticulously code them from scratch. This library serves as a foundational component for subsequent, more intricate projects. The principle is clear: we can only use functions if we've previously built them from the ground up.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage Examples](#usage-examples)
- [Contribution Guidelines](#contribution-guidelines)
- [License](#license)


## Features

- **String Manipulation:** Custom implementations of standard string manipulation functions.
- **Memory Management:** Functions for memory allocation and manipulation.
- **Linked Lists:** Basic operations for linked list handling.
- **Character Operations:** Functions for character manipulation and checking.
- **File Operations:** Basic file-related functionalities.

## Getting Started

To use Libft in your project, you must clone the repo and run the makefile with bonus to compile also the linked-list functions

```bash
git clone https://github.com/pmarkaid/42_libft.git
cd 42_libft
make bonus
```

## Usage Examples

Here are some basic examples demonstrating how to use Libft functions:

```c
#include <stdio.h>
#include "libft.h"

int main() {
    // Example 1: Convert a string to an integer
    const char *str1 = "12345";
    int result1 = ft_atoi(str1);
    printf("Result 1: %d\n", result1);

    // Example 2: Convert a string with leading spaces
    const char *str2 = "   -6789";
    int result2 = ft_atoi(str2);
    printf("Result 2: %d\n", result2);

    // Example 3: Convert a string with non-numeric characters
    const char *str3 = "42 is the answer";
    int result3 = ft_atoi(str3);
    printf("Result 3: %d\n", result3);

    return 0;
}
```

## Contribution Guidelines
Contributions are welcome! If you see any bug or want to add a useful function to libft, you are welcome to make a pull request. 

## License
This project is licensed under the [MIT License](https://raw.githubusercontent.com/pmarkaide/42_libft/master/LICENSE).