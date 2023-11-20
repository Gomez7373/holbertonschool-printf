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
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's'))
        {
            format++; /* Move past '%' */
            switch (*format)
            {
                case 'c':
                    {
                        char ch = (char)va_arg(args, int);
                        count += write(1, &ch, 1);
                        break;
                    }
                case 's':
                    {
                        char *str = va_arg(args, char *);
                        int len = 0;
                        while (str[len])
                            len++;
                        count += write(1, str, len);
                        break;
                    }
                case '%':
                    count += write(1, "%", 1);
                    break;
                default:
                    count += write(1, &(*format), 1);
            }
        }
        else
        {
            count += write(1, &(*format), 1);
        }

        format++;
    }

    va_end(args);

    return count;
}

