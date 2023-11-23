#Authorized functions and macros
---

- 1.write (man 2 write):

This function is likely used in your _putchar function to write a character to the standard output. It's a system call for writing data to a file descriptor.
- 2.malloc (man 3 malloc):

malloc is used for memory allocation. In your code, it might be used to dynamically allocate memory for strings or other data structures.

- 3.free (man 3 free):

free is used to deallocate memory previously allocated by malloc. In your code, it's essential for managing memory and preventing memory leaks.

- 4.va_start (man 3 va_start):

va_start is used to initialize a va_list object. It's typically used at the beginning of a function that accepts a variable number of arguments (like your _printf).

- 5.va_end (man 3 va_end):

va_end is used to clean up a va_list object after it has been used. It's usually placed at the end of a function that uses variable arguments.

- 6.va_copy (man 3 va_copy):

va_copy is used to make a copy of a va_list object. It might be used if you need to iterate through the variable arguments more than once.

- 7.va_arg (man 3 va_arg):

va_arg is used to access the next variable argument in a function that accepts a variable number of arguments.

* Authorized functions and macros

  * These functions are standard in C and are commonly used in projects that involve variable argument handling and dynamic memory management, such as implementing a printf-like function.
