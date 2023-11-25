#include "main.h"

int print_pointer(void *ptr);

/**
 * p_printf - This function will handle the %p conversion specifier
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int p_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash)
{
	void *ptr;
	(void)uppercase;
	(void)flag_plus;
	(void)flag_space;
	(void)flag_hash;

	ptr = va_arg(args, void *);

	return (print_pointer(ptr));
}
