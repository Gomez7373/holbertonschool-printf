#include "main.h"

/**
 * di_printf - Print an integer
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int di_printf(va_list args)

{
	int num = va_arg(args, int);

	int count = 0;
	unsigned int abs_min;

	if (num == INT_MIN)
	{
		_putchar('-');
		count++;
		abs_min = INT_MIN;
		count += print_integer(abs_min / 10);
		_putchar(abs_min % 10 + '0');
		count++;
	}

	else
	{

		if (num < 0)
		{
			_putchar('-');
			count++;
			num = -num;
		}

		if (num / 10)
			count += print_integer(num / 10);

		_putchar(num % 10 + '0');
		count++;
	}

	return (count);
}
