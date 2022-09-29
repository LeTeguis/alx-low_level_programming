#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add
 *
 * @head: potential list head
 * @n: value to add
 *
 * Return: new node or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		 dlistint_t *next = *head;

		 while (next->next != 0)
		 {
			 dlistint_t *actual = next;

			 next = next->next;
			 next->prev = actual;
		 }

		 new_list->prev = next;
		 next->next = new_list;
	}
	return (new_list);
}
