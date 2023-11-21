
#ifndef MAIN_H

#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct print
{
	char *cs;
	int (*f)();
} conversion_specifiers;

int _putchar(char c);
int _printf(const char *format, ...);
int c_printf(va_list args);
int s_printf(va_list args);

#endif /* MAIN_H */
