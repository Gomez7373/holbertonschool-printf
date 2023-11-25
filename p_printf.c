#include "main.h"

int print_pointer(void *ptr);

/**
 * p_printf - This function will handle the %p conversion specifier
 * @args: The variable arguments list
 * @uppercase: Uppercase flag
 *
 * Return: Number of characters printed
 */

int p_printf(va_list args)
{
	void *ptr = va_arg(args, void *);

	return (print_pointer(ptr));
}
