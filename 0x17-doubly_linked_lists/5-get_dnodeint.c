#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - get
 *
 * @head: potential list head
 * @index: value to add
 *
 * Return: node at index or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = 0;

	if (head == 0)
		return (0);
	else
	{
		 dlistint_t *first = head;
		 unsigned int i = 0;

		 while (first->prev != 0)
		 {
			 dlistint_t *tmp = first;

			 first = first->prev;
			 first->next = tmp;
		 }

		 while (i < index && first != 0)
		 {
			 dlistint_t *tmp = first;

			 first = first->next;
			 first->prev = tmp;
			 i++;
		 }
		 node = first;
	}
	return (node);
}
