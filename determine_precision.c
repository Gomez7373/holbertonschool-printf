#include "main.h"

/**
 * determine_precision - This function handles precision for non-custom
 * conversion specifiers
 * @format:
 * @precision:
 *
 * Return: Total length parsed
 */

int determine_precision(const char *format, int *precision)
{
	if (format[0] == '.' && isdigit(format[1]))
	{
		*precision = atoi(format + 1);

		int len = 1;
		while (isdigit(format[len]))
			len++;

		return (len + 1);
	}
	*precision = 0;

	return (0);
}
