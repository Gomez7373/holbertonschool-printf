#include "main.h"

/**
 * s_printf - function that print a string
 * @args: arguments
 * Return: number of characters in the string
 */

int s_printf(va_list args)
{
	char *s, *c;
	int x, length;

	s = va_arg(args, char *);

	*c = *s;

	for (length = 0; *c != '\0'; length++)
	{
		c++;
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
		for (x = 0; x < length; x++)
		{
			_putchar(s[x]);
		}
		return (length);
	}
}
