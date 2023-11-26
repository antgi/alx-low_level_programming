#include "main.h"
/**
 * flip_bits - It will count the number of bits to change
 * to get from one number to another
 * @n: Holds the first number
 * @m: Holds the second number
 *
 * Return: Will return number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}