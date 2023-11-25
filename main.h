
#ifndef MAIN_H

#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <unistd.h>

/*typedef struct print
{
	char *cs;
	int (*f)();
	int uppercase;
} conversion_specifiers;*/

typedef struct {
	const char *cs;
	int (*f)(va_list, int, int, int, int);
	int uppercase;
} conversion_specifiers;


int _printf(const char *format, ...);
int c_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash);
int s_printf(va_list args);
int pct_printf(void);
int di_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash);
int print_integer(int num);
int u_printf(va_list args);
int o_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash);
int x_printf(va_list args);
int X_printf(va_list args);
int p_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash);
int r_printf(va_list args);
int print_unsigned_integer(unsigned int num);
int print_hexadecimal(unsigned int num, int uppercase);
int print_octal(unsigned int num);
int print_pointer(void *ptr);
int b_printf(va_list args);
int _putchar(char c);
int S_printf(va_list args);
#endif /* MAIN_H */
