#include <stdio.h>
/**
 * main -  single digit numbers of base 10 starting from 0,
 * since putchar() accepts character we can see ASCII
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
