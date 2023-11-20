#include "main.h"

/**
 * s_printf - function that print a string
 * @args: arguments
 * Return: number of characters in the string
 */

int s_printf(va_list args)
{
	char *s;
	int x, length;

	s = va_arg(args, char *);

	for (length = 0; *s[x] != '\0'; length++)
	{
		x++;
	}

	if (s == NULL)
	{
		s = "(null)";
		for (x = 0; x < 6; x++)
		{
			_putchar(s[x]);
		}
		return (6);
	}

	else
	{
		for (x = 0; x <= length; x++)
		{
			_putchar(s[x]);
		}
		return (length);
	}
}
