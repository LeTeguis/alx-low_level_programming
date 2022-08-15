#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop
 *
 * @head: list
 *
 * Description: pop node
 *
 * Return: value of node is pop
 */

int pop_listint(listint_t **head)
{
	listint_t *pop = 0;
	int value = 0;

	if (head == 0 || *head == 0)
		return (value);
	pop = *head;
	*head = (*head)->next;
	value = pop->n;
	free(pop);
	return (value);
}
