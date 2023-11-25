#include "main.h"

/**
 * di_printf - Print an integer
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int di_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash)

{
	int num;
	(void)uppercase;
	(void)flag_plus;
	(void)flag_space;
	(void)flag_hash;

	num = va_arg(args, int);

	return (print_integer(num));

}
