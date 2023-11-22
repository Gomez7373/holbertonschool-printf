
#ifndef MAIN_H

#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct print
{
	char *cs;
	int (*f)();
	int uppercase;
} conversion_specifiers;

int _putchar(char c);
int _printf(const char *format, ...);
int c_printf(va_list args);
int s_printf(va_list args);
int pct_printf(void);
int di_printf(va_list args);
int print_integer(int num);
int u_printf(va_list args);
int o_printf(va_list args);
int x_printf(va_list args);
int X_printf(va_list args);
int p_printf(va_list args);
int r_printf(void);
int print_unsigned_integer(unsigned int num);

#endif /* MAIN_H */
