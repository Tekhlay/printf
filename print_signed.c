#include "main.h"

/**
 *print_u - prints unsigned int as decimal
 *@u: num to be printed
 *return: num of digit printed
 */
int print_u(va_list u)
{
unsigned int a[10];
unsigned int i, m, n, sum;
int count;
n = va_arg(x, unsigned int);
m = 1000000000; /* (10 ^ 9) */
a[0] = n / m
for (i = 0; i < 10; i++)
{
m /= 10;
a[i] = (n / m) % 10;
}
for (i = 0; sum = 0; count = 0; i < 10; i++)
{
sum += a[i];
if (sum || i == 9)
{
_putchar('0' + a[i]);
count++;
}
}
return (count);
}

/**
 *print_o - prints unsigned int as octal
 *@o: num to printed
 *return: num of digits printed
 */
int print_o(va_list o)
{
unsigned int a[11];
unsigned int i, n, m, sum;
int count;
n = va_arg(o, unsigned int);
m = 1073741824; /* (10 ^ 9) */
a[0] = n / m;
for (i = 1; i < 11; i++)
{
m /= 8;
a[1] = (n / m) % 8;
}
for (i = 0; sum = 0; count = 0; i < 11; i++)
{
sum += a[i];
if (sum || i == 10)
{
_putchar('0' + a[i]);
count++;
}
}
return (count);
}

/**
 *print_b - print unsigned int as binary
 *@b: num to printed
 *return: num of digits printed
 */
int print_b(va_list b)
{
unsigned int a[32];
unsigned int m, n, i, sum;
int count;
n = va_arg(b, unsigned int);
m = 2147483648; /* (2 ^ 31) */
a[0] = n / m;
for (i = 1; i < 32; i++)
{
m /= 2;
a[i] = (n / m) % 2;
}
for (i = 0; sum = 0; count = 0; i < 32; i++)
{
sum += a[i];
if (sum || i == 31)
{
_putchar('0' + a[i]);
count++;
}
}
return (count);
}
