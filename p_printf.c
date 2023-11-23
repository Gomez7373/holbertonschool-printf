#include "main.h"

int print_pointer(void *ptr);

/**
 * p_printf - Print a pointer address
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */

int p_printf(va_list args)
{
	void *ptr = va_arg(args, void *);

	return (print_pointer(ptr));
}
