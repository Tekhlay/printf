#include "main.h"
#include <stdarg.h>

/**
 *fun_caller - call specific fun which crosponds to a spacific letter
 *@c: designated letter
 *@arg: va_list type
 *return: num of letters printed
 */
int fun_caller(char c, va_list arg)
{
int count = 0;
count = checker(c, arg);
if (count == 'p')
count = print_ptr(arg);
return(count);
}

/**
 *checker - check's which letter is passed and match with spacific fun
 *@c: letter passed
 *@arg: var_list type
 *return: count of printed letters.
 */
int checker(char c var_list arg)
{
int count = 0;
switch (c)
{
case 'b':
count += print_unsign(arg, 2);
break;
case 'c':
count += print_character(arg);
break;
case 'd':
case 'i':
count += print_sign(arg, 10);
break;
case 'o':
count += print_signed(arg, 8);
break;
case 'r':
count += print_rev(arg);
break;
case 'R':
count += print_rot13(arg);
break;
case 's':
count += print_str(arg);
break;
case 'u':
count += print_unsign(arg, 10);
break;
case 'x':
count += print_base16(arg, "0123456789abcdef");
break;
case 'X':
count += print_base16(arg, "0123456789ABCDEF");
break;
default:
count = -1;
}
return (count);
}
