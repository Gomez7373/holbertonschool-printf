#include "main.h"

int print_octal(unsigned int num);

/**
 * o_printf - Print an unsigned integer in octal format
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int o_printf(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	
	return (print_octal(num));
}
