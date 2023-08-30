#include "lists.h"
/**
 * print_listint - This will print all the elements of a linked list
 * @h: Represents the linked list of type listint_t to print
 *
 * Return: This will return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t numb = 0;
while (h)
{
printf("%d\n", h->n);
numb++;
h = h->next;
}
return (numb);
}
