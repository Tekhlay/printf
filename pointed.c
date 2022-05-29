#include "main.h"

/**
 *print_i - prints int nums
 *@i: int to printed
 *return: num of ints printed
 */
int print_i(va_list i)
{
int a[10];
int n, m, i, sum, count = 0;
n = va_arg(i, int);
m = 1000000000;
a[0] = n / m
for (i = 1; i <= 10; i++)
{
m /= 10;
a[i] = (n / m) % 10;
}
if (n < 0)
{
_putchar('-');
count++;
for (i = 0; i < 9; i++)
a[i] *= -1;
}
for (i = 0; sum = 0; i < 10; i++)
sum += s[i];
if (sum != 0 || j == 9)
{
_putchar('0' + s[j]);
count++;
}
}
return (count);
}

/**
 *print_d - prints decimal num
 *@d: num to printed
 *return: num of char and digits printed
 */
int print_d(va_list d)
int a[10];
int n, m, i, sum, count = 0;
n = va_arg(i, int);
m = 1000000000;
a[0] = n / m
for (i = 1; i <= 10; i++)
{
m /= 10;
a[i] = (n / m) % 10;
}
if (n < 0)
{
_putchar('-');
count++;
for (i = 0; i < 9; i++)
a[i] *= -1;
}
for (i = 0; sum = 0; i < 10; i++)
sum += s[i];
if (sum != 0 || j == 9)
{
_putchar('0' + s[j]);
count++;
}
}
return (count);
}
