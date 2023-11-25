#include "main.h"

/**
 * u_printf - Print an unsigned integer
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int u_printf(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_unsigned_integer(num));
}
