This project has been created as part of the 42 curriculum by ilazerou.

# Libft

## Description

Libft is a project from the 42 curriculum in which we build our own C library by recreating the behavior of selected functions from the C standard library and developing additional utility functions.

The main objective is to strengthen our understanding of C programming, especially pointers, strings, memory management, and linked lists. This project also teaches us how to write reusable code, handle memory correctly, and understand how standard library functions work internally.

### Library Description

`libft.a` is a static library containing the compiled object files of our custom functions. It can be linked to other C programs and reused in future projects.

To display the contents of the library archive, use the following command:

    ar -t libft.a

The project is divided into three parts:

1. Part 1 — Libc Functions: Reimplement selected functions from the C standard library, including character checks, string manipulation, and memory operations.

2. Part 2 — Additional Functions: Create useful functions that extend the library's capabilities, including string processing, conversions, and output operations.

3. Part 3 — Linked Lists: Implement functions to create and manipulate linked lists using a custom structure, allowing elements to be added, accessed, processed, and deleted.

The third part applies if the bonus functions have been implemented.

## Instructions

### Requirements

The following tools are required to compile the library:

- A C compiler, such as `cc`.
- `make` to automate the compilation process.
- `ar` to create and manage the static library archive.

### Installation

Clone the repository:

    git clone git@vogsphere-v2-bg.1337.ma:vogsphere/intra-uuid-a6b3020b-b408-4551-bf05-81dd61a482a1-7737718-ilazerou libft

Enter the project directory:

    cd libft

### Compilation

To compile the library, run:

    make

This command compiles the source files and creates the static library `libft.a`.

The Makefile provides the following rules:

- `make`: Compiles the library.
- `make clean`: Removes the compiled object files.
- `make fclean`: Removes the object files and the library archive.
- `make re`: Cleans the previous build and recompiles the library.

### Using the Library

Once compiled, `libft.a` can be linked to your C programs. Include the appropriate header file and link the library during compilation.

For example, to compile a program with Libft, use:

    cc -Wall -Wextra -Werror main.c libft.a -o test

Run the resulting executable with:

    ./test

## Design Choices

The library is built around several important principles:

- Reusability: Functions can be used in different projects without rewriting their implementations.
- Memory management: Dynamically allocated memory must be handled carefully to avoid memory leaks and invalid memory access.
- Consistency: Reimplemented functions should reproduce the expected behavior of their standard library counterparts.
- Modularity: Each function has a specific purpose, making the library easier to understand and maintain.
- Coding standards: The project follows the applicable 42 Norm requirements.

## Learning Objectives

This project provides practical experience with fundamental C programming concepts, including:

- Understanding pointers and memory addresses.
- Managing dynamically allocated memory.
- Manipulating strings and memory blocks.
- Working with null-terminated strings.
- Creating and traversing linked lists.
- Building and using static libraries.
- Writing modular and reusable functions.

## Resources

The following resources are useful for understanding C programming and the behavior of standard library functions:

- Linux man-pages: https://man7.org/linux/man-pages/
- cppreference — C language and library reference: https://en.cppreference.com/w/c
- GNU C Library Manual: https://www.gnu.org/software/libc/manual/
- 42 Intranet: Project instructions and evaluation guidelines.

### Use of Artificial Intelligence

AI tools were used as supplementary learning resources during this project for the following purposes:

- Understanding pointers, memory allocation, and linked lists.
- Clarifying the behavior of standard C library functions.
- Improving understanding of C programming concepts.
- Organizing and improving the project documentation.

AI assistance was used to support learning and understanding. Its use should comply with the school's rules and reflect the actual tasks for which it was used.

## Author

- Login: ilazerou
- Project: Libft
- School: 42