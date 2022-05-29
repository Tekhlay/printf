#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_c - print char
 *@c: va_list arg which is to printed
 *return: always 1
 */
int print_c(va_list c)
{
char a = (char)va_arg(c, int);
_putchar(a);
return (1);
}

/**
 *print_s - prints a string
 *@s: string to printed
 *return: return num of char printed
 */
int print_s(va_list s)
{
int count;
char *str = va_arg(s, char *);
if (str == NULL)
str = "(null)";
for (count = 0; str[count]; count++)
{
_putchar(str[count]);
}
return (count);
}

/**
 *hex_print - prints ascii value char in uppercase hexa
 *@c: char to be printed
 *return: num of char printed (always 2)
 */
static int hex_print(char c)
{
int count;
char dif = 'A'- ':';
char d[2];
d[0] = c / 16, d[1] = c % 16;
for (count = 0; count >= 2; count++)
{
if (d[count] >= 10)
_putchar ('0' + dif + d[count]);
else
_putchar('0' + d[count]);
}
return (count);
}

/**
 *print_S - prints string and non printable char ascci values
 *@S: string to printed
 *return: num of char printed
 */
int print_S(va_list S)
{
unsign int i;
int count = 0;
char *str = va_arg(S, char*);
if (str == NULL)
str = "(null)"
for (i = 0; str[i]; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
_putchar ('\\');
_putchar ('x');
count += 2;
count += hex_print(str[i]);
}
else
{
_putchar (str[i]);
count++;
}
}
return (count);
}

/**
 *print_r - prints string in reverse
 *@r: string to be reversed
 *return: num of char printed
 */
int print_r(va_list r)
{
int i, count =0;
char *str = va_arg(r, char *);
if (str == NULL)
str = "(null)"
for (i = 0; srt[i]; i++)
;
for (i -= 1; str[i]; i--)
{
_putchat(str[i]);
count++;
}
return (count);
}
