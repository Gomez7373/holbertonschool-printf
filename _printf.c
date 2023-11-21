#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - Custom printf function that produces output
 * according to a format
 * @format: Character string composed of zero or more directives
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
        if (*format == '%')
        {
            format++; /* Move past '%' */
            switch (*format)
            {
                case 'c':
                    {
                        char c = (char)va_arg(args, int);
                        write(1, &c, 1);
			count++;
                        break;
                    }
                case 's':
                    {
                        char *str = va_arg(args, char *);
                        while (*str)
			{
				write(1, str, 1);
				str++;
				count++;
			}
			break;
		    }
		case 'd':
		    {
			    int num = va_arg(args, int);
			    char buffer[12];
			    int len = snprintf(buffer, sizeof(buffer), "%d", num);
			    write(1, buffer, len);
			    count += len;
			    break;
		    }
		case 'i':
		    {
			    int num = va_arg(args, int);
			    char buffer[12];
			    int len = snprintf(buffer, sizeof(buffer), "%d", num);
			    write(1, buffer, len);
			    count += len;
			    break;
		    }
                case '%':
		    write(1, "%", 1);
		    count++;
		    break;
                default:
		    break;
	    }
	}
	else
	{
		write(1, format, 1);
		count++;
	}
	format++;
    }

    va_end(args);

    return (count);
}
