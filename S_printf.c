#include <stdarg.h>
#include "main.h"

/**
 * S_printf - Print a string with special character handling
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */
int S_printf(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;

    if (str == NULL)
    {
        return -1; /* Handle NULL string*/
    }

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            count += _putchar('\\');
            count += _putchar('x');
            /* Ensure that the ASCII code is always
	     *  printed in two characters*/
            if (*str < 16)
                count += _putchar('0');
            count += _putchar((*str / 16) + '0');
            count += _putchar((*str % 16) + '0');
        }
        else
        {
            count += _putchar(*str);
        }

        str++;
    }

    return (count);
}

