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
		{"%c", c_printf, 0}, {"%s", s_printf, 0}, {"%%", pct_printf, 0},
		{"%i", di_printf, 0}, {"%d", di_printf, 0}, {"%u", u_printf, 0},
		{"%o", o_printf, 0}, {"%x", x_printf, 0}, {"%X", X_printf, 1},
		{"%p", p_printf, 0}, {"%r", r_printf, 0}, {"%b", b_printf, 0}
	};
	va_list list;
	int x = 0, y, length = 0, found_match = 0;

	va_start(list, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[x] != '\0')
	{
		found_match = 0;
		for (y = 0; y < 12; y++)  /* Update the size of the array */
		{
			if (c[y].cs[0] == format[x] && c[y].cs[1] == format[x + 1])
			{
				length += c[y].f(list, c[y].uppercase);
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
