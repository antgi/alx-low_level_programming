#include "function_pointers.h"
/**
 * int_index - This will return index place if comparison = true, else -1
 * @array: an array
 * @size: Will represent size of elements in array
 * @cmp: It is a pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
