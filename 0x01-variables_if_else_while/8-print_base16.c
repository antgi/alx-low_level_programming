#include <stdio.h>
/**
 * main - outputs all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char ch;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 'A'; ch <= 'F'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
