#include "lists.h"
/**
 * free_dlistint - This frees a dlistint_t list
 *
 * @head: holds head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
if (head != NULL)
while (head->prev != NULL)
head = head->prev;
while ((tmp = head) != NULL)
{
head = head->next;
free(tmp);
}
}
