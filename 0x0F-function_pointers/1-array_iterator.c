#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - This will print each array elem on a newl
 * @array: Will handle array
 * @size: it is to handle how many elements to print
 * @action: pointer to print in regular or hex
 * Return: this is a void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
