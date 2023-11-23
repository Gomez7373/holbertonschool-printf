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
<<<<<<< HEAD

	return print_integer(num);
}
=======
>>>>>>> f01b50ce07e8956ef05bf68473e8ea861c53594e

	return (print_integer(num));
}
