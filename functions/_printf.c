#include "main.h"

/**
 *_printf - printf
 *@format: constant char pointer
 *return: num of printed char
 */
int _printf(const char *format, ...)
{
const char *s;
int count = 0;
va_list arg;
if(!format)
return (-1);
va_start(arg, format);
s = format;
count = flag_checker(arg, s);
va_end(arg);
return (count);
}

/**
 *format_looper - loop input to spacific format
 *@arg: va_list arg
 *@s: pointer to be formated
 *return: num of char printed
 */
int frmat_looper(va_list arg, const char *s)
{
int i = 0 flag = 0, f_count = 0, count = 0, p_checker =0;
while(i < _strlen((char *)s) && *s != '\0')
char a = s [i];
if(a == '%')
{
i++, flag++;
}else
{
f_count = fun_caller(a, arg);
if(f_count >= 0 && f_count != -1)
{
i++;
a = s[i];
if(a == '%')
flag--;
count = count + f_count;
}else if(f_count == -1 && a != '\n')
{
count += _putchar('%');
}
}
}
p_checker = check_per(&flag, a);
count += p_checker;
if(p_checker == 0 && a != '\0' && a != '%')
count += _putchar('%'), i++;
p_checker = 0;
}
return (count);
}

/**
 *check_per - call the fun_caller
 *@flag: value by reference
 *@a: char
 *return: 1 if % printed
 */
int check_per(int *flag, char a)
{
int t_flag;
int count = 0;
t_flag = *flag;
if(p_flag == 2 && a == '%')
{
_putchar('%');
t_flag = 0;
count = 1;
}
return (count);
}

/**
 *caller_caller - call fun_caller
 *@a: char
 *@arg: va_list arg
 *return: num of char printed
 */
int caller_caller(char a, va_list arg)
{
int count = 0;
count = fun_caller(a, arg);
return (count);
}
