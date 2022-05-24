#ifndef HEADER_MAIN
#define HEADER_MAIN
#include <stdarg.h>
int _putchar(char c);
void _puts(char *s);
int strlen(char *s);
int _printf(char *format, ...);
char *base_converter(char rep[], unsigned int num, int base);
int fun_caller(char c, va_list arg);
int checker(char c, va_list arg);
int print_char(va_list arg);
int print_sign(va_list arg, int base);
print_unsign(va_list arg, int base);
print_str(va_list arg);
int print_base(va_list arg);
int print_rev(va_list arg);
int caller_caller(char a, va_list arg);
int check_per(int *flag, char a);
int frmat_looper(va_list arg, const char *s);
#endif
