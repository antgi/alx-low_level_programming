#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int b, c, len;
len = 0;
for (b = 0; str[b] != '\0'; b++)
len++;
c = (len / 2);
if ((len % 2) == 1)
c = ((len + 1) / 2);
for (b = c; str[b] != '\0'; b++)
_putchar(str[b]);
_putchar('\n');
}
