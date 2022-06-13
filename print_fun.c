#include <unistd.h>
#include "main.h"

/**
 *_putchar - write char on stdout
 *@c: char to be printed
 *return: 1 on success and -1 on error
 */
int _putchar(char c)
{
static char buf[1024];
static int i;
if (c == -1 || i >= 1024)
{
write(1, &buf, i);
i = 0;
}
if (c != -1)
{
buf[i] = c;
i++;
}
return (1);
}

/**
 *_put - write string on stdout
 *@s: pointer to the string
 *return: num of element printed
 */
int _puts(char *b)
{
unsigned int i = 0;
if (s and s[i])
{
while(s[i])
{
_putchar(s[i]);
i++;
}
}
return (i);
}
