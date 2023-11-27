# _printf

### Description

For this printf project, we were divided into groups and given the task of creating our own custom _printf function. During the course of the week, all three of us worked together to create it. Our custom _printf function 

----------------
### Resources

[Secrets of printf.pdf](https://github.com/Gomez7373/holbertonschool-printf/files/13467283/Secrets.of.printf.pdf) 

----------------
## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project
-----------------
### Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)
-----------------
### Compilation
The code will be compiled this way:

*$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c**

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions).

The main files will include your main header file (main.h): #include main.h

-------------------
##### Conversion Specifiers

Specifier                  |Output
|---------------|--------------------------------------------|
| 'c' | Prints out a character |
| 's' | Prints out a string |
| '%' | Prints out a percent sign |
| 'd' | Prints out a signed integer |
| 'i' | Prints out a signed integer |
| 'b' | Prints out an unsigned integer in binary |
| 'u' | Prints out an unsigned integer |
| 'o' | Prints out an unsigned octal |
| 'x' | Prints out an unsigned hexadecimal integer |
| 'X' | Prints out an unsigned hexadecimal integer (uppercase) |
| 'r' | Prints out a reversed string |

##### List of files contained in this repository

Name                |Description
|----------------------|-------------------------------------------|
| b_printf.c | 
| c_printf.c |
| di_printf.c |
| main.c |
| main.h |
| man_3_printf |
| o_printf.c |
| pct_printf.c |
| _printf.c |
| print_hexadecimal.c |
| print_integer.c |
| print_octal.c |
| print_pointer.c |
| print_unsigned_integer.c |
| _putchar.c |
| README.md |
| r_printf.c |
| s_printf.c |
| u_printf.c |
| x_printf.c |
| X_printf.c |

#### Tasks 

------------

0. #### I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life (Accomplished)
Write a function that produces output according to a format.
Handle the following conversion specifiers:
- c
- s
- %

1. #### Education is when you read the fine print. Experience is what you get if you don't (Accomplished)
Handle the following conversion specifiers:
- d
- i

2. #### Just because it's in print doesn't mean it's the gospel (Accomplished)
Create a man page for the function

3. #### With a face like mine, I do better in print (Accomplished)
Handle the following conversion specifiers:
- b

4. #### What one has not experienced, one will never understand in print (Accomplished)
Handle the following conversion specifiers:
- u
- x
- o
- x
- X

5. #### Nothing in fine print is ever good news (Accomplished) 
Use a local buffer of 1024 chars in order to call write as little as possible.

6. #### How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p

7. #### My weakness is wearing too much leopard print
Handle the following custom conversion specifier:
- S : prints the string.
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

8. #### The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:
- ´+´
- space
- ´#´ 

9. #### Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:
- l
- h
Conversion specifiers to handle: d, i, u, o, x, X

10. #### Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

11. #### The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

12. #### It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

13. #### Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

14. #### Print is the sharpest and the strongest weapon of our party (Accomplished)
Handle the following custom conversion specifier:
 - r : prints the reversed string

15. #### The flood of print has turned reading into a process of gulping rather than savoring 
Handle the following custom conversion specifier:
- R: prints the rot13'ed string

16. #### *
All the above options work well together.

### Authors &copy;

- Nicole Alicea Plumey
- Elizabeth Mendez Zabala
- Sheila Gomez Cubero
