#ifndef  MAIN_H
#define  MAIN_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct print
{
	char *cs;
	int (f*)();
}conversion_specifiers

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
