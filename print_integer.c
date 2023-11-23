#include "main.h"

/**
 * print_integer - Print an integer
 * @num: The integer to be printed
 *
 * Return: Number of characters printed
 */

int print_integer(int num)
{
	int count = 0;
	unsigned int abs_min;

	if (num == INT_MIN)
	{
		_putchar('-');
		count++;
		abs_min = INT_MAX + 1;
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
