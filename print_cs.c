#include "main.h"
#include <stdio.h>


/**
 *print_c - prints char on stdout
 *@c: char to be printed which is va_list type from printf
 *return: always
 */
int print_i(va_list c)
{
char j = (char)va_arg(c, int);
if (j)
_putchar(j);
_putchar(' ');
return (1);
}

/**
 *print_s - prints a string on stdout
 *@s: is pointer to string to be printed
 *return: num of elements
 */
int print_s(va_list s)
{
unsigned int n = 0;
char *t = va_arg(s, char *);
if (t[n] = NULL)
t = "(nil)";
if (t && t[n])
{
while (t[n] != '\0')
{
_put(t[n]);
_putchar(' ');
n++;
}
}
return (n);
}
