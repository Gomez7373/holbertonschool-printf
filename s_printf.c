#include "main.h"

/**
* s_printf - Function that prints a string
* @args: Arguments
*
* Return: Number of characters in the string
*/
int s_printf(va_list args)
{
char *s;
int x = 0;

/* Extract the string argument from the variable arguments list */
s = va_arg(args, char *);

/* Check if the string is NULL */
if (!s)
{
s = "(null)";

/* Print each character of the "(null)" string */
for (x = 0; s[x] != '\0'; x++)
{
_putchar(s[x]);
}

/* Return the length of "(null)" */
return (6);  /* Assuming you are returning the length of "(null)" */
}
else
{
/* Print each character of the provided string */
for (x = 0; s[x] != '\0'; x++)
{
_putchar(s[x]);
}

/* Return the actual length of the string */
return (x);
}
}
