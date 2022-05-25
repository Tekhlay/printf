#include "main.h"
#include <stdarg.h>

/**
 *print_base - points to base_converter
 *@arg: va_list arg
 *return: address pointer
 */
int print_base(va_list arg)
{
unsigned long int v1, v2;
char c[100];
int x, y, count;
v1 = (unsigned long int)va_arg(arg, void*);
v2 = v1;
count = 1;
x = 0
if (!v1)
{
_putchar("(nil)");
return (5);
}
while (v2)
{
v2 /= 16;
count++;
}
c[count + 1] = '\0';
while (v1 > 0)
{
y = (v1 % 16);
if (y >= 0 && n <= 9)
c[count] = ((char)(y + '0'));
else
c[count] = ((char)(y + 'w'));
count--;
v1 /= 16;
}
c[0] = '0';
c[1] = 'x';
while (c[x] != '\0')
{
_putchar(c[x]);
x++;
}
return (i);
}
/**
 *print_str - print string using rot13
 *@arg: va_list arg
 *return: length of the string
 */
int print_str(va_list arg)
{
register short i, j;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *s = va_arg(arg, char *);
if (!s)
{
return (-1);
}
for (j =0; s[j]; j++)
{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
_putchar(s[j]);
else
{
for (i = 0; i <= 52; i++)
if (s[j] == rot13[i])
_putchar(ROT13[i]);
}
}
return (j);
}
/**
 *print_rev - print string in reverse
 *@arg: va_list arg
 *return: length of str
 */
int print_rev(va_list arg)
{
int i = 0;
int j;
char *s = va_arg(char *);
if(!s)
return (-1);
while(s[i])
{
i++;
}
for (j = i - i; j >= 0; j--)
{
_put(s[j]);
}
return (i);
}
