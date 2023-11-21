#include "main.h"

/**
 * _itoa - Convert an integer to a string
 * @num: Integer to convert
 * @buffer: Buffer to store the result
 *
 * Return: Length of the resulting string
 */
int _itoa(int num, char *buffer)
{
    int i = 0;
    int temp, start, end;

    /* Handle negative numbers */
    if (num < 0) {
        buffer[i++] = '-';
        num = -num;
    }

    /* Convert the number to string in reverse order */
    temp = num;
    do {
        buffer[i++] = temp % 10 + '0';
        temp /= 10;
    } while (temp);

    /* Reverse the string */
    start = 0;
    end = i - 1;
    while (start < end) {
        char tmp = buffer[start];
        buffer[start] = buffer[end];
        buffer[end] = tmp;
        start++;
        end--;
    }

    return i;
}

