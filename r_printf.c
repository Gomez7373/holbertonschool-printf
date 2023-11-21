

#include "main.h"

/**
 * r_printf - Handle the %r format specifier
 * @args: Argument list
 *
 * Return: Number of characters printed
 */
int r_printf(va_list args)
{
    char *str = va_arg(args, char *);
    int length = 0;

    if (str == NULL)
        return -1;  /* Handle null pointer case*/

    while (*str != '\0')
    {
        _putchar(*str);
        str++;
        length++;
    }

    return length;
}

