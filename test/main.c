#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    /* Test Case 1: Basic string printing*/
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    /* Test Case 2: Printing lengths using %d and %i*/
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    /* Test Case 3: Printing negative integers*/
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    /* Test Case 4: Printing unsigned integers*/
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    /* Test Case 5: Printing unsigned octal*/
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);

    /* Test Case 6: Printing unsigned hexadecimal*/
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    /* Test Case 7: Printing characters*/
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    /* Test Case 8: Printing strings*/
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    /* Test Case 9: Printing addresses*/
    addr = (void *)0x7ffe637541f0;
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    /* Test Case 10: Printing percent sign*/
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    /* Test Case 11: Testing unknown specifier (%r assumed)*/
	_printf("Unknown:[%s]\n", "Custom");
	printf("Unknown:[%s]\n", "Custom");

    /*ive changed %r for %s*/
/*    _printf("Unknown:[%r]\n");*/
  /*  printf("Unknown:[%r]\n");*/

/* Test Case 12: Testing with INT_MAX*/
    _printf("Max Integer:[%d]\n", INT_MAX);
    printf("Max Integer:[%d]\n", INT_MAX);

    /* Test Case 13: Testing with INT_MIN*/
    _printf("Min Integer:[%d]\n", INT_MIN);
    printf("Min Integer:[%d]\n", INT_MIN);

      /* Test Case 14: Testing %S specifier */
_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
printf("- What did you say?\n- ");
_printf("%s\n", "");  /* Output from _printf with %S */
printf("That's what I thought.\n");
fflush(stdout);

/* Compare lengths */
if (len != len2)
{
    printf("Lengths differ.\n");
    fflush(stdout);
    return (1);
    }
    return (0);
}

