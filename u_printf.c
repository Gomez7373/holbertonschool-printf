#include "main.h"

/**
 * u_printf - Print an unsigned integer
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int u_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash)
{
	unsigned int num;
	(void)uppercase;
	(void)flag_plus;
	(void)flag_space;
	(void)flag_hash;

	num = va_arg(args, unsigned int);

	return (print_unsigned_integer(num));
}
