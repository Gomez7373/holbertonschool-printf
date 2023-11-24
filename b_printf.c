#include <stdarg.h>
#include "main.h"
/**
 * b_printf - Print an unsigned integer in binary format
 * @args: The variable arguments list
 *
 * Return: Number of characters printed
 */
int b_printf(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int binary_digits[32];
int i, count = 0;

if (num == 0)
{
_putchar('0');
return (1);
}

for (i = 0; num > 0; i++)
{
binary_digits[i] = num % 2;
num /= 2;
}

for (i -= 1; i >= 0; i--)
{
_putchar(binary_digits[i] + '0');
count++;
}

return (count);
}
