#include <stdio.h>
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
        return 0;
    }

    while (*str != '\0')
    {
        if (*str < 32 || *str >= 127)
        {
            count += _putchar('\\');
            count += _putchar('x');
            count += _putchar("0123456789ABCDEF"[*str / 16]);
            count += _putchar("0123456789ABCDEF"[*str % 16]);
        }
        else
        {
            count += _putchar(*str);
        }
        str++;
    }

    return count;
}

