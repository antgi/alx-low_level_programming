#include "main.h"
/**
 * get_bit - Will return the value of a bit at an index in a decimal number
 * @n: Represents the number to search
 * @index: Describes the index of the bit
 *
 * Return: Will return value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_valu;
if (index > 63)
return (-1);
bit_valu = (n >> index) & 1;
return (bit_valu);
}
