/* r_printf.c */
#include "main.h"

/**
 * r_printf - function that prints reversed string
 *
 * @args: Arguments
 *
 * Return: string length
 */

int r_printf(va_list args)
{
	char *s;
	int x, length = 0;

	s = va_arg(args, char *);

	while (s[length] != '\0')
	{
		length++;
	}

	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	return (length);
}

