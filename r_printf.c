/* r_printf.c */
#include "main.h"

/**
 * r_printf - function that prints reversed string
 *
 * @args: Arguments
 *
 * Return: string length
 */

int r_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash)
{
	char *s;
	int x, length = 0;
	(void)uppercase;
	(void)flag_plus;
	(void)flag_space;
	(void)flag_hash;

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

