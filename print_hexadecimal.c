#include "main.h"

/**
 * print_hexadecimal - Print an unsigned integer in hexadecimal format
 * @num: The number to be printed
 * @uppercase: Uppercase flag (1 for uppercase, 0 for lowercase)
 *
 * Return: Number of characters printed
 */

int print_hexadecimal(unsigned int num, int uppercase)
{
	char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	int count = 0;

	if (num / 16)
		count += print_hexadecimal(num / 16, uppercase);

	_putchar(hex_digits[num % 16]);
	count++;

	return (count);
}
