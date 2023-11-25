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
        count += _putchar('-');
        count += _putchar(' ');
        count += _putchar('-');
        return (count); /* Handle NULL string */
    }

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            count += _putchar('-');
            count += _putchar(' ');
            count += _putchar('-');
        }
        else
        {
            count += _putchar(*str);
        }

        str++;
    }

    return (count);
}

