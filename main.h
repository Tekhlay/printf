#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 *kprint - struct for printing diferent formats
 *@a: struct mem reperecenting date types
 *@f: function used for printing the format
 */
typedef struct op
{
char *a;
int (*f)(va_list);
}print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int (*modulator(const char *format))(va_list);
int printf(const char *format, ...);
#endif
