#include "main.h"

int print_pointer(void *ptr);

/**
 * p_printf - This function will handle the %p conversion specifier
 * @args: The variable arguments list
 * @uppercase: Uppercase flag
 *
 * Return: Number of characters printed
 */

int p_printf(va_list args, int uppercase)
{
	void *ptr = va_arg(args, void *);
	int length = length += c[y].f(list, c[y].uppercase);

	if (ptr == NULL)
	{
		_printf("(nil)");

		return (5);
	}
	_printf("%p", ptr);

	return (length);
}
/*int p_printf(va_list args)
{
	void *ptr = va_arg(args, void *);

	return (print_pointer(ptr));
}*/
