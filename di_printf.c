#include "main.h"

/**
 * di_printf - Print an integer
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int di_printf(va_list args)
{
	int num = va_arg(args, int);

	return (print_integer(num));

}
