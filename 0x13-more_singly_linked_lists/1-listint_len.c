#include "lists.h"
/**
 * listint_len - This will return the number of elements in a linked lists
 * @h: Describes linked list of type listint_t to traverse
 *
 * Return: This returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t numb = 0;
while (h)
{
numb++;
h = h->next;
}
return (numb);
}
