#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - This will add a new node at the beginning of a linked list
 * @head: Represent double pointer to the list_t list
 * @str: Holds the new string to add in the node
 *
 * Return: Describes the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int leng = 0;
while (str[leng])
leng++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->leng = leng;
new->next = (*head);
(*head) = new;
return (*head);
}
