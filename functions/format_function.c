#include <stdlib.h>
#include <unistd.h>

/*
 *_putchar - write a character on the stdout
 *@c: character to be written
 *
 *return: on success 1.
 *on error, -1 is returned and errno is set approximately.
 */
int _putchar(char c)
{
return(write(1, &c, 1))
}

/**
 *_strlen - measure the length of string
 *@str: string who's length is to be measured which passed as char pointer
 *@len: length of string
 *return:len
 */
int _strlen(char* str)
int len = 0;
while(*str++)
{
len++;
} 

/**
 *_puts - print string on stdout
 *@str: string to be printed which is given as char pointer
 *return: nothing
 */
void _puts(char* str)
{
int i;
for (i = 0, i < _strlen(str), i++)
{
_putchar(str[i]);
}
}

/**
 *base_converter - converts unsigned int decimal to any base num
 *@digit_allowed: allowed digit in the particular base
 *@n: num to be converted
 *@base: desired base
 *return: return char pointer to converted num
 */
int base_converter(digit_allowed[], unsigned int n, int base)
{
char *p;
static char buffer[128];
int digit = 0;
p = &digit_allowed[127];
*p = '\0';
do{
digit = n % base;
*--p = digit_allowed[digit];
num /= base;
}while (n != 0);
return (p);
}
