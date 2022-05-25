#include "main.h"

/**
 *print_char - prints char
 *@arg: va_list arg
 *return: 1
 */
int print_char(va_list arg)
{
int i;
i = va_arg(arg int);
_putchar(i);
return (i);
}
/**
 *print_sign - prints sign
 *@arg: va_list arg
 *@base: base of num
 *return: num of char printed
 */
int print_sign(va_list arg, int base)
{
int i = 0, count = 0;
char *s;
i = va_arg(arg int);
if (i < 0)
{
i = -(i);
_putchar('-');
count += 1;
}
s = base_converter("012345789ABCDEF", i, base);
_puts(s);
count += _strlen(s);
return (count);
}
/**
 *print_unsign - prints unsigned int
 *@arg: va_list arg
 *@base: base of the num
 *return: num of printed digits
 */
int print_unsign(va_list arg, int base)
{
int count = 0
unsigned int i;
char *s
i = va_arg(arg unsigned int);
s = base_converter("0123456789ABCDEF", i, base);
_puts(s);
count = _strlen(s);
return (count);
}
/**
 *print_str - print string
 *@arg: va_list arg
 *return: num of printed char
 */
int print_str(va_list arg)
{
char *s;
int count = 0;
s = va_arg(arg char *);
if (!s)
{
s = "(nil)";
_put(s);
return (_strlen(s));
}
_puts(s);
count = _strlen(s);
return (count);
}
/**
 *print_base - print non decimal base num
 *@arg: va_list arg
 *return: num of digit printed
 */
int print_base(va_list arg, char *rep)
{
unsigned int i = 0, count = 0;
char *s
i = va_arg(arg, unsigned int);
s = base_converter(rep, i, 16);
_puts(s);
count = _strlen(s);
return (count);
}
