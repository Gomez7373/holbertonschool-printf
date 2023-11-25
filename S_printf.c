#include <stdarg.h>
#include "main.h"

/**
 * S_printf - Print a string with special character handling
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */
int S_printf(va_list args, int uppercase, int flag_plus, int flag_space, int flag_hash)
{
    char *str = va_arg(args, char *);
    int count = 0;
    (void)uppercase;
    (void)flag_plus;
    (void)flag_space;
    (void)flag_hash;

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

