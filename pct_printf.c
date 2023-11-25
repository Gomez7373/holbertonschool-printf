#include "main.h"

/**
 * pct_printf - function that prints the % sign
 * Return: 1
 */

int pct_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash)
{
	(void)uppercase;
	(void)flag_plus;
	(void)flag_space;
	(void)flag_hash;

	_putchar('%');

	return (1);
}

/*int pct_printf(void)
{
	_putchar('%');

	return (1);
}*/
