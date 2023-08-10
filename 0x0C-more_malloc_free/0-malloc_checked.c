#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *potr;
potr = malloc(b);
if (potr == NULL)
exit(98);
return (potr);
}

