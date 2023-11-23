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

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num / 10)
		count += print_integer(num / 10);

	_putchar(num % 10 + '0');

	return (count + 1);
}
