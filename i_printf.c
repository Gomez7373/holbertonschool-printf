#include "main.h"

/**
 * i_printf - Print an integer
 * @args: Argument list
 *
 * Return: Number of characters printed
 */
int i_printf(va_list args)
{
int num = va_arg(args, int);
char buffer[12];  /* 12 is enough for a 32-bit integer */
int length = _itoa(num, buffer);

write(1, buffer, length);

return length;
}
