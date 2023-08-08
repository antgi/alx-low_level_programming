#include "main.h"
#include <stdlib.h>
/**
 * create_array - it creates an array of size and assign a char c
 * @size: this is size of array
 * @c: char to assign
 * Description: creates an array of size size and assign char c
 * Return: pointer to array, NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
char *strg;
unsigned int i;
strg = malloc(sizeof(char) * size);
if (size == 0 || strg == NULL)
return (NULL);
for (i = 0; i < size; i++)
strg[i] = c;
return (strg);
}
