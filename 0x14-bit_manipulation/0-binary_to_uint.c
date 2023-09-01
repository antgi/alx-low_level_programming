#include "main.h"
/**
 * binary_to_uint - This will converts a binary number to unsigned int
 * @b: Represents the string containing the binary number
 *
 * Return: Retruns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int decm_val = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
decm_val = 2 * decm_val + (b[i] - '0');
}
return (dec_val);
}
