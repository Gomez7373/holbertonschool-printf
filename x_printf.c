#include "main.h"

int print_hexadecimal(unsigned int num, int uppercase);

/**
 * x_printf - Print an unsigned integer in hexadecimal format
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int x_printf(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_hexadecimal(num, 0));  /* Use 0 for lowercase %x */
}
