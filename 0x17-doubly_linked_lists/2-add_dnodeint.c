#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add
 *
 * @head: potential list head
 * @n: value to add
 *
 * Return: new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_list = 0;

	new_list = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_list == 0)
		return (0);
	new_list->n = n;
	new_list->prev = 0;
	new_list->next = 0;
	if (head == 0)
		return (new_list);
	else if (*head == 0)
		*head = new_list;
	else
	{
		 dlistint_t *prev = *head;

		 while (prev->prev != 0)
		 {
			 dlistint_t *actual = prev;

			 prev = prev->prev;
			 prev->next = actual;
		 }

		 new_list->next = prev;
		 prev->prev = new_list;
	}
	return (new_list);
}
