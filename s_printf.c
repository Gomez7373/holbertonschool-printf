#include "main.h"
/**
 * s_printf - function that prints a string
 * @args: arguments
 * Return: number of characters in the string
 */
int s_printf(va_list args)
{
    char *s;
    int x = 0;

    s = va_arg(args, char *);

    if (!s)
    {
        s = "(null)";
        for (x = 0; s[x] != '\0'; x++)
        {
            _putchar(s[x]);
        }
        return (6);  /* Assuming you are returning the length of "(null)"*/
    }
    else
    {
        for (x = 0; s[x] != '\0'; x++)
        {
            _putchar(s[x]);
        }
        return (x);  /* Returning the actual length of the string*/
    }
}
/**
 * s_printf - function that print a string
 * @args: arguments
 * Return: number of characters in the string
 */
/*
int s_printf(va_list args)
{
	char *s;
	int x = 0, length;

	s = va_arg(args, char *);

	for (length = 0; s[x] != '\0'; length++)
	{
		x++;
	}
/*testing sgc*/
/*
if (!s)
{
s = "(null)";
	x = 0;
for (length = 0; s[x] != '\0'; length++)
{
	x++;
}
for (x = 0; x > 6;x++)
{
_putchar(s[x]);
}
return (6);
}
/**
 *
 * this is the one ELi has:
 *
	if (!s)
=======

	if (s == NULL)
	{
		s = "(null)";
		x = 0;
		for (length = 0; s[x] != '\0'; length++)
		{
			x++;
		}
		for (x = 0; x < length; x++)
		{
			_putchar(s[x]);
		}
		return (length);
	}


	else
	{
		for (x = 0; x < length; x++)
		{
			_putchar(s[x]);
		}
		return (length);
	}
}*/
