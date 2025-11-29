#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all node data, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum;
dlistint_t *current;

sum = 0;
current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
