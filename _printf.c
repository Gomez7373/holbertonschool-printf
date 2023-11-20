#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string with conversion specifiers
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    /* Initialize a variable argument list */
    va_list args;
    /* Initialize a counter for the number of characters printed */
    int count = 0;

    /* Start the variable argument list */
    va_start(args, format);

    /* Loop through each character in the format string */
    while (*format)
    {
        /* Check if the current character is '%' and the next character is 'c' or 's' */
        if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's'))
        {
            /* Move past '%' to the actual conversion specifier */
            format++;
            /* Switch based on the conversion specifier */
            switch (*format)
            {
                /* Case for character ('c') specifier */
                case 'c':
                    {
                        /* Retrieve a character from the variable argument list */
                        char ch = (char)va_arg(args, int);
                        /* Write the character to the standard output */
                        count += write(1, &ch, 1);
                        break;
                    }
                /* Case for string ('s') specifier */
                case 's':
                    {
                        /* Retrieve a string from the variable argument list */
                        char *str = va_arg(args, char *);
                        /* Initialize a variable for string length */
                        int len = 0;
                        /* Calculate the length of the string */
                        while (str[len])
                            len++;
                        /* Write the string to the standard output */
                        count += write(1, str, len);
                        break;
                    }
                /* Case for '%' specifier */
                case '%':
                    /* Write '%' to the standard output */
                    count += write(1, "%", 1);
                    break;
                /* Default case for unknown specifiers */
                default:
                    /* Write the current character to the standard output */
                    count += write(1, &(*format), 1);
            }
        }
        /* If the current character is not '%' or the next character is not 'c' or 's' */
        else
        {
            /* Write the current character to the standard output */
            count += write(1, &(*format), 1);
        }

        /* Move to the next character in the format string */
        format++;
    }

    /* End the variable argument list */
    va_end(args);

    /* Return the total count of characters printed */
    return count;
}

