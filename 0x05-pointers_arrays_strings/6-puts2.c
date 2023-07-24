
#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int len = 0;
int t = 0;
char *b = str;
int c;
while (*b != '\0')
{
b++;
len++;
}
t = len - 1;
for (c = 0 ; c <= t ; c++)
{
if (c % 2 == 0)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
