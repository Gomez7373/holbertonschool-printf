#include "main.h"

int print_hexadecimal(unsigned int num, int uppercase);

/**
 * print_pointer - Print a pointer address
 * @ptr: Pointer to be printed
 *
 * Return: Number of characters printed
 */
int print_pointer(void *ptr)
{
    unsigned long int address = (unsigned long int)ptr;
    int printed_chars = 0;

    printed_chars += _putchar('0');
    printed_chars += _putchar('x');

    if (address == 0)
    {
        printed_chars += _putchar('0');
        return (printed_chars);
    }

    printed_chars += print_hexadecimal(address, 0);

    return (printed_chars);
}

