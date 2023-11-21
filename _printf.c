#include "main.h"

/**
* _printf - Custom printf function
* @format: Format string with conversion specifiers
*
* Return: Number of characters printed (excluding the null byte)
*/

int _printf(const char *format, ...)
{
	conversion_specifiers c[] = {
		{"%c", c_printf}, {"%s", s_printf}, {"%%", pct_printf}
	};
	va_list list;
	int x = 0, y, length = 0, found_match = 0;

	va_start(list, format);

	while (format[x] != '\0')
	{
		found_match = 0;
		for (y = 0; y < 2; y++)
		{
			if (c[y].cs[0] == format[x] && c[y].cs[1] == format[x + 1])
			{
				length += c[y].f(list);
				x += 2;
				found_match = 1;
				break;
			}
		}
		if (!found_match)
		{
			_putchar(format[x]);
			length++;
			x++;
		}
	}
	va_end(list);
	return (length);
}

