#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node (starting from 0)
 *
 * Return: pointer to the at the given index, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *current;

current = head;
for (i = 0; current != NULL; i++)
{
if (i == index)
return (current);
current = current->next;
}
return (NULL);
}
