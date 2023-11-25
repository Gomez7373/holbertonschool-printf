#include <stdarg.h>
#include "main.h"

/**
 * S_printf - Print a string with special handling for non-printable characters
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */
int S_printf(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;

if (str == NULL)
{
return -1; /* or handle NULL string accordingly*/
}

while (*str)
{
if (*str < 32 || *str >= 127)
{
/* Print non-printable characters as \x followed
by the ASCII code in hexadecimal*/
count += _putchar('\\');
count += _putchar('x');
/* Print ASCII code in uppercase
*  hexadecimal (always 2 characters)*/
count += _putchar((*str / 16 < 10) ?
	(*str / 16 + '0') : (*str / 16 - 10 + 'A'));
count += _putchar((*str % 16 < 10) ?
	(*str % 16 + '0') : (*str % 16 - 10 + 'A'));
}
else
{
count += _putchar(*str);
}

str++;
}

return count;
}

