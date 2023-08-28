# 0x07-pointers_arrays_strings

This folder contains C programming tasks related to pointers, arrays, and strings as part of the ALX Low-Level Programming curriculum.

## Table of Contents

- [Description](#description)
- [Tasks](#tasks)
- [How to Compile](#how-to-compile)
- [Files](#files)
- [Authors](#authors)

## Description

In this module, you'll find C files that implement various functions related to pointers, arrays, and strings. Each `.c` file corresponds to a specific task, and they are accompanied by utility files and `main` files for testing.

## Tasks

1. **0-memset.c**: Implement the `memset` function.
2. **1-memcpy.c**: Implement the `memcpy` function.
3. **2-strchr.c**: Implement the `strchr` function.
4. **3-strspn.c**: Implement the `strspn` function.
5. **4-strpbrk.c**: Implement the `strpbrk` function.
6. **5-strstr.c**: Implement the `strstr` function.
7. **7-print_chessboard.c**: Print a chessboard.
8. **8-print_diagsums.c**: Print the sums of the diagonals of a square matrix.

## How to Compile

You can compile each task's utility file with its corresponding main file using the following command format:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <utility_file.c> <task_main_file.c> -o <output_name>
