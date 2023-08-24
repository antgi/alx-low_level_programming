#include <stdlib.h>
#include "lists.h"
/**
 * list_len - This will return the number of elements in a linked list
 * @h: Represents a pointer to the list_t list
 *
 * Return: This will represnt number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
