#include "lists.h"
/**
 * free_listint - It will free a linked list
 * @head: Represents the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
