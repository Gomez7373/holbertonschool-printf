#include "main.h"

/**
 * c_printf - function to print a char
 * @args: arguments
 * Return: 1
 */

int c_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash)
{
	char c;
	(void)uppercase;
	(void)flag_plus;
	(void)flag_space;
	(void)flag_hash;

	c = va_arg(args, int);

	_putchar(c);

	return (1);
}
