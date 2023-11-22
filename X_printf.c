#include "main.h"

int print_hexadecimal(unsigned int num, int uppercase);

/**
 * X_printf - Print an unsigned integer in uppercase hexadecimal format
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */
int X_printf(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    return print_hexadecimal(num, 1);  /* Use 1 for uppercase %X */
}
