
#ifndef MAIN_H

#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct print
{
	char *cs;
	int (*f)();
}
conversion_specifiers;

/*Functions prototype*/

int _putchar(char c);
int _printf(const char *format, ...);
int c_printf(va_list args);
int s_printf(va_list args);
int pct_printf(void);
int i_printf(va_list args);
int d_printf(va_list args);
int r_printf(va_list args);
int _itoa(int num, char *buffer);
#endif /* MAIN_H */
