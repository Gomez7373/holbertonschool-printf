#include "main.h"

/**
 * print_octal - Print an unsigned integer in octal format
 * @num: The unsigned integer to be printed
 *
 * Return: Number of characters printed
 */

int print_octal(unsigned int num)
{
	int count = 0;

	if (num / 8)
		count += print_octal(num / 8);

	_putchar(num % 8 + '0');

	return (count + 1);
}
