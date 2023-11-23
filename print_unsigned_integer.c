#include "main.h"

/**
 * print_unsigned_integer - Print an unsigned integer
 * @num: The unsigned integer to be printed
 *
 * Return: Number of characters printed
 */

int print_unsigned_integer(unsigned int num)
{
	int count = 0;

	if (num / 10)
		count += print_unsigned_integer(num / 10);

	_putchar(num % 10 + '0');

	return (count + 1);
}
