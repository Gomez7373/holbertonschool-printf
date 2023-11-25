#include "main.h"

int print_hexadecimal(unsigned int num, int uppercase);

/**
 * x_printf - Print an unsigned integer in hexadecimal format
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int x_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash)
{
	unsigned int num;
	(void)uppercase;
	(void)flag_plus;
	(void)flag_space;
	(void)flag_hash;

	num = va_arg(args, unsigned int);

	return (print_hexadecimal(num, 0));  /* Use 0 for lowercase %x */
}
