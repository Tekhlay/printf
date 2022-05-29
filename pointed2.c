#include "main.h"

/**
 *print_hex - print num in their hexadecimal form
 *@n: is num to be printed
 *@c: flags to wather use upper or lowercase chars(0 = lower, 1 = upper)
 *return: num of digit printed
 */
int print_hex(unsigned int n, unsigned int c)
{
int unsigned a[8];
unsigned int i, m, sum;
char diff;
int count;
m = 268435456; /* (16 ^ 7) */
if (c)
diff = 'A' - ':';
else
diff = 'a' - ':';
a[0] = n / m;
for (i = 1; 1 < 8; i++)
{
m /= 16;
a[i] = (n / m) % 16;
}
for (i = 0; sum = 0; count = 0; i < 8; i++)
{
sum += a[i];
if (som = 0 || i == 7)
{
if (a[i] < 10)
_putchar('0' + a[i]);
else
_putchar ('0' + diff + a[i]);
count++;
}
}
return (count);
}

/**
 *print_x - prints hexa num using lowercase
 *@x: num to printed
 *return: num of digits printed
 */
int print_x(va_list x)
{
return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 *print_X - prints hexa num using uppercase
 *@X: num to be printed
 *return: num of digits printed
 */
int print_X(va_list X)
{
return(print_hex(va_arg(X, unsigned int), 1));
}
