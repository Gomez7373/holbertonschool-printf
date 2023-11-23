Do this for all .c files:

example: 

$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -c _printf.c


Then: 

$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -o NES  main.o _printf.o c_printf.o u_printf.o o_printf.o x_printf.o X_printf.o p_printf.o r_printf.o _putchar.o s_printf.o pct_printf.o di_printf.o print_integer.o print_pointer.o print_unsigned_integer.o print_octal.o print_hexadecimal.o
