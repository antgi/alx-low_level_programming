#include <stdio.h>
#include "lists.h"
/**
 * print_list - This will print all the elements of a linked list
 * @h: This pointer to the list_t list to print
 *
 * Return: It will return the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t lis = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
lis++;
}
return (lis);
}
