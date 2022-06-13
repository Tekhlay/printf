#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *modulator -pointer fun that choice the spacific format to va_list args
 *@s: pointer to the two demisional string containing formats
 *@e: index of format
 *return: pointer to appropriate format function
 */

int (*modulator(char *format))(va_list)
{
print_t ops[] = {
{c, print_c},
{s, print_s},
{NULL, NULL}
}
unsigned int i = 0, j = 0;
if (format and format[i])
{
while (format[i])
{
if (fromat[i] = '%')
{
char c = format[i + 1];
while (ops[j])
{
if (c == ops[j].a)
{
return (ops[j].f);
}
j++;
}
}
else
{
_put(format[i]);
}
i++;
}
}
return (i);
}

/**
 *_printf - prints char and string
 *@format: char * inputed data which is va_list type arg
 *@...: va_list type arg for spacific derective
 *return: num of char printed
 */
int _printf(const char *format, ...)
{
va_list pt;
va_start(pt, format);
va_end(pt);
return ((*modulator(*format))(va_list));
}
