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
<<<<<<< HEAD
    /*  Initialize a variable argument list */
=======
>>>>>>> 68feebdb9e85787c43d0982d9b6e971b2f423dd7
    va_list args;
    int count = 0;

<<<<<<< HEAD
    /* Start the variable argument list*/
=======
>>>>>>> 68feebdb9e85787c43d0982d9b6e971b2f423dd7
    va_start(args, format);

    while (*format)
    {
<<<<<<< HEAD
        /*  Check if the current character is '%' and the next character is 'c' or 's'*/
        if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's'))
        {
            /*  Move past '%' to the actual conversion specifier */
            format++;
            /* Switch based on the conversion specifier*/
            switch (*format)
            {
                /* Case for character ('c') specifier*/
                case 'c':
                    {
                        /* Retrieve a character from the variable argument list*/
=======
        if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's'))
        {
            format++; /* Move past '%' */
            switch (*format)
            {
                case 'c':
                    {
>>>>>>> 68feebdb9e85787c43d0982d9b6e971b2f423dd7
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
<<<<<<< HEAD
                /* Case for '%' specifier*/
=======
>>>>>>> 68feebdb9e85787c43d0982d9b6e971b2f423dd7
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

<<<<<<< HEAD
    /*  End the variable argument list*/
=======
>>>>>>> 68feebdb9e85787c43d0982d9b6e971b2f423dd7
    va_end(args);

    return count;
}

